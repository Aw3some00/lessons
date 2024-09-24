#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
struct Date{
    int year=1970;
    int month=1;
    int day=1;
    
};





bool Compare(const Date&lhs,const Date&rhs){
    if(lhs.year!=rhs.year){
        return lhs.year<rhs.year;
    }
    if(lhs.month!=rhs.month){
        return lhs.month<rhs.month;
    }
    return lhs.day<rhs.day;
    
}










bool operator<(const Date&lhs,const Date&rhs){
    if(lhs.year!=rhs.year){
        return lhs.year<rhs.year;
    }
    if(lhs.month!=rhs.month){
        return lhs.month<rhs.month;
    }
    return lhs.day<rhs.day;
    
    
    
}
std::string Concatenato(const std::vector<std::string>&parts){
    std::string result;
    for(const auto&part:parts){
        result+=part;
        
    }
    return result;
    
    
}
void swap(int& x,int& y){
    int z=x;
    x=y;
    y=z;
}


int sum(int a,int b){
    return a+b;
}
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
  /*  const size_t m=1000000;
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
        */
  /*  int* ptr=nullptr;
    {
        int x=42;
        ptr=&x;
        
    }
    std::cout<<*ptr<<"\n"; //скомпилируется,но лучше так не делать*/
   /* std::vector<std::string> words={"one","two","three"};
    std::string& ref=words[0];
    words.clear();
    std::cout<<ref<<"\n";//непредсказумое поведение
    */
  //  std::string line;
   // std::getline(std::cin,line);
 /*   std::vector<std::string>parts={"ab","ra","ca","da","bra"};
        std::cout<<Concatenato(parts)<<"\n";*/
    std::vector<Date> dates={{2020,3,15},{2019,1,21},{2021,1,30}};
  //  std::sort(dates.begin(),dates.end(),Compare);
    std::sort(dates.begin(),dates.end(),[](const Date&lhs,const Date&rhs){return std::tie(lhs.year,lhs.month,lhs.day)<std::tie(rhs.year,rhs.month,rhs.day);});
    //лямбда функция-одноразовая функция [] () {}
 //   std::sort(dates.begin(),dates.end());
    for(const auto&[year,month,day]:dates){
        std::cout<<year<<"."<<month<<"."<<day<<"\n";
    }

            
            
   // return std::tie(lhs.year,lhs.month,lhs.day)<std::tie(rhs.year,rhs.month,rhs.day);
    return 0;
        }
    

        
        
     

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    


