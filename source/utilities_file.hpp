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

#ifndef UTILITIES_FILE_HPP
#define UTILITIES_FILE_HPP

#include "includes.hpp"

std::string fileExtention(const std::string &_fileName);
std::string stripPath(const std::string &_fileName);
std::string fileToString(const std::string &_fileName);
const char* fileToBuffer(const std::string &_fileName);
bool fileToBufferV(const std::string &_fileName, std::vector<unsigned char> &_buffer);
bool fileExists(const std::string &_fileName);

#endif //UTILITIES_FILE_HPP

