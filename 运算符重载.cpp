运算符重载允许我们为自定义类型（如类或结构体）定义或重新定义标准运算符（如 +, -, ==, << 等）的行为，
使得这些自定义类型的对象能够像内置类型一样使用这些运算符，从而提升代码的可读性和可维护性。

常见的可以重载的运算符
算术运算符：+, -, *, /, %
比较运算符：==, !=, <, >, <=, >=
赋值运算符：=, +=, -=, *=, /=
输入输出运算符：<<, >>
其他运算符：[], (), ->, ++, --

1. 成员函数重载
通过成员函数重载运算符时，运算符的左操作数必须是当前类的对象。右操作数可以是其他类型。
class MyClass 
{
public:
    // 重载加号运算符
    MyClass operator+(const MyClass& other) 
{
        MyClass result;
        // 实现具体的加法逻辑
        return result;
    }
};



























  
