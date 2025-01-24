#include <iostream>

const char *RecommendMeFood(char firstletter);
int main()
{
     std::cout << "Today I will eat  " << RecommendMeFood('c');
     return 0;
}
const char *RecommendMeFood(char firstletter)
{
     if(firstletter == 'a' || firstletter == 'A')
     {
          return "apple";
     }
     else if(firstletter == 'b' || firstletter == 'B')
     {
          return "banana";
     }
     else if(firstletter == 'c' || firstletter == 'C')
     {
          return "chocolate cake";
     }

     return "pizza";
}

const char * 表示一个指向常量字符的指针，即指向不可修改字符数据的指针

使用 const char * 的原因是为了确保返回的字符串不会被意外修改。字符串字面量通常存储在只读内存区域，试图修改它们会导致未定义行为。
因此，使用 const 修饰符可以帮助编译器捕捉到潜在的错误，确保代码的安全性

返回类型 const char *: 这个函数返回一个指向字符常量的指针，也就是一个C风格的字符串。
例如，"apple"、"banana" 等都是字符串字面量，它们在内存中以字符数组的形式存储，函数返回的是这些数组的起始地址。

