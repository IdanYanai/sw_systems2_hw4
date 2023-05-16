#pragma once

using namespace std;

#include "Character.hpp"

namespace ariel {
    class Ninja : public Character{
        private:
            int speed;

        public:
            Ninja(string name, Point location, int hitpoints, int speed) 
            : Character(name, location, hitpoints), speed(speed) {} 

            void move(Character& enemy) {}
            void slash(Character& enemy) {}
    };
}