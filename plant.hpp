#include <string>

class Plant
{
public:
    char type;
    std::string name;
    int cost, hp, visits, reward, damage, heal;

    void init_coin(char type_, std::string &name_, int cost_, int hp_, int visits_, int reward_);
    void init_horn(char type_, std::string &name_, int cost_, int hp_, int damage_);
    void init_bomb(char type_, std::string &name_, int cost_, int hp_);
    void init_heal(char type_, std::string &name_, int cost_, int hp_, int heal_);
};