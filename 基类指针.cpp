 
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






