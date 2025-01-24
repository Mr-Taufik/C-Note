示例 1：基础示例
#include <iostream>
using namespace std;

int main()
{
     // 定义一个lambda表达式，捕获外部变量并计算和
     auto add = [](int a, int b) -> int
     {
          return a + b;
     };

     int result = add(5, 3);
     cout << "The sum is: " << result << endl; // 输出：The sum is: 8

     return 0;
}

auto add = [](int a, int b) -> int { return a + b; };：定义了一个 lambda 表达式，捕获列表为空（即不使用外部变量），
接受两个 int 类型参数 a 和 b，返回类型为 int，函数体返回 a + b。
通过 add(5, 3) 调用 lambda 表达式，并输出结果。

示例 2：捕获外部变量
#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;
    
    // 捕获外部变量 x 和 y，计算它们的和
    auto add = [x, y]() -> int {
        return x + y;
    };

    cout << "The sum of x and y is: " << add() << endl; // 输出：The sum of x and y is: 30
    
    return 0;
}

[x, y]：捕获外部的 x 和 y 变量。这里捕获的是它们的副本，因此 lambda 内部可以直接使用 x 和 y。
注意：如果要修改外部变量，需要使用 & 引用捕获，如 [&x, &y]。

示例 3：按引用捕获和修改外部变量
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    // 按引用捕获 x，修改 x 的值
    auto modify = [&x]() {
        x = 100; // 修改 x 的值
    };
    
    cout << "Before modify: " << x << endl;  // 输出：Before modify: 10
    modify();
    cout << "After modify: " << x << endl;   // 输出：After modify: 100
    
    return 0;
}
[&x]：通过引用捕获 x，允许在 lambda 中修改外部变量的值。
x = 100：修改了外部的 x。

示例 4：没有参数的 Lambda 表达式
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    
    // 定义一个没有参数的lambda表达式
    auto increment = [&]() {
        count++; // 修改外部变量 count
    };

    increment();
    increment();
    cout << "Count after incrementing twice: " << count << endl;  // 输出：Count after incrementing twice: 2
    
    return 0;
}


示例 5：返回值类型推导
#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) { return a + b; }; // 编译器自动推导返回类型为 int
    cout << "Sum is: " << add(10, 5) << endl;  // 输出：Sum is: 15
    
    return 0;
}

简化代码：通过 lambda 表达式可以避免定义一个单独的函数，特别是对于一些简单的操作，减少了代码的冗余。
灵活性：lambda 表达式能够直接捕获外部变量，使其能够在不改变函数签名的情况下使用外部环境的值。
局部性：lambda 表达式可以只在需要的地方使用，这有助于代码的局部性和模块化，使代码更清晰。
可读性：对于短小的函数，使用 lambda 表达式比定义一个单独的函数更直观，代码更紧凑。
效率：由于 lambda 表达式在编译时会被转换成一个特定类型的函数对象，它在许多情况下比手动定义的函数更加高效。







