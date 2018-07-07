#include "ship.h"

Ship::Ship()
{

}

Ship::Ship(std::string name, std::string mat, int lpMax, int pow, int def, int acc, int spd)
{
    m_name = name;
    m_mat = mat;
    m_lifePoints = lpMax;
    m_lifePointsMax = lpMax;
    m_power = pow;
    m_defense = def;
    m_accuracy = acc;
    m_speed = spd;
}

Ship::~Ship()
{

}

void Ship::setLife(int ammount)
{
    if(ammount >= m_lifePointsMax)
        m_lifePoints = m_lifePointsMax;
    else if(ammount < 0)
        m_lifePoints = 0;
    else
        m_lifePoints = ammount;
}

void Ship::addLife(int ammount)
{
    m_lifePoints += ammount;
    if(m_lifePoints > m_lifePointsMax)
        m_lifePoints = m_lifePointsMax;
}

void Ship::delLife(int ammount)
{
    m_lifePoints -= ammount;
    if(m_lifePoints < 0)
        m_lifePoints = 0;
}


std::string Ship::toString()
{
    return std::string("A");
}

int Ship::attack(Ship *target)
{
    return -1;
}


int Ship::take_attack(int i)
{
    return -1;
}

void Ship::take_damages(int damages)
{

}
