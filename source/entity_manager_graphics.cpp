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

#include "entity_manager_graphics.hpp"

cEntityManagerGraphics::cEntityManagerGraphics(void)
{
    
};

cEntityManagerGraphics::~cEntityManagerGraphics(void)
{
    
};

void cEntityManagerGraphics::initialize(void)
{
    // initialize the entity manager
    m_numEntities = 0;
    if (m_first != nullptr)
    {
        m_freeEntities();
    }
    m_first = new sEntityGraphics;
    m_last  = m_first;
};

void cEntityManagerGraphics::terminate(void)
{
    //terminate entity manager
    m_freeEntities();
    m_numEntities = 0;
};

void cEntityManagerGraphics::m_freeEntities(void)
{
    if (m_first != nullptr)
    {
        sEntityGraphics *entityDel = m_first;
        for(m_temp = m_first->next; m_temp != nullptr; m_temp = m_temp->next)
        {
            if (entityDel != nullptr)
            {
                m_freeEntityData(entityDel);
                delete entityDel;
                entityDel = nullptr;
            }
            entityDel = m_temp;
        }
        if (entityDel != nullptr)
        {
            m_freeEntityData(entityDel);
            delete entityDel;
            entityDel = nullptr;
        }
    }
    m_first = nullptr;
    m_last  = nullptr;
    m_temp  = nullptr;
    m_numEntities = 0;    
};

void cEntityManagerGraphics::m_freeEntityData(sEntityGraphics *_entity)
{

};

sEntityGraphics *cEntityManagerGraphics::getNew(void)
{
    if (m_numEntities == 0)
    {
        if (m_first == nullptr)
        {
            m_first = new sEntityGraphics;
        }
        m_last = m_first;
    }
    else
    {
        m_last->next = new sEntityGraphics;
        m_last = m_last->next;
    }
    m_numEntities++;
    return m_last;
};

sEntityGraphics *cEntityManagerGraphics::getFirst(void)
{
    return m_first;
};
