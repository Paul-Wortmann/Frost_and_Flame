/**
 * Copyright (C) Paul Wortmann, PhysHex Games, www.physhexgames.com
 * This file is part of "Frost And Flame"
 *
 * "Frost And Flame" is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 only.
 *
 * "Frost And Flame" is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with "Frost And Flame" If not, see <http://www.gnu.org/licenses/>.
 *
 * @author  Paul Wortmann
 * @email   physhex@gmail.com
 * @website www.physhexgames.com
 * @license GPL V2
 * @date 2011-11-11
 */

#include "utilities_file.hpp"

std::string fileExtention(const std::string &_fileName)
{
    const char16_t marker = '.';
    std::string r_returnString = "";
    bool markerFound = false;
    uint16_t fileLength = _fileName.length();
    for (int16_t i = fileLength-1; i >= 0; i--)
    {
        if (!markerFound)
        {
            if (_fileName[i] != marker)
                r_returnString += _fileName[i];
            else
                markerFound = true;
        }
    }
    uint16_t r_fileLength = r_returnString.length();
    std::string returnString = "";
    for (int16_t i = r_fileLength-1; i >= 0; i--)
            returnString += r_returnString[i];
    return returnString;
}

std::string stripPath(const std::string &_fileName)
{
    const char16_t marker = '/';
    std::string r_returnString = "";
    bool markerFound = false;
    uint16_t fileLength = _fileName.length();
    for (int16_t i = fileLength-1; i >= 0; i--)
    {
        if (!markerFound)
        {
            if (_fileName[i] != marker)
                r_returnString += _fileName[i];
            else
                markerFound = true;
        }
    }
    uint16_t r_fileLength = r_returnString.length();
    std::string returnString = "";
    for (int16_t i = r_fileLength-1; i >= 0; i--)
            returnString += r_returnString[i];
    return returnString;
}

std::string fileToString(const std::string &_fileName)
{
    std::ifstream fileStream(_fileName, std::ios::in);
    if (fileStream.fail())
    {
        perror(_fileName.c_str());
        gLogWrite(LOG_ERROR, "Error - Failed to open file: " + _fileName, __FILE__, __LINE__, __FUNCTION__);
    }
    else
    {
        std::string fileData = "";
        while(!fileStream.eof())
        {
            std::string lineData = "";
            std::getline(fileStream, lineData);
            fileData.append(lineData + "\n");
        }
        fileStream.close();
        return fileData;
    }
    return nullptr;
}

const char *fileToBuffer(const std::string &_fileName)
{
    return (fileToString(_fileName)).c_str();
}

bool re_fileToBufferV(const std::string &_fileName, std::vector<unsigned char> &_buffer)
{
    std::fstream fileStream(_fileName.c_str(), std::ios::in | std::ios::binary);
    if (fileStream.fail())
    {
        perror(_fileName.c_str());
        gLogWrite(LOG_ERROR, "Error - Failed to open file: " + _fileName + " error : " + std::strerror(errno), __FILE__, __LINE__, __FUNCTION__);
        return false;
    }
    fileStream.seekg(0, std::ios::end);
    uint16_t file_size = fileStream.tellg();
    fileStream.seekg(0, std::ios::beg);
    file_size -= fileStream.tellg();
    _buffer.resize(file_size);
    fileStream.read((char*)&(_buffer[0]), file_size);
    fileStream.close();
    return true;
}

bool fileExists(const std::string &_fileName)
{
    std::fstream fileStream(_fileName.c_str(), std::ios::in);
    if (fileStream.fail())
    {
        return false;
    }
    fileStream.close();
    return true;
}
