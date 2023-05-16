#include <iostream>

using namespace std;

#include "Character.hpp"

namespace ariel {
    class Cowboy : public Character{
        private:
            int bullets;

        public:
            Cowboy(string name, Point location)
             : Character(name, location, 110), bullets(6) {}

            bool hasBullets() {}
            void reload() {}
            void shoot(Character enemy) {}
    };
}