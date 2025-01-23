这段代码展示了C++中的**命名空间（namespace）**的使用。命名空间用于组织代码，避免不同部分的代码命名冲突。
这里创建了两个命名空间：namespace1 和 namespace2，它们各自有一个 age 和 name 变量


#include <iostream>
using namespace std;

namespace namespace1
{
int age = 20;
string name = "taozk";
}
namespace namespace2
{
int age = 25;
string name = "taozhikun";
}

int main()
{

     cout << namespace1::age << endl;
     cout << namespace2::age << endl;
     cout << namespace1::name << endl;
     cout << namespace2::name << endl;
     return 0;
}

在实际的项目中，可能会有多个模块或者库包含相同名称的变量、函数或类。使用命名空间能够有效避免这些命名冲突。例如，
在这个例子中，age 和 name 在两个命名空间中定义，虽然它们的名字相同，但因为它们位于不同的命名空间中，所以它们不会冲突。
