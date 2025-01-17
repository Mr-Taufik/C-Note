shrink_to_fit()
shrink_to_fit() 是一个 请求 vector 调整其容量以适应当前元素数量的函数。
它的目的是尽可能减少 vector 的内存占用，从而释放不再需要的内存空间。

注意： shrink_to_fit() 只是一个建议，并不是强制性的。标准库的实现可能会选择忽略它，因此 vector 的容量不一定会发生改变。

为什么使用 shrink_to_fit()？
有时，你可能已经删除了一些元素（例如，使用 pop_back() 删除元素），但 vector 的容量仍然很大，
可能浪费了一些内存空间。如果你希望释放这部分空间，可以使用 shrink_to_fit()。

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.reserve(100);  // 预分配100个元素的空间

    std::cout << "Capacity before shrink_to_fit: " << vec.capacity() << std::endl;

    for (int i = 0; i < 50; ++i) {
        vec.push_back(i);  // 添加50个元素
    }

    std::cout << "Capacity after adding 50 elements: " << vec.capacity() << std::endl;

    vec.pop_back();  // 删除最后一个元素

    // 请求释放不再需要的内存
    vec.shrink_to_fit();  // 调整容量，以适应当前元素数量

    std::cout << "Capacity after shrink_to_fit: " << vec.capacity() << std::endl;

    return 0;
}


在调用 reserve(100) 后，vector 的容量为 100，即使我们只添加了 50 个元素，vector 仍然保留了 100 的容量。
调用 pop_back() 删除了一个元素，此时 vector 的大小变为 49。
调用 shrink_to_fit() 后，vector 的容量会调整为 49 或更小，释放多余的内存。














