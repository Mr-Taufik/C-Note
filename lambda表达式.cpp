#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
     // 创建一个整数类型的vector，并初始化为 {2, 3, 7, 14, 23}
     std::vector <int> v{2, 3, 7, 14, 23};
     std::for_each(v.begin(), v.end(), [](int x){std::cout << x << "\n";});

     return 0;
}

[捕获列表] (参数列表) -> 返回类型 { 函数体 }

  捕获列表：用于捕获外部作用域中的变量，允许你在lambda内部使用这些变量。常见的捕获方式有：

[ ]：什么都不捕获。
[&]：按引用捕获外部所有变量。
[=]：按值捕获外部所有变量。
[x, &y]：按值捕获 x，按引用捕获 y。
参数列表：就像普通函数一样，定义 lambda 所需的参数。

返回类型：可以显式声明返回类型，但通常 C++ 编译器会自动推导。

函数体：lambda 的实际代码逻辑。

std::for_each(v.begin(), v.end(), [](int x){
    std::cout << x << "\n";
});
在这里，lambda 表达式 [](int x){ std::cout << x << "\n"; } 是 std::for_each 算法的一部分。解释如下：

[]：表示这个 lambda 表达式没有捕获外部的任何变量。
(int x)：定义了一个输入参数 x，它将代表 vector 中的每个元素（一个整数）。
{ std::cout << x << "\n"; }：定义了 lambda 表达式的函数体，这里是打印每个整数，并在其后添加换行符。








