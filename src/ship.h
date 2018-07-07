/*
 * Ship.h
 * <emeric.fremion@gmail.com>
 * header for ship class
 * nothing too fancy here
 */


#ifndef SHIP_H
#define SHIP_H

#include <string>



class Ship
{
public:
    // ctors and dtor
    Ship();
    Ship(std::string name, std::string mat, int lpMax, int pow, int def, int acc, int spd);
    ~Ship();

    // getters
    std::string name() { return m_name; }
    std::string mat() { return m_mat; }
    int currentLife() { return m_lifePoints; }
    int maxLife() { return m_lifePointsMax; }
    int power() { return m_power; }
    int defense() { return m_defense; }
    int accuracy() { return m_accuracy; }
    int speed() { return m_speed; }

    // setters
    void setName(std::string name) { m_name = name; }
    void setMat(std::string mat) { m_mat = mat; }
    void setLife(int ammount);
    void addLife(int ammount);
    void delLife(int ammount);
    void setMaxLife(int i) { m_lifePointsMax = i; }
    void setPower(int i) { m_power = i; }
    void setDefense(int i) { m_defense = i; }
    void setAccuracy(int i) { m_accuracy = i; }
    void setSpeed(int i) { m_speed = i; }

    //
    std::string toString();
    // void debug();
    int attack(Ship *target);
    int take_attack(int i);
    void take_damages(int damages);



private:
    std::string m_name;
    std::string m_mat;
    int m_lifePoints;
    int m_lifePointsMax;
    int m_power;
    int m_defense;
    int m_accuracy;
    int m_speed;

    //Weapon weapon;
};

#endif // SHIP_H
