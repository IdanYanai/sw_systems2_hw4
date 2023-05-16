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
             : location(location), hitPoints(hitpoints), name(move(name)) {}

            bool isAlive() const { return (this->hitPoints > 0);}
            int distance() { return 0;}
            void hit(int damage) {}
            string getName() const { return this->name;}
            Point getLocation() const { return this->location;}
            string print() { return "";}
            
    };
}