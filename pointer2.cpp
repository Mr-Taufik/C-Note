#include <iostream>
#include <string>

std::string RecommendMeFood(char firstletter);

int main()
{
    std::cout << "Today I will eat " << RecommendMeFood('c');
    return 0;
}

std::string RecommendMeFood(char firstletter)
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
std::string 提供了更安全和便捷的字符串处理方式
