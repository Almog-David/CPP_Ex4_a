#include <iostream>
#include "Contessa.hpp"
#include "Player.hpp"

namespace coup
{
    Contessa::Contessa(Game game, std::string name)
    {
        this->game = game;
        this->name = name;
        this->player_coins = 0;
        this->player_role = "Contessa";
    }
    void Contessa::block(Player player) {}
}