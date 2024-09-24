#include <iostream>
#include <string>
#include <vector>
template <typename T>
T Max(const T& x,const T& y){
    if(x>y){
        return x;
    }
       else
       return y;
    
}
/*
int Max(int x,int y){
    if(x>y){
        return x;
    }
       else
       return y;
    
}*/
template <typename T>
const std::vector<T>&Max(const std::vector<T> &v1,const std::vector<T> &v2){
    if(v1.size()>v2.size()){
        return v1;
    }
    else if(v1.size()<v2.size()){
        return v2;
    }
    else if(v1>v2){
        return v1;
    }
    else{
        return v2;
    }
    
    
    
    
}
//шаблонная структура
template<typename T1,typename T2,typename T3>
struct Triple{
    T1 first;
    T2 second;
    T3 third;
};



int main(){
   std::cout<<Max(1,2)<<"\n";
    std::cout<<Max(3.14159,2.71828)<<"\n";
    std::cout<<Max<double>(3.14,2)<<"\n";//если разные типа указываем на больший
    std::cout<<Max(1,2)<<"\n";
    std::vector<int> v1={1,2,3,4};
    std::vector<int> v2={4,5};
    for(const int&x:Max(v1,v2)){// компилятор сам понимает,что это векторы или стринги
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    Triple<int, int, int> point{-1,3,2};
    Triple<std::string,std::string,int> wordPairsFreq{"Hello","world",42};
    
    return 0;
    
    
    
    return 0;
}


