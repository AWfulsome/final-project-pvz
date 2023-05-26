#include <iostream>

#include "plant.hpp"

Plant plantsLib[4];

void get_init_data()
{
    char plantType, dollarSign;
    std::string plantName;
    int cost, hp;
    int coinVisits, coinReward;
    int hornDamage;
    int healPoints;

    for (int i = 0; i < 4; ++i)
    {
        std::cin >> plantType >> plantName >> dollarSign >> cost >> hp;
        if (plantType == 'C')
        {
            std::cin >> coinVisits >> coinReward;
            plantsLib[i].init_coin(plantType, plantName, cost, hp, coinVisits, coinReward);
        }//if
        else if (plantType == 'S')
        {
            std::cin >> hornDamage;
            plantsLib[i].init_horn(plantType, plantName, cost, hp, hornDamage);
        }//else if
        else if (plantType == 'B')
        {
            plantsLib[i].init_bomb(plantType, plantName, cost, hp);
        }//else if
        else if (plantType == 'H')
        {
            std::cin >> healPoints;
            plantsLib[i].init_heal(plantType, plantName, cost, hp, healPoints);
        }//else if
    }//for i
}//get_init_data

int main()
{
    get_init_data();
    return 0;
}//main