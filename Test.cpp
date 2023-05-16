#include "doctest.h"
#include "Team.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("TESTING") {
    Point a = Point(0,0);
    Point b = Point(2,3);
    Cowboy* one = new Cowboy("Idan", a);
    Team uni(one);
    CHECK(a.distance(b) == sqrt(13));
    CHECK(Point::moveTowards(a, b, 1).getX() == 2);
    CHECK(Point::moveTowards(a, b, 1).getY() == 3);

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
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);
    CHECK(a.getX() == 0);

}