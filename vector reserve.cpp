reserve()
reserve() 是一个用来预分配内存的方法。它的作用是指定 vector 最多可以容纳多少个元素，
而不需要重新分配内存。调用 reserve(n) 后，vector 的容量至少为 n，即它可以容纳 n 个元素而不再重新分配内存。
为什么使用 reserve()？
reserve() 可以显著提升性能，特别是当你知道会向 vector 中插入大量元素时。如果不使用 reserve()，
每次调用 push_back() 添加元素时，vector 都可能需要重新分配内存（尤其当它的容量已经满时）。
reserve() 通过一次性预先分配足够的内存，避免了这些重复的内存重新分配，从而提高了效率。


#include <iostream>
#include <vector>

int main() {
     std::vector<int> vec;

     // 预分配容量，避免多次扩展
     vec.reserve(100);

     std::cout << "Capacity after reserve(100): " << vec.capacity() << std::endl;

     for (int i = 0; i < 50; ++i) {
          vec.push_back(i);  // 向vector添加50个元素
     }

     std::cout << "Capacity after adding 50 elements: " << vec.capacity() << std::endl;

     return 0;
}

调用 reserve(100) 后，vector 的容量至少为 100，即它可以容纳 100 个元素而不进行重新分配。
即使在后面我们使用 push_back() 向 vector 添加了 50 个元素，vector 仍然保持了至少 100 的容量，避免了容量的扩展和重新分配。


































































