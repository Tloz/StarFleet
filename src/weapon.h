#ifndef WEAPON_H
#define WEAPON_H

#include <string>


//enum class WeaponType
//{
//    Canon,
//    Missile
//};

class Weapon
{
public:
    Weapon();
    ~Weapon();
    std::string name() { return m_name; }
    int item_number() { return m_item_number ;}
    int power() { return m_power; }
    int accuracy() { return m_accuracy; }
    int cooldown() { return m_cooldown; }
    int cooldown_max() { return m_cooldown_max; }
    int uses_before_oveheat() { return m_uses_before_oveheat; }
    int current_uses_since_cooldown(){ return m_current_uses_since_cooldown; }
    void cool();
    int use();

    void debug();

private:
    std::string m_name;
    int m_item_number; // id in database
    int m_power;
    int m_accuracy;
    int m_cooldown; // status
    int m_cooldown_max; // aka cooldown time, should never change
    int m_uses_before_oveheat;
    int m_current_uses_since_cooldown; // should never change
//    WeaponType type;
};

#endif // WEAPON_H
