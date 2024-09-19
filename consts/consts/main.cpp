#include <iostream>
#include <vector>
int main() {
  /*  const int c1=42;
    int x;
    std::cin>>x;
    const int c2=2*x;*/
    /* const std::vector<int> v{1,3,5};
    std::cout<<v.size()<<"\n";*/
    //v.clear() ошибка компиляции
    // v[0]=0;
    //не можем присваивать элементы и делать все,что изменяет размер
 /*    int x=42;
    int& ref=x;
    const int& cref=x;
    ++x;
    ++ref;
    //++cref ошибка компиляции
    int* ptr=&x;
    const int* cptr=&x;
    ++*ptr;
    //++*cptr; ошибка
    int y=20;
    cptr=&y;*/
  /*  const int cx=42;
//  int &ref=cx;
    const int& cref=cx;
//  int* ptr=&cx;
    const int* cptr=&cx;*/
   /* int x=42;
    const int cx=13;
    //ptr=&cx ошибка
    const int* cptr=&x;
    cptr=&x;
    int*const ptrc=&x;
    //ptrc=null(ptr); error
    ++*ptrc;
    const int* const cptrc=&x;*/
    const size_t m=1000000;
    const size_t n=10000;
    std::vector<std::string>v(m);
    for(size_t i=0;i!=m;i++){
        v[i].resize(n,'@');
    }
    size_t sum=0;
    for(const auto row:v){
        sum+=row.size();
    }
    std::cout<<sum<<"\n";
        
        
        
        
        
        
     
    return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    


