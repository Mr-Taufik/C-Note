#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel //zhe-li表示一个类，表示一个Youtube频道
{
   public:
     string Name;
     string OwnerName;
     int SubscribersCount;
     list<string> PublishedVideoTitles;//储存已发布的视频标题
};
int main()
{

     YouTubeChannel ytChannel1;//这里是创建了类的对象，ytChannel1
     ytChannel1.Name = "Code Beauty";
     ytChannel1.OwnerName = "Saldina";
     ytChannel1.SubscribersCount = 1000;
     ytChannel1.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS", "C++ OOP Video 1"};

     cout << "Name: " << ytChannel1.Name << endl;
     cout << "OwnerName: " << ytChannel1.OwnerName << endl;
     cout << "SubscribersCount: " << ytChannel1.SubscribersCount << endl;
     cout << "Videos: " << endl;

     for(string videoTitle : ytChannel1.PublishedVideoTitles)
     {
          cout << videoTitle << endl;
     }
     ///这里的语法格式是 for(元素类型 变量 ：容器) {循环体}
     // string videoTitle：在每次循环中，videoTitle将接收PublishedVideoTitles中的一个元素（即一个视频标题）。
     // ytChannel1.PublishedVideoTitles：这是要遍历的容器，类型为std::list<string>。
     // 循环过程：
     // 循环开始时，videoTitle被赋值为PublishedVideoTitles中的第一个视频标题。
     // 执行循环体，将videoTitle输出。
     // 重复上述过程，直到遍历完所有视频标题。
    //这段代码采用了C++11引入的范围基（range-based）for循环语法。它的工作原理是：
  videoTitle会依次接收ytChannel1.PublishedVideoTitles容器中的每个视频标题，然后执行循环体

     return 0;
}


这段代码中展示了C++中class（类）的使用，类是C++中面向对象编程（OOP）的基础概念之一
