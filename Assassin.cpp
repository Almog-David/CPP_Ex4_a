#include <iostream>
#include "Assassin.hpp"
#include "Player.hpp"

namespace coup
{
    Assassin::Assassin(Game game, std::string name)
    {
        this->game = game;
        this->name = name;
        this->player_coins = 0;
        this->player_role = "Assassin";
    }
    void Assassin::coup(Player player) {}
}