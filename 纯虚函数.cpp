//抽象类和纯虚函数
#include <iostream>
using namespace std;

class Instrument
{
   public :
     virtual void MakeSound() = 0;
     //纯虚函数（= 0）表示在基类中没有实现这个函数，必须由派生类来实现。
     //抽象类不能直接实例化，必须通过派生类来创建对象。
};

class Accordion : public Instrument
{
   public :
     void MakeSound()
     {
          cout << "Accordion playing...\n";
     }
};

class Piano : public Instrument
{
   public :
     void MakeSound()
     {
          cout << "Piano playing...\n";
     }
};

int main()
{
     Instrument *i1 = new Accordion();
     //i1 -> MakeSound();
     Instrument *i2 = new Piano();
     //i2 -> MakeSound();
     Instrument * instruments[2] = {i1, i2};

     for(int i = 0; i < 2; i++)
     {
          instruments[i] -> MakeSound();
     }

     return 0;
}

Instrument * instruments[2] = {i1, i2}; 这一行代码的目的是创建一个 指针数组，
并且该数组存储的是 Instrument 类型的指针，这些指针分别指向 Accordion 和 Piano 类型的对象

Instrument 类是一个抽象基类，定义了一个纯虚函数 MakeSound。Accordion 和 Piano 是 Instrument 的派生类，并且重写了 MakeSound 方法。

当你通过 instruments 数组中的指针访问 MakeSound 方法时，C++ 的 多态性 会发挥作用。具体来说：

instruments[0] 是一个指向 Accordion 对象的指针，调用 instruments[0]->MakeSound() 时，会调用 Accordion 类中的 MakeSound 方法。
instruments[1] 是一个指向 Piano 对象的指针，调用 instruments[1]->MakeSound() 时，会调用 Piano 类中的 MakeSound 方法。
由于 Instrument 是一个抽象类，无法直接实例化，所以我们使用基类指针（Instrument *）指向派生类对象（Accordion 和 Piano）。
这就是利用多态实现的机制，即通过基类指针访问派生类的实现。


