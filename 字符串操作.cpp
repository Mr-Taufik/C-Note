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

     ////  name.empty() 会返回布尔值 检查是否有输入
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

a. name.empty();
该方法检查字符串是否为空。如果 name 字符串没有任何字符（长度为0），则返回 true，否则返回 false。
if (name.empty()) {
    std::cout << "No name entered!";
}

b. name.clear();
clear() 方法会删除字符串中的所有字符，使其成为空字符串。调用此方法后，name 的长度变为0。
name = "John";
name.clear();  // 现在 name 为空

c. name.append(" @gmail.com");
append() 方法将指定的字符串附加到 name 字符串的末尾。这将修改 name 字符串并将 "@gmail.com" 添加到其中。
name = "user";
name.append(" @gmail.com");  // 现在 name = "user @gmail.com"

d. name.at(0);
at() 方法用于访问字符串中指定位置的字符，传入的位置必须是有效的索引（从 0 开始）。name.at(0) 输出字符串中的第一个字符
name = "taozhikun";
std::cout << name.at(0);  // 输出 't'

e. name.insert(0, "@");
insert() 方法将指定的字符串插入到目标字符串的指定位置。name.insert(0, "@") 将字符 @ 插入到 name 字符串的第一个位置（索引0）
name = "taozhikun";
name.insert(0, "@");  // 现在 name = "@taozhikun"

f. name.find(' ');
find() 方法用于查找指定字符或子字符串在目标字符串中第一次出现的位置。如果没有找到，返回 std::string::npos。
name = "hello world";
size_t pos = name.find(' ');  // pos = 5，表示空格字符的位置
if (pos != std::string::npos) {
    std::cout << "Space found at position: " << pos;
}

g. name.erase(0, 3);
erase() 方法用于删除从指定索引位置开始的字符。它接受两个参数，第一个是删除的起始位置，第二个是删除的字符数
name = "abcdef";
name.erase(0, 3);  // 删除从索引0开始的3个字符，结果 name = "def"


  
  





