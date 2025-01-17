#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;

    // 向 list 末尾添加元素
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // 向 list 头部添加元素
    myList.push_front(5);

    // 遍历 list
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // 删除元素
    myList.pop_back();  // 删除末尾元素
    myList.pop_front(); // 删除头部元素

    // 再次遍历 list
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector;

    // 向 vector 末尾添加元素
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // 遍历 vector
    for (int val : myVector) {
        cout << val << " ";
    }
    cout << endl;

    // 删除末尾元素
    myVector.pop_back();

    // 遍历 vector
    for (int val : myVector) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}


list 适用于需要在容器中间频繁插入和删除元素的场景。
vector 更适用于需要随机访问且插入删除主要发生在末尾的场景。


特性	list	vector
底层实现	双向链表	动态数组
内存分配	非连续内存，节点存储前后指针	连续内存，存储在一个数组中
访问速度	O(n)，需要遍历	O(1)，可以通过下标直接访问
插入/删除	O(1)，在中间插入/删除很高效	O(n)，中间插入/删除需要移动元素
存储开销	较高，每个元素需要额外的指针空间	较低，不需要额外的指针空间
适用场景	需要频繁插入删除元素的场景	需要高效随机访问和尾部插入的场景








