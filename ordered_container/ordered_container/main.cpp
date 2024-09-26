#include <deque>//для дэка
#include <iostream>
#include <list>//для обычного листа
#include <iterator>//для итератора
#include <forward_list>//для передних листов
#include <map>//для словаря
int main() {
    /* std::deque<int> d{1,2,3,4};
     d.push_back(5);
     d.push_back(6);
     d.pop_back();
     d.push_front(0);
     d.push_front(-1);
     d.pop_front();
     for(size_t i=0;i!=d.size();++i){
     std::cout<<d[i]<<"\n";
     }
     std::cout<<"\n\n\n\n";
     for(int x:d){
     std::cout<<x<<"\n";
     }*/
    /*  std::list<int>l{10,15,20};
     l.push_back(5);
     l.push_front(0);
     l.push_back(25);
     l.push_back(30);
     for(int x:l){
     std::cout<<x<<"\n";
     }*/
    
    //дек-это сосиска в памяти,массив это сплошная колбаса из памяти
    
    //    std::array<int,3>point{1,2,-3};
    /*  std::list<int>l{10,15,20};
     auto iter=l.begin();
     std::cout<<*iter<<"\n";
     ++iter;
     std::cout<<*iter<<"\n";
     --iter;
     std::cout<<*iter<<"\n";
     
     
     
     
     
     }*/
    /*  std::list<int>l{10,20,30};
     for(auto iter=l.begin();iter!=l.end();++iter){//прямой ход
     std::cout<<*iter<<"\n";
     }
     for(auto iter=l.rbegin();iter!=l.rend();++iter){//обратный ход
     std::cout<<*iter<<"\n";
     }*/
    /*  std::list<int> l{0,10,15,20};
     auto iter=l.begin();
     l.insert(iter,5);
     for(auto it=l.begin();iter!=l.end();++iter)
     if(*it%2==0){
     it=l.erase(it);
     }
     else
     ++it;
     
     for(int x:l){
     std::cout<<x<<"\n";
     }*/
    /*  std::list<int> l{0,10,15,20};
     auto iter=std::next(l.begin());//l.begin указывает на начало,через некст двигаем указатель вправо,адванс тоже самое,но уже на несколько элементов,3,4.и.т.д,а прев ведет обратно
     std::advance(iter,2);
     auto iter2=iter;
     iter=std::prev(l.end());
     for(int x:l){
     std::cout<<x<<"\n";
     }*/
    //форвард листы,только в одну сторону и добавлять в одну сторону
    /*std::forward_list<int>fl{3,42,5};
     fl.push_front(2);
     //  fl.push_back(3); ошибка
     auto iter=std::next(fl.begin());
     iter=fl.erase_after(iter);
     fl.insert_after(iter,4);
     for(int x:fl){
     std::cout<<x<<"\n";
     }*/
    /* std::vector<int> v{1,2,3,4};
     auto iter=v.begin();
     int *ptr =&v.front();
     int &ref=v.front();
     std::cout<<*iter<<" "<<*ptr<<ref<<"\n";
     v.push_back(5);
     std::cout<<*iter<<" "<<*ptr<<ref<<"\n";*/
    //Инвалидация
    /* *vector
     x iter
     x ptr
     x ref
     *deque
     x iter
     | ptr
     | ref
     *list,forward list
     |iter
     |ptr
     |ref
     */
    /*std::map<std::string,int> years{
     {"Moscow",1147},
     {"Rome",-753},
     {"London",47},
     };
     for(const auto&[city,year]:years){
     std::cout<<city<<"."<<year<<"\n";
     }*/
    
    
    /*  std::map<std::string,int> data;
     std::string key;
     int value;
     while(std::cin>>key>>value){
     data[key]=value;
     }
     data.erase("hello");
     if(auto iter=data.find("test");iter!=data.end()){
     std::cout<<"Found the key "<<iter->first<<" with the value "<<iter->second<<"\n";
     }
     else
     std::cout<<"not found"<<"\n";*/
    //data.insert({key,value})
    //data.insert_or_assign({key,value})
    std::map<std::string,int>freqs;
    std::string word;
    size_t counter=0;

    while(std::cin>>word){
        ++freqs[word];
    }
        for(const auto&[word,freq]:freqs){
            
            std::cout<<word<<"\t"<<freq<<"\n";
            counter++;
        }
    std::cout<<"число слов: "<<counter<<"\n";
    
    return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
