#include <iostream>
#include <utility>
#include <tuple>
enum class Color{
    White,
    Red,
    Orange,
    Blue,
};
struct Point{
    double x=0.0;
    double y=0.0;
    double z=0.0;
    Color color;
};
int main(){
    Point point1;
    point1.color=Color::Blue;
    Point point2={1.4,-2.2,-3.98,Color::Red};
    point2.z=32;
    point2.x+=2;
    std::cout<<sizeof(point1)<<"\n";
    std::cout<<sizeof(double)<<"\n";
    std::cout<<sizeof(Color)<<"\n";
    std::pair <double,int> p={42,3.14};
    std::cout<<p.first<<"\n";//для вывода первой части пары
    std::tuple<int,double,Point> t={42,3.14,{.color=Color::Orange}};
    std::cout <<std::get<0>(t)<<"\n";
    std::cout <<std::get<1>(t)<<"\n";
    std::cout <<std::get<2>(t).x<<"\n";
    std::get<2>(t).color=Color::Red;
    
    
    
    
    
    
    
    
    
    
    
}
