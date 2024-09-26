#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
double destination(int a, int b) {
    return sqrt(a * a + b * b);
}

struct point {
    int x;
    int y;
};

bool operator<(const point& lhs, const point& rhs) {
    return destination(lhs.x, lhs.y) < destination(rhs.x, rhs.y);
}


int main() {
    
    std::vector<point> points {{2,1}, {2,3}, {5,6},{3,2},{1,2}};
    std::sort(points.begin(), points.end());
    std::cout <<"Ответ: \n";
    
    for (auto& p : points) {
        
        std::cout << "(" << p.x << "," << p.y <<")"<<" расстояние между точками: "<<destination(p.y,p.x)<<"\n";
    }

    return 0;
}

