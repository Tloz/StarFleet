#include "weapon.h"
#include <iostream>

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void Weapon::cool()
{
    if(m_cooldown > 0)
        m_cooldown--;
    else
    {
        m_cooldown = 0;
    }
}

int Weapon::use()
{
    if(m_current_uses_since_cooldown >= m_uses_before_oveheat)
    {
        //overheat
        m_cooldown = m_cooldown_max;
        return -1;
    }
}

void Weapon::debug()
{
    std::cout << "Debuggin weapon " << m_name << " with item number " << m_item_number << ":" << std::endl;
}
