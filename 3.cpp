/*
#include <iostream>
using namespace std;

namespace namespace1
{
     int age = 20;
     string name = "taozk";
}
namespace namespace2
{
     int age = 25;
     string name = "taozhikun";
}

int main()
{

     cout << namespace1::age << endl;
     cout << namespace2::age << endl;
     cout << namespace1::name << endl;
     cout << namespace2::name << endl;
     return 0;
}
 */

/*

#include <iostream>

using namespace std;

struct question
{
     string qua;
     string answer1;
     string answer2;
     string answer3;
     int correct_answer;

};

void prin(question array[],int i)
{
     cout << array[i].qua << endl;
     cout << array[i].answer1 << endl;
     cout << array[i].answer2 << endl;
     cout << array[i].answer3 << endl;

}
int main()
{
     int option = 0;
     struct question array[3] =
         {
         {"What is the smallest country?",
               "1. USA",
               "2. India",
               "3. Vatican City", 3},
             {"What 's the biggest animal in the world?",
               "1. Elephant",
               "2. Blue whale",
               "3. Great white shark", 2},

             {"How many elements are there in the periodic table?",
               "1. 118elements",
               "2. 119elements",
               "3. 120elements", 3}
     };

     for(int i = 0; i < 3; i++)
     {
          prin(array, i);
          cout << "Choose 1-3: ";
          cin >> option;
          if(option != array[i].correct_answer)
          {
               cout << "Incorrect!" << endl;
          }
          cout << "Correct" << endl;

     }

     return 0;
}

*/
/*
#include <iostream>

const char *RecommendMeFood(char firstletter);
int main()
{
     std::cout << "Today I will eat  " << RecommendMeFood('c');
     return 0;
}
const char *RecommendMeFood(char firstletter)
{
     if(firstletter == 'a' || firstletter == 'A')
     {
          return "apple";
     }
     else if(firstletter == 'b' || firstletter == 'B')
     {
          return "banana";
     }
     else if(firstletter == 'c' || firstletter == 'C')
     {
          return "chocolate cake";
     }

     return "pizza";
}
*/
/*
//线程
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
     std::thread worker1(function1, 'o');
     std::thread worker2(function2);

     worker1.join();
     worker2.join();
     // worker1.join(); 和 worker2.join(); 使主线程等待 worker1 和 worker2 执行完毕后才结束。只有当两个线程都完成时，主线程才会继续执行并结束程序。
     // join() 保证了线程的同步，也避免了程序结束时线程被强制中止的情况。
     return 0;
}
*/
/*
#include <iostream>
#include <thread>
#include <map>

int main()
{

     return 0;
}
*/
/*
#include <iostream>
using namespace std;

void introduceMe(const string name, const string city = "huizhou", int age = 0)
{
     cout << "My name is " << name << endl;
     cout << "I am from " << city << endl;
     if(age != 0)
     {
          cout << "I am " << age << " year old" << endl;
     }


}
int main()
{
     introduceMe("taozk", "huizhou", 19);
     introduceMe("taozk");
     return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{

     std::vector <int> v{2, 3, 7, 14, 23};
     std::for_each(v.begin(), v.end(), [](int x){std::cout << x << "\n";});

     return 0;
}
 */
//虚函数
/*
#include <iostream>
using namespace std;

class Instrument
{
   public :
     virtual void MakeSound()
     // virtual 关键字: 声明MakeSound为虚函数，允许在派生类中重写，并支持运行时多态性。
     // 实现: 默认输出 "Instrument playing..."。
     {
          cout << "Instrument playing...\n";
     }
};

class Accordion : public Instrument
{
   public :
     // 员函数 MakeSound:
     // 重写: 提供了Instrument类中虚函数MakeSound的具体实现，输出 "Accordion playing..."。
     void MakeSound()
     {
          cout << "Accordion playing...\n";
     }
};
int main()
{
     Instrument *i1 = new Accordion();
     // 创建一个指向Instrument类型的指针i1，并用new关键字动态分配一个Accordion对象。
     i1 -> MakeSound();
     //i1->MakeSound();: 通过基类指针调用MakeSound函数。
     // 由于MakeSound是虚函数，这将调用Accordion类中重写的版本，输出 "Accordion playing..."
     delete i1;
     return 0;
}
*/
/*
//抽象类和纯虚函数
#include <iostream>
using namespace std;

class Instrument
{
   public :
     virtual void MakeSound() = 0;

};

class Accordion : public Instrument
{
   public :
     void MakeSound()
     {
          cout << "Accordion playing...\n";
     }
};

class Piano : public Instrument
{
   public :
     void MakeSound()
     {
          cout << "Piano playing...\n";
     }
};

int main()
{
     Instrument *i1 = new Accordion();
     //i1 -> MakeSound();
     Instrument *i2 = new Piano();
     //i2 -> MakeSound();
     Instrument * instruments[2] = {i1, i2};

     for(int i = 0; i < 2; i++)
     {
          instruments[i] -> MakeSound();
     }

     return 0;
}
*/

//抽象
/*
#include <iostream>
using namespace std;

class Smartphone
{
     public :
     virtual void TakeASelfie() = 0;
};

class Android : public Smartphone
{
   public :
     void TakeASelfie()
     {
          cout << "Android selfie\n";
     }
};

class IPhone : public Smartphone
{
   public :
     void TakeASelfie()
     {
          cout << "IPhone selfie\n";
     }
};
int main()
{
     Smartphone *s1 = new Android();
     s1 -> TakeASelfie();

     return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YouTubeChannel
{
     string Name;
     int SubscribersCount;

     YouTubeChannel(string name, int subscribersCount)
     {
          Name = name;
          SubscribersCount = subscribersCount;
     }

     bool operator==(const YouTubeChannel&channel) const
     {
          return this -> Name == channel.Name;
     }
};
//operator 关键字 用于定义运算符重载，允许自定义类型使用标准运算符。
//operator << 用于重载输出运算符，使得可以直接使用 cout << yt1; 来输出 YouTubeChannel 对象的信息。
ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel)
{
     COUT << "Name: " << ytChannel.Name << endl;
     COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
     return COUT;
}

struct MyCollection
{
     list <YouTubeChannel>myChannels;

     void operator += (YouTubeChannel& channel)
     {
          this -> myChannels.push_back(channel);
     }
     void operator -= (YouTubeChannel& channel)
     {
          this -> myChannels.remove(channel);
     }
};

ostream& operator << (ostream& COUT, MyCollection& myCollection)
{
     for(YouTubeChannel ytChannel : myCollection.myChannels)
     {
          COUT << ytChannel << endl;
     }
     return COUT;
}
int main()
{
     YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
     YouTubeChannel yt2 = YouTubeChannel("taozk", 10000);
     //cout << yt1 << yt2;
     //operator << (cout, yt1); // 等于cout << yt1;

     MyCollection myCollection;
     myCollection += yt1;
     myCollection += yt2;
     myCollection -= yt2;
     cout << myCollection;
     return 0;
}*/
/*   友元
#include <iostream>
using namespace std;

class EquilateralTriangle
{
     float a;
     float circumference;
     float area;

   public:
     void setA(float length)
     {
          a = length;
          circumference = a * 3;
          area = (1.73 * a * a) / 4;

     }

    // friend void PrintResults(EquilateralTriangle);
     friend class Homework;
};

class Homework
{
   public:
     void PrintResults(EquilateralTriangle et)
     {
          cout << "circumference = " << et.circumference << endl;
          cout << "area=  " << et.area << endl;
     }
};
int main()
{
     EquilateralTriangle et;
     et.setA(3);
     Homework h;
     h.PrintResults(et);

     return 0;
}
*/
/*
#include <iostream>
using namespace std;

class User
{
   public:
     string FirstName;
     string LastName;
     int Age;
     string Email;

     User()//默认分配值
     {
          FirstName = "nn";
          LastName = "nln";
          Age = 0;
          Email = "not set";
     }

     User(string fName, string lName, int age)//构造函数 constructor
     {
          FirstName = fName;
          LastName = lName;
          Age = age;
          Email = fName + "." + lName + "@gmail.com";
     }
};

void GetUserInfo(User u)
{
     cout << "First name: " << u.FirstName << endl;
     cout << "Last name: " << u.LastName << endl;
     cout << "Age: " << u.Age << endl;
     cout << "Email: " << u.Email << endl;
}
int main()
{
     User user1("tao", "zhikun", 18);//构造函数的使用

     GetUserInfo(user1);

     return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Book
{
   public :
     string Title;
     string Author;
     int *Rates;
     int RatesCounter;

     Book(string title, string author)
     {
          Title = title;
          Author = author;

          RatesCounter = 2;
          Rates = new int[RatesCounter];
          Rates[0] = 4;
          Rates[1] = 5;

          cout << Title + "constructor invoked\n";


     }

     ~Book()
     {
          delete [] Rates;
          Rates = nullptr;
          cout << Title + "destructor invoked\n";
     }
};

int main()
{
     Book book1("Millionaire Fastlane", "M.J.DeMarco");

     return 0;
}
*/


/*
#include <iostream>
using namespace std;

class Book
{
   public :
     string Title;
     string Author;
     float *Rates;
     int RatesCounter;

     Book(string title, string author)
     {
          Title = title;
          Author = author;

          RatesCounter = 2;
          Rates = new float[RatesCounter];
          Rates[0] = 4;
          Rates[1] = 5;

          cout << Title + "constructor invoked\n";


     }

     ~Book()
     {
          delete [] Rates;
          Rates = nullptr;
          cout << Title + "destructor invoked\n";
     }
     Book(const Book &original)
     {
          Title = original.Title;
          Author = original.Author;
          RatesCounter = original.RatesCounter;
          Rates = new float[RatesCounter];
          for(int i = 0; i < RatesCounter; i++)
          {
               Rates[i] = original.Rates[i];
          }

     }
};

void PrintBook(Book book)
{
     cout << "Title: " << book.Title << endl;
     cout << "Author: " << book.Author << endl;

     float sum = 0;
     for(int i = 0; i < book.RatesCounter; i++)
     {
          sum += book.Rates[i];
     }
     cout << "Avg rate: " << sum/book.RatesCounter << endl;
}

int main()
{
     Book book1("Millionaire Fastlane", "M.J.DeMarco");
     Book book3 = book1;

     PrintBook(book1);

     return 0;
}
*/
//多态性
/*
#include <iostream>
using namespace std;

class Student
{
   public:
     string Name;
     int Age;
     char Gender;
     virtual void Study() = 0;
};

class ProgrammingStudent : public Student
{
   public:
     void Study()
     {
          cout << "Learning programming" << endl;
     }
};

class ArtsStudent : public Student
{
   public:
     void Study()
     {
          cout << "Learning to paint" << endl;
     }
};
class MusicStudent : public Student
{
   public:
     void Study()
     {
          cout << "Learning to play piano and to sing" << endl;
     }
};

int main()
{
     Student *students[3];
     students[0] = new ProgrammingStudent();
     students[1] = new ArtsStudent();
     students[2] = new MusicStudent();

     for(int i = 0; i < 3; i++)
     {
          students[i] -> Study();
     }

     for(int i = 0; i < 3; i++)
     {
          delete students[i];
     }
     return 0;
}
*/
///assignment operator copy constructor

//接口

















