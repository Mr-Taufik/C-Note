#include <iostream>
using namespace std;

void introduceMe(const string name, const string city = "huizhou", int age = 0)
{
     cout << "My name is " << name << endl;
     cout << "I am from " << city << endl;
     if(age != 0)
     {
          cout << "I am " << age << " year old" << endl;
     }


}
int main()
{
     introduceMe("taozk", "guangzhou", 19);
     introduceMe("taozk");
     return 0;
}

这段C++代码展示了如何使用默认参数来提高函数的灵活性和可重用性








