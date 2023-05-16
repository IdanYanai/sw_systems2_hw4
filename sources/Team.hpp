#include <iostream>
#include <vector>

using namespace std;

#include "Character.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"

namespace ariel {
    class Team {
        private:
            vector<Character*> warriors;
            Character* leader;

        public:
            Team(Character* leada) : leader(leada) {}
            ~Team() {}

            void add(Character* toAdd) {}
            int stillAlive() { return warriors.size();}

            void attack(Team* other) {}
            void print() {}

    };
}