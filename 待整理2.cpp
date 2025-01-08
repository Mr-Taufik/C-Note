/*
#include <iostream>
#include <list>

using namespace std;

class YOuTubeChannel //zhe-li表示一个类，表示一个Youtube频道
{
   public:
     string Name;
     string OwnerName;
     int SubscribersCount;
     list<string> PublishedVideoTitles;//储存已发布的视频标题
};
int main()
{

     YOuTubeChannel ytChannel1;//这里是创建了类的对象，ytChannel1
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

     return 0;
}
 */

/*
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

     ytChannel1.GetInfo();
     ytChannel2.GetInfo();




     return 0;
}
*/
/*
///封装
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
 */

/*
///继承，派生类
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
/* CookingYouTubeChannel 类通过 : public YouTubeChannel 语法继承自 YouTubeChannel 类。这意味着 CookingYouTubeChannel
 * 继承了 YouTubeChannel 类中定义的所有公共（public）和保护（protected）成员变量和成员函数。
 *
 *
 * 具体的好处
a. 代码复用
继承允许子类复用父类已有的代码，减少重复代码的编写。例如，YouTubeChannel 中的订阅、取消订阅、发布视频和获取信息等功能，CookingYouTubeChannel 不需要重新实现，只需继承即可使用。
b. 易于维护
当父类的逻辑需要修改或优化时，子类会自动继承这些更改，无需在每个子类中逐一修改。例如，如果 YouTubeChannel 中的 Subscribe 方法需要优化，所有继承自它的子类都会自动受益。
c. 扩展性强
继承允许根据需要扩展类的功能。子类可以在继承父类功能的基础上，添加更多特有的功能。例如，CookingYouTubeChannel 增加了 Practice 方法，这在父类 YouTubeChannel 中是不存在的。
d. 多态性支持
虽然在您的代码中未体现，但继承是实现多态性的基础。通过继承和虚函数，可以在运行时动态决定调用哪个子类的函数，增强代码的灵活性和可扩展性。
e. 逻辑组织清晰
继承帮助将相关的类组织在一起，形成一个层次结构，使得代码逻辑更加清晰和有条理。例如，所有类型的YouTube频道可以继承自 YouTubeChannel，而不同类型的频道（如烹饪、科技、教育等）则作为不同的子类存在。
 * */
/*
class CookingYouTubeChannel : public YouTubeChannel
{
   public:
     CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
     {

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
     //cookingytChannel.PublishVideo("Apple pie");
     //cookingytChannel.PublishVideo("Chocolate cake");
     //cookingytChannel.Subscribe();
     //cookingytChannel.Subscribe();
     //cookingytChannel.GetInfo();
     cookingytChannel.Practice();
     cookingytChannel2.Practice();


     return 0;
}
*/

/*
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

     //yt1->CheckAnalytics(); 通过 yt1 指针调用 YouTubeChannel 的 CheckAnalytics 方法，分析 cookingytChannel 的内容质量。
     //yt2->CheckAnalytics(); 通过 yt2 指针调用 YouTubeChannel 的 CheckAnalytics 方法，分析 singersytChannel 的内容质量

     yt1 -> CheckAnalytics();
     yt2 -> CheckAnalytics();
     cookingytChannel.CheckAnalytics();

     return 0;
}

*/
/*
#include <iostream>
using namespace std;

int main()
{
     int luckyNumbers[5] = {2, 3, 5, 7, 9};

     cout << luckyNumbers << endl;  /// 这里是打印了这个数组的首地址，这个和下面的表示方法是一样的
     cout << &luckyNumbers[0] << endl;
     cout << luckyNumbers[2] << endl;
     cout << *(luckyNumbers + 2) << endl; ///这里就是用了一个指针，然后这个指针指向这个数组的首地址然后往后面走了两个位置，再解引用

     return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
     int array[5];
     for(int i = 0; i < 5; i++)
     {
          cin >> array[i];
     }

     for(int i = 0; i < 5; i++)
     {
          cout << *(array + i) << " ";
     }

     return 0;
}
*/

/*
#include <iostream>

using namespace std;
///利用一个函数然后可以返回多个函数值
void getMinAndMax(int number[], int size, int *min, int *max)
{
     for(int i = 0; i < 5; i++)
     {
          if(number[i] > *max)
          {
               *max = number[i];
          }
          if(number[i] < *min)
          {
               *min = number[i];
          }
     }
}

int main()
{
     int numbers[5] = {5, 4, -2, 29, 6};
     int max = numbers[0];
     int min = numbers[0];

     getMinAndMax(numbers, 5, &min, &max);

     cout << "min " << min << endl;
     cout << "max " << max << endl;

     return 0;
}
*/

/*

#include <iostream>
using namespace std;

int main()
{
     int size;
     cout << "Size ";
     cin >> size;
     int *myArray = new int[size];
     ///使用 new 运算符动态分配一个包含 size 个 int 元素的数组。
     //使用 new 运算符动态分配一个包含 size 个 int 元素的数组。
     //这在堆（heap）上分配内存，生命周期由程序员控制，直到显式释放。
     //使用完 myArray 后，应该使用 delete[] myArray; 来释放内存，防止内存泄漏。
     for(int i = 0; i < size; i++)
     {
          cout << "Array [ " << i << " ] ";
          cin >> myArray[i];
     }

     for(int i = 0; i < size; i++)
     {
          cout << myArray[i] << " ";
     }
     return 0;
}


*/







































