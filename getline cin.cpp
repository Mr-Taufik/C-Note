#include <iostream>
using namespace std;

int main()
{
     string name;
     int age;
     cout << "What 's your full name?:" << '\n';
     getline(cin, name );
  //getline(cin, name);:

这行代码用于从标准输入读取一行文本，包含空格。getline函数从输入流（cin）中读取直到遇到换行符（即用户按回车键）为止，将其存储在name变量中。
在程序中，我们使用了getline来读取用户的名字，因为名字可能包含空格，例如："John Doe"。
     
     cout << "What 's your age ?" << '\n';
     cin >> age;

     cout << "Hello" << name << '\n';
     cout << "You are " << age << "years old" << '\n';
     return 0;
}

cin >> age;:

这行代码用于从标准输入读取一个整数（即用户的年龄）。cin用于获取用户输入的数据，并将其存储在age变量中。
注意，这里没有使用getline，所以不能读取包含空格的输入。

cin.get();（读取单个字符）:

用途: 读取一个单独的字符，包括空格和换行符。
特点: 适合精确控制每次读取的字符。
char c;
c = cin.get();  // 读取一个字符













