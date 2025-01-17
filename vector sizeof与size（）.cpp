1. 获取元素的字节数
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

     vector<int> vec = {1, 2, 3};
     vector<string> str = {"taozk", "aab", "taozk."};
     cout << "Size of each element in vector<int>: " << sizeof(vec[0]) << " bytes" << endl;
     cout << "Size of each element in vector<string>: " << sizeof(str[1]) << " bytes (size of string object)" << endl;
     cout << "Length of each string in vector<string>: " << str[2].size() << " characters" << endl;


     return 0;
}
这里面呢sizeof(str[1])  sizeof(str[1]) 计算的是 std::string 对象本身 在内存中占用的大小 因此，sizeof(str[2]) 计算的是 std::string 对象本身的大小。
如果你想计算字符串的实际长度（字符数），而不是 std::string 对象本身的内存占用，可以使用 size() 方法：
cout << "Length of each string in vector<string>: " << str[2].size() << " characters" << endl;
这里的 size() 只是返回字符串中字符的数量，而不是其占用的内存字节数。
为什么 sizeof(str[1]) 和 sizeof(str[2]) 不一样：
其实，它们的值是一样的，因为 str[1] 和 str[2] 都是 std::string 类型的对象，sizeof 计算的是该对象的类型大小，而不是字符串的内容。不同的字符串内容不会影响 sizeof，因为 std::string 是一个类，它管理着字符串内容的内存，而 sizeof 只关注对象本身的大小。
str[1].size() 返回的是字符串的实际字符数，而不是对象的内存占用大小。对于 "taozk."，size() 返回的是 6，表示字符串中有 6 个字符


  



















































































  


































