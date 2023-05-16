#include "doctest.h"
#include "Team.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("TESTING") {
    Point a = Point(0,0);
    Point b = Point(2,3);
    Cowboy* one = new Cowboy("Idan", a);
    YoungNinja* two = new YoungNinja("Amit", b);
    Team uni(one);

    CHECK(a.distance(b) == sqrt(13));
    CHECK(Point::moveTowards(a, b, 20).getX() == 2);
    CHECK(Point::moveTowards(a, b, 20).getY() == 3);

    CHECK(one->getName() == "Idan");
    CHECK(one->isAlive() == true);
    CHECK_NOTHROW(one->shoot(two));
    CHECK_NOTHROW(two->slash(one));
    CHECK(one->hasBullets() == true);
    CHECK_NOTHROW(one->reload());

    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);

    delete one;
    delete two;
}