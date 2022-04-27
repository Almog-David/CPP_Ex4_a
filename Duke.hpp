#include <iostream>
#include "Player.hpp"

namespace coup
{
    class Duke : public Player
    {
    public:
        Duke(Game game, std::string name);
        void tax();                /* take 3 coins without being block */
        void block(Player player); /* can block the foreign_aid from a player */
    };
}