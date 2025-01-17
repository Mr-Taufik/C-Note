capacity() 返回 vector 当前能够容纳的最大元素数量，不需要重新分配内存。它的值通常大于或等于 size()，即当前实际存储的元素数量。
如果 vector 容量不足以容纳新元素，vector 会自动扩展容量，通常是将容量加倍。

#include <iostream>
#include <vector>
using namespace std;

int main() {
     std::vector<int> vec = {1, 2, 3};
     std::cout << "Capacity before push_back: " << vec.capacity() << std::endl;

     vec.push_back(4);
     std::cout << "Capacity after push_back: " << vec.capacity() << std::endl;

     return 0;
}

size()
size() 返回 vector 当前实际存储的元素个数。它等于 vector 中的元素数目，而不是分配的内存容量。

#include <iostream>
#include <vector>
using namespace std;

int main() {
     std::vector<int> vec = {1, 2, 3};
     std::cout << "Size before push_back: " << vec.size() << std::endl;

     vec.push_back(4);
     std::cout << "Size after push_back: " << vec.size() << std::endl;

     return 0;
}
































































