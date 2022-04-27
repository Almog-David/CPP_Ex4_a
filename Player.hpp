#include <iostream>
#include "Game.hpp"
#pragma once

namespace coup
{
    class Player
    {
    protected:
        Game game;               /* the game which the player is playing */
        std::string name;        /* the player name */
        int player_coins;        /* the amount of coins he have right now */
        std::string player_role; /* the player role in the game */

    public:
        void income();      /* add 1 coin to the amount of coins of the player */
        void foreign_aid(); /* add 2 coin to the amount of coins of the player  - can be block by some roles*/
        void coup(Player);  /* kill a player from the game. cost 7 coins. can be clock by some roles */
        std::string role(); /* return the role of the player */
        int coins();        /* return the amount of coins of the player */
    };
}