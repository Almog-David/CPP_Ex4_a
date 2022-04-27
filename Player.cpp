#include <iostream>
#include "Player.hpp"

namespace coup
{
    void Player::income()
    {
        this->player_coins = this->player_coins + 1;
    }
    void Player::foreign_aid()
    {
        this->player_coins = this->player_coins + 2;
    }
    void Player::coup(Player)
    {
    }
    std::string Player::role()
    {
        return this->player_role;
    }
    int Player::coins()
    {
        return this->player_coins;
    }
}