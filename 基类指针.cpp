 
#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
   private:
     string Name;
     int SubscribersCount;
     list<string> PublishedVideoTitles;
   protected:
     string OwnerName;
     int ContentQuality;
   public:
     YouTubeChannel(string name, string ownerName)

     {
          Name = name;
          OwnerName = ownerName;
          SubscribersCount = 0;
          ContentQuality = 0;
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
     void CheckAnalytics()
     {
          if(ContentQuality < 5)
          {
               cout << Name << " has bad quality content." << endl;
          }
          else
          {
               cout << Name << " has great content." << endl;
          }
     }
};
class CookingYouTubeChannel : public YouTubeChannel
{
   public:
     CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
     {

     }

     void Practice()
     {
          cout << OwnerName << " Practicing cooking , learning new recipes, experimenting with spices..." << endl;
          ContentQuality++;
     }
};
class SingersYouTubeChannel : public YouTubeChannel
{
   public:
     SingersYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
     {

     }

     void Practice()
     {
          cout << OwnerName << " is taking isnging classes, learning new songs, learning how to dance..." << endl;
          ContentQuality++;
     }
};

int main()
{
     CookingYouTubeChannel cookingytChannel("Amy 's kitchen", "Amy");
     SingersYouTubeChannel singersytChannel("JohnSings", "John");

     cookingytChannel.Practice();
     singersytChannel.Practice();
     singersytChannel.Practice();
     singersytChannel.Practice();
     singersytChannel.Practice();
     singersytChannel.Practice();

     YouTubeChannel * yt1 = &cookingytChannel;
     YouTubeChannel * yt2 = &singersytChannel;
     CookingYouTubeChannel * yt3 = &cookingytChannel;


     //yt1->CheckAnalytics(); 通过 yt1 指针调用 YouTubeChannel 的 CheckAnalytics 方法，分析 cookingytChannel 的内容质量。
     //yt2->CheckAnalytics(); 通过 yt2 指针调用 YouTubeChannel 的 CheckAnalytics 方法，分析 singersytChannel 的内容质量

     yt1 -> CheckAnalytics();
     yt1 -> PublishVideo("taozk");
     yt1 -> GetInfo();
     yt2 -> CheckAnalytics();
     yt3 -> Practice();
     cookingytChannel.CheckAnalytics();

     return 0;
}


这里面就是创建一个类的指针，可以创建基类的也可以创建子类的指针，创建完成后赋予地址，然后就可以通过指针去调用类内部的函数了
基类指针可以指向派生类的对象，但它只能访问基类中的成员（如果没有虚函数或重写的话），它不能用于“重新”调用构造函数。

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // 基类指针指向派生类对象

    // 基类指针并不能直接调用基类的构造函数
    // 它已经在对象创建时自动调用了基类的构造函数

    delete basePtr;  // 释放内存
    return 0;
}

在 main 函数中，基类指针 basePtr 被用来指向派生类对象 Derived。在创建 Derived 对象时，基类的构造函数被自动调用，然后是派生类的构造函数。
基类指针 basePtr 不能单独调用基类的构造函数，它只能指向已经存在的对象。构造函数是在对象创建时自动调用的，而不是通过指针显式调用。


