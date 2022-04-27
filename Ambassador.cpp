#include <iostream>
#include "Ambassador.hpp"
#include "Player.hpp"

namespace coup
{
    Ambassador::Ambassador(Game game, std::string name)
    {
        this->game = game;
        this->name = name;
        this->player_coins = 0;
        this->player_role = "Ambassador";
    }
    void Ambassador::transfer(Player from, Player to) {}
    void Ambassador::block(Player player) {}
}