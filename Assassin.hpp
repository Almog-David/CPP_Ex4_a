#include <iostream>
#include "Player.hpp"

namespace coup
{
    class Assassin : public Player
    {
    public:
        Assassin(Game game, std::string name);
        void coup(Player player); /* kill a player from the game. cost 3 coins. can be clock by some roles */
    };
}