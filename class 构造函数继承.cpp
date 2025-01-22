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
     //受保护的成员变量可以在基类和所有派生类中访问，但不能在类外部访问。
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
          for( string videoTitle : PublishedVideoTitles)
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
//CookingYouTubeChannel 继承了 YouTubeChannel 的所有 public 和 protected 成员（函数和变量）
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
     cookingytChannel.UnSubscribe();
     cookingytChannel.GetInfo();
     cookingytChannel.Practice();
     cookingytChannel2.Practice();


     return 0;
}


















