基本的继承语法
#include <iostream>
using namespace std;

// 基类（父类）
class Animal
{
   public:
     void eat()
     {
          cout << "Animal is eating" << endl;
     }

     void sleep()
     {
          cout << "Animal is sleeping" << endl;
     }
};

// 派生类（子类）
class Dog : public Animal
{
   public:
     void bark()
     {
          cout << "Dog is barking" << endl;
     }
};

int main()
{
     Dog d;
     d.eat();     // 子类继承父类方法
     d.sleep();   // 子类继承父类方法
     d.bark();    // 子类自定义方法

     return 0;
}

protected 是一种访问控制修饰符，用于限制成员的访问权限。
protected 成员既可以被子类访问，也可以被该类的成员函数访问，但无法在类的外部直接访问。

public：public 成员在继承时始终是可访问的，且继承后仍为 public，除非使用 private 或 protected 继承。
protected：protected 成员在继承时会变成子类的 protected 成员，可以在子类内部访问，但不能在类的外部访问。
private：private 成员无法直接在子类中访问，子类无法继承 private 成员，但仍然可以通过父类提供的 public 或 protected 方法访问这些成员。


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
class CookingYouTubeChannel : public YouTubeChannel
{
   public:
     CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
     {
          // 调用父类的构造函数
     }

     void Practice()
     {
          cout << OwnerName << "Practicing cooking , learning new recipes, experimenting with spices..." << endl;
     }
};

int main()
{
     CookingYouTubeChannel cookingytChannel("Amy 's kitchen", "Amy");
     CookingYouTubeChannel cookingytChannel2("John 's kitchen", "John");
     cookingytChannel.PublishVideo("Apple pie");
     cookingytChannel.PublishVideo("Chocolate cake");
     cookingytChannel.Subscribe();
     cookingytChannel.Subscribe();
     cookingytChannel.GetInfo();
     cookingytChannel.Practice();
     cookingytChannel2.Practice();


     return 0;
}

























































