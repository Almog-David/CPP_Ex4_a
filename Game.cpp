#include <iostream>
#include <vector>
#include "Game.hpp"

namespace coup
{
    Game::Game() {}
    std::string Game::turn()
    {
        return "turn";
    }
    std::vector<std::string> Game::players()
    {
        return this->players_list;
    }
    std::string Game::winner()
    {
        return "player";
    }

}