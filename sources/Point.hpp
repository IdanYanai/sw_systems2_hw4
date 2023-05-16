#include <iostream>
#include <cmath>

using namespace std;

namespace ariel {
    class Point {
        private:
            int x, y;

        public:
            Point(int inputX, int inputY) : x(inputX), y(inputY) {}
            
            int distance(Point other) {
                return sqrt(pow(this->x - other.getX(), 2) + pow(this->y - other.getY(), 2));
            }

            static Point moveTowards(Point src, Point dst, int distance) {
                int realDistance = src.distance(dst);
                if(distance <= realDistance) {
                    return dst;
                }
                else {
                    double ratio = distance / realDistance;
                    int newX = src.getX() + static_cast<int>(ratio * (src.getX() - dst.getX()));
                    int newY = src.getY() + static_cast<int>(ratio * (src.getY() - dst.getY()));
                    return Point(newX, newY);
                }
                
            }

            int getX() const { return this->x;}
            int getY() const { return this->y;}
    };
}