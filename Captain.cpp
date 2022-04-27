#include <iostream>
#include "Captain.hpp"
#include "Player.hpp"

namespace coup
{
    Captain::Captain(Game game, std::string name)
    {
        this->game = game;
        this->name = name;
        this->player_coins = 0;
        this->player_role = "Captain";
    }
    void Captain::block(Player player) {}
    void Captain::steal(Player player) {}
}