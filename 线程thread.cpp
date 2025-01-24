#include <iostream>
#include <thread>

void function1(char symbol)
{
     for(int i = 0; i < 200; i++)
     {
          std::cout << symbol;
     }
}

void function2()
{
     for(int i = 0; i < 200; i++)
     {
          std::cout << "-";
     }
}
int main()
{
     // 创建两个线程：worker1 运行 function1 并传入参数 'o'，worker2 运行 function2
     std::thread worker1(function1, 'o');
     std::thread worker2(function2);

     worker1.join();
     worker2.join();
     //一旦创建，worker1 和 worker2 开始与主线程并发执行。这意味着 function1 和 function2 会同时运行，各自向控制台打印它们的字符。
     // worker1.join(); 和 worker2.join(); 使主线程等待 worker1 和 worker2 执行完毕后才结束。只有当两个线程都完成时，主线程才会继续执行并结束程序。
     // join() 保证了线程的同步，也避免了程序结束时线程被强制中止的情况。
     return 0;
}
