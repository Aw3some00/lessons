#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
enum class Color{
    White,
    Red,
    Blue,
    Green
};
int main() {
   /* std::string phrase;
    std::getline(std::cin,phrase);//даем поток входа и даем переменную куда передать поток
    std::cout<<"\n";
    if(phrase.starts_with("hello")){
        std::cout<<"Hi\n";
    }
    if(phrase.ends_with("bye")){
        std::cout<<"Adieux\n";
    }
    return 0;*/
Color color1=Color::White;
    Color color2=Color::Green;
    int value=static_cast<int>(color2);//выводит порядок в классе
    std::cout<<value<<"\n";
Color color3=static_cast<Color>(2);//обратно идет,по порядку берет цвет
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   // const int val=1+2;
  //  std::vector<int> data{1,0,-3,4,-5};
 //   std::sort(data.rbegin(),data.rend());
 //   for(int nums:data){
 //       std::cout<<nums<<" ";
  //  }
    
 /*   std::ranges::sort(data);
    
    for(int nums:data){
         std::cout<<nums<<" ";
    }*/
    /* std::string s="Some string";
    s+=' ';
    s+="functions ";
    std::cout<<s<<"\n";
    std::string sub1=s.substr(5,6);//от 5 элемента выводит 6 символов вправо
    std::cout<<sub1<<"\n";
    std::string sub2=s.substr(12);//от 12 элемента до конца выводит
    std::cout<<sub2<<"\n";
    size_t pos1=s.find(' ');
    std::cout<<pos1<<"\n";
    size_t pos2=s.find(' ',pos1+1);//говорит откуда начинать счет
    std::cout<<pos2<<"\n";
    size_t pos3s=s.find("str");//you can find words or phrases like that
    std::cout<<pos3<<"\n";
    size_t pos4=s.find('#');
    std::cout<<pos4<<"\n";
    if(s.find("string")!=std::string::npos){ //условие выхода если такой фразы не найдено,стринг нпос это число
        
    }
    s.insert(5,"std::");//изменяет саму строку носительницу,вставляет фразу в определенный участок
    std::cout<<s<<"\n";
    s.replace(0,4,"special");//заменяет с 0 по 4 элементы на special
    std::cout<<s<<"\n";
    s.erase(8,5);//c 8 удаляет 5 символов вперед
    std::cout<<s<<"\n";*/
    
    
    
    
    
    
    
    
    
    
    
/*    std::vector <std::string> words;
    size_t words_count;
    std::cin>>words_count;
    words.reserve(words_count);
    for(size_t i=0;i!=words_count;++i){
        
        std::string word;
        std::cin>>word;
        words.push_back(word);
        }
    std::cout<<""<<"\n";
    for(std::string el:words){

        std::cout<<el;
        std::cout<<" ";

    }*/
    
   // int x;
  //  std::vector <int> data {1,2,3,4,5};
  /*  while(std::cin>>x){
        data.push_back(x);
     
    
    }
    while(!data.empty()&&data.back()==0){
        data.pop_back();
    }
    
    
    
    std::cout<<" "<<"\n";
    for(int nums:data){
        std::cout<<nums<<" ";
       
    }*/
  //  std::cout<<data.capacity()<<"\n";
  //  data.push_back(6);
  //  std::cout<<data.capacity()<<"\n";
    
    
}
