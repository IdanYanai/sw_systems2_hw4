#pragma once

#include <iostream>

using namespace std;

#include "Point.hpp"

namespace ariel {
    class Character {
        protected:
            Point location;
            int hitPoints;
            string name;

        public:
            Character() : location(Point(0,0)), hitPoints(10), name("Bob") {}
            Character(string name, Point location, int hitpoints)
             : location(location), hitPoints(hitpoints), name(name) {}

            bool isAlive() {}
            int distance() {}
            void hit(int damage) {}
            string getName() const {}
            Point getLocation() const {}
            string print();
            
    };
}