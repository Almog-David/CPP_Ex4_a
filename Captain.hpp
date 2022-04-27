#include <iostream>
#include "Player.hpp"

namespace coup
{
    class Captain : public Player
    {
    public:
        Captain(Game game, std::string name);
        void block(Player player); /* can block the steal option from a player */
        void steal(Player player); /* steal 2 coins from a player. can be block by another captain or an ambassador */
    };
}