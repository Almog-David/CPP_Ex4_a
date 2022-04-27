#include <iostream>
#include "Duke.hpp"
#include "Player.hpp"

namespace coup
{
    Duke::Duke(Game game, std::string name)
    {
        this->game = game;
        this->name = name;
        this->player_coins = 0;
        this->player_role = "Duke";
    }
    void Duke::tax() {}
    void Duke::block(Player player) {}
}