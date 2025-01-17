在C++11中，范围基（range-based for loop）提供了一种更简洁的遍历容器或数组的方式。它的语法如下：
for(元素类型 变量 ：容器) {循环体}

for (declaration : container) 
{
    // code block
}
declaration 是你定义的变量，它会被自动赋值为 container 中每个元素的副本（或者引用）。
container 是你希望遍历的容器或数组。
示例 1：遍历数组

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // 使用范围基for循环遍历数组
    for (int x : arr) {
        std::cout << x << " ";
    }
    return 0;
}

示例 2：遍历容器（例如 std::vector）
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};
    
    // 使用范围基for循环遍历vector
    for (int x : vec) {
        std::cout << x << " ";
    }
    return 0;
}

默认情况下，范围基的循环会复制容器中的元素，如果你不想复制而是希望修改原始元素，可以使用引用：
for (int& x : vec) { ... }

如果你不需要修改元素并且希望提高性能，可以使用常量引用：
for (const int& x : vec) { ... }

示例：使用引用修改容器中的元素
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    // 使用引用遍历并修改vector中的元素
    for (int& x : vec) {
        x *= 2;  // 修改元素
    }
    
    // 输出修改后的vector
    for (int x : vec) {
        std::cout << x << " ";
    }
    
    return 0;
}

示例：使用 const 引用访问容器的元素（不可修改）
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};
    
    // 使用const引用遍历vector中的元素
    for (const int& x : vec) {
        std::cout << x << " ";  // 只访问，不修改
    }
    
    return 0;
}

示例：遍历 std::list 容器
#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {100, 200, 300, 400};

    // 使用引用遍历list并修改元素
    for (int& x : myList) {
        x += 50;  // 修改每个元素
    }

    // 输出修改后的list
    for (const int& x : myList) {
        std::cout << x << " ";
    }

    return 0;
}

示例：不修改容器的元素，使用 const 引用遍历 std::list
#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    // 使用const引用遍历list，访问但不修改元素
    for (const int& x : myList) {
        std::cout << x << " ";
    }

    return 0;
}


























