 C++ 中，vector 是一个动态数组容器，属于标准模板库（STL）的一部分。与传统的数组相比，vector 具有以下几个主要优点
动态大小：vector 会根据需要动态调整大小，大小可以自动增加或减少
灵活的内存管理：vector 自动管理内存，无需显式地进行内存分配和释放操作。它会根据需要动态扩展或缩减内存。
便捷的接口：vector 提供了很多内建的方法来进行操作，比如 push_back() 添加元素，pop_back() 删除元素，size() 获取元素个数等，使得对容器的操作更加方便。
元素访问和迭代：vector 支持快速的随机访问，可以通过索引来访问任意元素，并且可以使用迭代器进行遍历。
vector 和长度： vector 是不需要事先设置长度的。它的大小会根据元素的加入而动态调整。例如，通过 push_back() 向 vector 中添加元素时，它的大小会自动增加。
计算大小和元素个数：

你可以使用 vector 提供的 size() 方法来获取当前 vector 中的元素个数。
你可以使用 capacity() 方法获取 vector 当前分配的内存空间的大小（即它能容纳多少元素）。注意，这个值并不一定等于 size()，它可能大于或等于 size()。

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
     string str = "hello world";
     cout << str << endl;

     vector<string> strs = {"hello", "world", "abc"};
     cout << strs[1] << endl;  // 输出 "world"

     // 获取vector的大小（元素个数）
     cout << "Number of elements in strs: " << strs.size() << endl;

     // 获取vector的容量（当前分配的内存空间）
     cout << "Capacity of strs: " << strs.capacity() << endl;

     // 向vector中添加元素
     strs.push_back("new element");
     cout << "After adding one element:" << endl;
     cout << "Number of elements: " << strs.size() << endl;
     cout << "Capacity of strs: " << strs.capacity() << endl;

     return 0;
}







































