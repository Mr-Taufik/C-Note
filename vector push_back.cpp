push_back 是 C++ 中 std::vector 容器的一个成员函数，用来将元素添加到 vector 的末尾。
vector 是一种动态数组，在添加新元素时，会自动扩展容量以容纳更多的元素。下面是关于 push_back 和 vector 的一些基本操作和输出的详细讲解，包括 int 和 string 类型的示例。
push_back 用法
push_back 会把元素添加到 vector 的末尾，元素类型可以是任意类型。
在执行 push_back 后，vector 会调整其大小（如果需要的话）。
  
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 创建一个int类型的vector
    vector<int> vec;
    
    // 添加元素
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    
    // 输出所有元素
    cout << "所有元素: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    
    // 输出最后一个元素
    cout << "最后一个元素: " << vec.back() << endl;
    
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 创建一个string类型的vector
    vector<string> vec;
    
    // 添加元素
    vec.push_back("Hello");
    vec.push_back("World");
    vec.push_back("C++");
    
    // 输出所有元素
  //遍历 vector 的元素时，可以使用范围基的 for 循环（for (auto& elem : vec)）来遍历每个元素。
    cout << "所有元素: ";
    for (const string& str : vec) {
        cout << str << " ";
    }
    cout << endl;
    
    // 输出最后一个元素
    cout << "最后一个元素: " << vec.back() << endl;
    //vec.back() 返回 vector 中的最后一个元素。该函数不会移除元素，仅返回该位置的元素。
    return 0;
}

如果 vector 容量已满，push_back() 会重新分配内存，通常会将容量加倍，因此它的时间复杂度为摊销常数时间（平均情况下是 O(1)，但偶尔是 O(n)）。
push_back() 可以用于向 vector 添加任意类型的元素，不仅限于基本数据类型。







































































  
