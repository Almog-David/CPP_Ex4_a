#include <iostream>
#include "Player.hpp"

namespace coup
{
    class Ambassador : public Player
    {
    public:
        Ambassador(Game game, std::string name);
        void transfer(Player from, Player to); /* transter one coin from one player to another */
        void block(Player player);             /* block the steal option from the captain */
    };
}