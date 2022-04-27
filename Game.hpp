#include <iostream>
#include <vector>
#pragma once

namespace coup
{
    class Game
    {
    private:
        std::vector<std::string> players_list; /* list of players */
        int player_turn;                       /* run index that show us which player need to play now - every turn it will move */
        bool active;                           /* tell us if the game is over or not in order to be able to return thr name of the winner */
        std::vector<std::string> last_act;     /* a list of all the players moves -> it will save the game process by the players name in every turn */
    public:
        Game();
        std::string turn();                 /* return the name of the player which is his turn to play. */
        std::vector<std::string> players(); /* return the names of the active players in the game */
        std::string winner();               /* return the name of the winner in the game */
    };

}