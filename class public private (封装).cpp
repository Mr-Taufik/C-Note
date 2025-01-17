#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
   private:
     string Name;
     string OwnerName;
     int SubscribersCount;
     list<string> PublishedVideoTitles;
   public:
     YouTubeChannel(string name, string ownerName)

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

     void Subscribe()
     {
          SubscribersCount++;
     }
     void UnSubscribe()
     {
          if(SubscribersCount > 0)
          {
               SubscribersCount--;
          }

     }
     void PublishVideo(string title)
     {
          PublishedVideoTitles.push_back(title);
     }
};

int main()
{
     YouTubeChannel ytChannel1("Codebeauty", "Saldina");
     YouTubeChannel ytChannel2("AmySings", "Amy");
     ytChannel1.PublishVideo("Code for beauty");
     ytChannel1.PublishVideo("C++ for beginners");
     ytChannel1.PublishVideo("HTML & CSS for beginners");
     ytChannel1.Subscribe();
     ytChannel1.Subscribe();
     ytChannel1.Subscribe();

     ytChannel1.UnSubscribe();

     ytChannel1.GetInfo();
     ytChannel2.GetInfo();




     return 0;
}

任何被标记为 public 的成员可以被类外部的任何代码访问。

例如，在你的代码中，GetInfo()、Subscribe()、UnSubscribe() 和 PublishVideo() 方法都在 public 区域内。
这意味着你可以在 main() 函数中通过 ytChannel1.GetInfo()、ytChannel1.Subscribe() 等调用这些方法。
任何被标记为 private 的成员只能在类的内部方法中访问，外部代码无法直接访问它们。

例如，你的 YouTubeChannel 类中的 Name、OwnerName、SubscribersCount 和 PublishedVideoTitles 都是 private 成员。
你不能在 main() 函数中直接访问这些成员，只能通过 public 方法（如 Subscribe() 和 GetInfo()）来访问和操作这些数据。
























