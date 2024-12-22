/*
#include <iostream>

int main()
{
     int age = 21;
     int year = 2023;
     float days = 7.5;
     ////double number include decimal
     double price = 10.99;
     double gpa = 2.5;
     double temperature = 25.1;
     ////single character
     char grade = 'A';
     char initial = 'B';
     ////string (object that represents a sequence of text)
     std::string name = "Bro";
     std::string day = "Friday";
     std::string food = "pizza";
     std::string address = "123 Fake St.";
     std::cout << "I like pizza!" << '\n';
     std::cout << "It 's really good!" << std::endl;
     std::cout << price << '\n';
     std::cout << grade << '\n';
     std::cout << name << '\n';
     std::cout << "Hello " << name << '\n';
     std::cout << "You are " << age << " years old" << '\n';

     return 0;
}
 */
/*
#include <iostream>

int main()
{
     std::string name;
     int age;
     std::cout << "What 's your full name?:" << '\n';
     std::getline( std::cin, name );
     //std::getline(std:: cin >> std:: ws, name);
     std::cout << "What 's your age ?" << '\n';
     std::cin >> age;

     std:: cout << "Hello" << name << '\n';
     std::cout << "You are " << age << "years old" << '\n';
     return 0;
}
*/
/*
#include <iostream>
#include <cmath>

int main()
{
     double x = 3;
     double y = 4;
     double z;
     double m;
   ///  z = std::max(x, y);  找出最大值
   ///  m = std::min(x, y);  找出最小值
   ///  z = pow(2, 4);       幂函数
   ///  m = sqrt(9);         开平方
   ///  z = abs(-3);         计算绝对值
   ///  z = round(x)         四舍五入
   ///  z = ceil(x);         向上取整
   ///  z = floor(x)         向下取整
     std::cout << z << '\n';
     std::cout << m;


     return 0;
}
*/
/*
#include <iostream>
#include <cmath>

int main()
{
     double a;
     double b;
     double c;

     std::cout << "Enter side A:";
     std::cin >> a;
     std::cout << "Enter size b:";
     std::cin >> b;

    // a = pow(a, 2);
     //b = pow(b, 2);
     //c = sqrt(a + b);

     c = sqrt(pow(a, 2) + pow(b, 2));

     std::cout << "Side C:" << c;

     return 0;
}
*/
/*
#include <iostream>

int main()
{
     int age;

     std::cout << "Enter your age: ";
     std::cin >> age;

     if(age >= 18)
     {
          std::cout << "Welcome to the site!";
     }
     else if(age < 0)
     {
          std::cout << "You haven 't been born yet!";
     }
     else
     {
          std::cout << "You are not old enough to enter!";
     }

     return 0;
}
*/
/*
#include <iostream>

int main()
{
     int month;
     std::cout << "Enter the month(1-12): ";
     std::cin >> month;



     switch ( month )
     {
     case 1:
          std::cout << "It is January";
          break;
     case 2:
          std::cout << "It si February";
          break;
     case 3:
          std::cout << "It is March";
          break;
     case 4:
          std::cout << "It is April";
          break;
     case 5:
          std::cout << "It is May";
          break;
     case 6:
          std::cout << "It is June";
          break;
     case 7:
          std::cout << "It s July";
          break;
     case 8:
          std::cout << "It is August";
          break;
     case 9:
          std::cout << "It is September";
          break;
     case 10:
          std::cout << "It is October";
          break;
     case 11:
          std::cout << "It is November";
          break;
     case 12:
          std::cout << "It is December";
          break;
     default:
          std::cout << "NO FOUND";
          break;

     }

     return 0;
}
*/

/*
#include <iostream>

int main()
{
     std::string name;

     std::cout << "Enter your name : ";

     std::getline(std::cin, name);
     if(name.length() > 12)////这个东西可以计算字符串的长度
     {
          std::cout << "Your name can't be over 12 character";
     }
     else
     {
          std::cout << "Wclcome" << name;
     }

     ////   name.empty() 会返回布尔值 检查是否有输入
     ////   name.clear() 会清除掉你前面输入的这个字符串变成空
     ////   name.append(@gmail.com)  这个会把阔后里面的字符串添加到你的name字符串末尾
     ////   std::cout << name.at(0);   这个指的是把这个字符串的第一个字符输出
     ////   例如taozhikun 他就输出 t、
     ////   name.insert(0, "@")  这里就是说在name这个字符串的第一位字符的前面插入这么个东西
     ////   例如taozhikun 会变成 @taozhikun
     ////   name.find(' ')  这个是查找name字符串里面有没有空格，而且会告诉你第一个空格的位置
     ////   name.erase(0, 3)  这个是删除用的，输入开始索引和结束索引

     return 0;
}
*/
/*
#include <iostream>

int main()
{
     std::string name;
     while ( name.empty() )
     {

          std::cout << "Enter your name: ";
          std::getline( std::cin, name );
     }

     std::cout << "Hello " << name;

     return 0;
}
*/

/*
#include <iostream>

void happyBirthday(std::string name);
int main()
{
     std::string name = "taozk";
     happyBirthday(name);
}
void happyBirthday( std::string name)
{
     std::cout << "Happy Birthday " << name;
}
*/
/*
#include <iostream>


using namespace std;

bool isPrimeNumber(int number);
int main()
{
     for(int i = 1 ; i <= 1000; i++)
     {
          if(isPrimeNumber(i))
          {
               cout << i << " is prime number" << "\n";
          }
     }

}
bool isPrimeNumber(int number)
{
     for(int i = 2; i < number; i++)
     {
          if(number % i == 0)
          {
               return false;
          }
     }
     return true;
}

*/

#include <iostream>

using namespace std;

void showMenu()
{
     cout << "*********Menu***********" << endl;
     cout << "1 . Check balance" << endl;
     cout << "2 . Deposit" << endl;
     cout << "3 . Withdraw" << endl;
     cout << "4 . Exit" << endl;  // 更改为 Exit 以避免与 break 混淆
}

int main()
{
     double balance = 500;  // 将 balance 移到这里以确保它在整个程序中保持
     int option = 0;

     do
     {
          showMenu();
          cout << "Option: ";
          cin >> option;

          switch(option)
          {
          case 1:
               cout << "Balance is " << balance << "$" << endl;
               break;
          case 2:
               cout << "Deposit amount: ";
               double depositAmount;
               cin >> depositAmount;
               balance += depositAmount;
               break;
          case 3:
               cout << "Withdraw amount: ";
               double withdrawAmount;
               cin >> withdrawAmount;
               if(withdrawAmount <= balance)
               {
                    balance -= withdrawAmount;
               }
               else
               {
                    cout << "Not enough money!" << endl;
               }
               break;
          case 4:
               cout << "Exiting program..." << endl;
               break;
          default:
               cout << "Invalid option, please try again." << endl;
               break;
          }

     } while(option != 4);

     return 0;
}

























