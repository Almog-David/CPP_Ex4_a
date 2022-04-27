#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace coup;
using namespace std;

TEST_CASE("game number 1")
{
    Game game_1 = Game();
    Duke duke(game_1, "player1");
    Assassin assassin(game_1, "player2");
    Ambassador ambassador(game_1, "player3");
    Captain captain(game_1, "player4");
    Contessa contessa(game_1, "player5");
    CHECK(duke.coins() == 0);
    CHECK_NOTHROW(duke.income());
    CHECK(assassin.coins() == 0);
    CHECK_NOTHROW(assassin.income());
    CHECK(assassin.coins() == 1);
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());
    CHECK_FALSE(contessa.coins() == 3);
    //CHECK_THROWS(assassin.income()); /* not is turn */
    CHECK_NOTHROW(duke.income());
    CHECK(duke.coins() == 2);
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_FALSE(assassin.coins() == 2);
    CHECK(assassin.coins() == 3);
    CHECK_THROWS(captain.block(duke));      /* didnt do a move that need to be blocked */
    CHECK_THROWS(contessa.block(assassin)); /* didnt do a move that need to be blocked */
    CHECK_NOTHROW(duke.block(assassin));
    CHECK(assassin.coins() == 1);
    CHECK_NOTHROW(ambassador.transfer(duke, assassin)); // transfers 1 coin from duke to assassin
    CHECK_NOTHROW(captain.foreign_aid());
    CHECK_NOTHROW(contessa.foreign_aid());

    CHECK_NOTHROW(duke.tax());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.foreign_aid());
    CHECK_NOTHROW(captain.steal(contessa));
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_NOTHROW(duke.tax());

    //     assassin.coup(duke);

    //     contessa.block(assassin);
}