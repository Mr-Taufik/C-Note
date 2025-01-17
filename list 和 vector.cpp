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
