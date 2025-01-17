#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
   public:
     string Name;
     string OwnerName;
     int SubscribersCount;
     list<string> PublishedVideoTitles;

     YouTubeChannel(string name, string ownerName)
     ////
     {
          Name = name;
          OwnerName = ownerName;
          SubscribersCount = 0;
     }

     void GetInfo()
     {
          cout << "Name" << Name << endl;
          cout << "OwnerName: " << OwnerName << endl;
          cout << "SubscribersCount: " << SubscribersCount << endl;
          cout << "Video: " << endl;
          for(string videoTitle : PublishedVideoTitles)
          {
               cout << videoTitle << endl;
          }
     }
};

int main()
{
     YouTubeChannel ytChannel1("Codebeauty", "Saldina");
     YouTubeChannel ytChannel2("AmySings", "Amy");


     // 类的构造函数：用于初始化对象的成员变量。在这个例子中，构造函数接受频道名称和所有者名称，并将订阅者数量初始化为0。
     // push_back 方法：属于 std::list 容器，用于在列表末尾添加一个新元素。在这里，用于向 PublishedVideoTitles 列表中添加新的视频标题
     // push_back 方法详解
     // push_back 是 C++ 标准库容器（如 std::list、std::vector 等）提供的一个成员函数，用于在容器的末尾添加一个新元素。
     // 在你的代码中，PublishedVideoTitles 是一个 std::list<string> 类型的成员变量，因此 push_back 用于向这个列表中添加新的视频标题。
     //第一次调用 push_back：
     //  添加 "C++ for beginners" 到 PublishedVideoTitles 的末尾。
     //    此时，列表中只有一个元素：["C++ for beginners"]。
     //第二次调用 push_back：
     //添加 "HTML & CSS for beginners" 到列表末尾。
     //  列表现在包含两个元素：["C++ for beginners", "HTML & CSS for beginners"]。
     //第三次调用 push_back：
     //添加 "C++ OOP" 到列表末尾。
     //   列表最终包含三个元素：["C++ for beginners", "HTML & CSS for beginners", "C++ OOP"]


     ytChannel1.PublishedVideoTitles.push_back("C++ for beginners");
     ytChannel1.PublishedVideoTitles.push_back("HTML & CSS for beginners");
     ytChannel1.PublishedVideoTitles.push_back("C++ OOP");
     ytChannel1.PublishedVideoTitles.pop_back();

     ytChannel1.GetInfo();
     ytChannel2.GetInfo();




     return 0;
}
