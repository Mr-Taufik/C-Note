#include <iostream>
using namespace std;

class Instrument
{
   public :
     virtual void MakeSound()
     // virtual 关键字: 声明MakeSound为虚函数，允许在派生类中重写，并支持运行时多态性。
     // 实现: 默认输出 "Instrument playing..."。
     {
          cout << "Instrument playing...\n";
     }
};

class Accordion : public Instrument
{
   public :
     // 员函数 MakeSound:
     // 重写: 提供了Instrument类中虚函数MakeSound的具体实现，输出 "Accordion playing..."。
     void MakeSound()
     {
          cout << "Accordion playing...\n";
     }
};
int main()
{
     Instrument *i1 = new Accordion();
     // 创建一个指向Instrument类型的指针i1，并用new关键字动态分配一个Accordion对象。
     i1 -> MakeSound();
     //i1->MakeSound();: 通过基类指针调用MakeSound函数。
     // 由于MakeSound是虚函数，这将调用Accordion类中重写的版本，输出 "Accordion playing..."
     delete i1;
     return 0;
}
