#include <iostream>
#include <string>

int main() {
    std::string s1="Elementary,Watson";
    std::string s2=s1;
    s1.clear();
    std::cout<<s1<<"\n";
    std::cout<<s2<<"\n";
    int x=42;
    int& ref=x;
    ++x;
    std::cout<<ref<<"\n";
    std::string t1="Elementary";
    std::string& t2=t1;
    t1.clear();
    std::cout<<t2.size()<<"\n";
    //так делать нельзя,выйдет ошибка
    /*
     int x=42;
     int& ref;
     ref=x;
     */
    //следующий вид ошибки,ccылка останется все также на x
    /*
     int x=42;
     int& ref=x;
     int y=20;
     ref=y;
     */
    //УКАЗАТЕЛИ
    int y=42;
    int*ptr=&y;
    ++y;
    std::cout<<*ptr<<"\n";
    
    
    
    
    
    
    
}
