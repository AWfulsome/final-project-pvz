#include "plant.hpp"

void Plant::init_coin(char type_, std::string &name_, int cost_, int hp_, int visits_, int reward_)
{
    type = type_;
    name = name_;
    cost = cost_;
    hp = hp_;
    visits = visits_;
}//Plant::init_coin

void Plant::init_horn(char type_, std::string &name_, int cost_, int hp_, int damage_)
{
    type = type_;
    name = name_;
    cost = cost_;
    hp = hp_;
    damage = damage_;
}//Plant::init_horn

void Plant::init_bomb(char type_, std::string &name_, int cost_, int hp_)
{
    type = type_;
    name = name_;
    cost = cost_;
    hp = hp_;
}//Plant::init_bomb

void Plant::init_heal(char type_, std::string &name_, int cost_, int hp_, int heal_)
{
    type = type_;
    name = name_;
    cost = cost_;
    hp = hp_;
    heal = heal_;
}//Plant::init_heal