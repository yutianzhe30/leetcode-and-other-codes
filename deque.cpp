// erasing from deque
#include <iostream>
#include <deque>
#include <unordered_map>
class myclass
{
public:
    int num;
    myclass(int i=1)
    {
    num=i;
    std::cout<<"contructed,i="<<num<<std::endl;
    }
    ~myclass()
    {
    std::cout<<"descontructed,i="<<num<<std::endl;
    }
    void descontruct()
    {
    this->~myclass();
    }

};
int main ()
{
  std::deque<int> mydeque;
  std::deque<myclass>classque;
    std::unordered_map<int,myclass>classmap;
  myclass test1(99);
  test1.descontruct();
  std::cout<<"test1"<<test1.num<<std::endl;
  // set some values (from 1 to 10)
  for (int i=1; i<=5; i++)
  {
//  classque.emplace_back(i);
  classmap.emplace(i,i);
  }
    classmap.at(1).descontruct();
    classmap.erase(2);
    myclass test2(50);
    classmap.insert(50,test2);
    classmap.erase(50);
    std::cout<<"myclass"<<test2.num<<std::endl;
    for (int i=1; i<=5; i++)
  {
    std::cout<<classmap.at(i).num<<std::endl;
  }

  // erase the first 3 elements:
//  classque.erase (classque.begin(),classque.begin()+3);


    std::cin.get();
  return 0;
}
