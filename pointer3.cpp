#include <iostream>

// 定义最大食物种类
const int MAX_FOODS = 5;

// 函数声明
const char* RecommendFood(char firstLetter);
void InitializeFoodArray(const char* foodArray[]);
const char* GetFoodByIndex(const char* foodArray[], int index);

int main()
{
     // 创建食物指针数组
     const char* foodArray[MAX_FOODS];
     InitializeFoodArray(foodArray);

     char letter = 'd';
     const char* recommendedFood = RecommendFood(letter);

     std::cout << "Today I will eat " << recommendedFood << ".\n";

     // 通过索引获取食物
     int index = 2;
     const char* foodAtIndex = GetFoodByIndex(foodArray, index);
     std::cout << "Food at index " << index << " is " << foodAtIndex << ".\n";

     return 0;
}

const char* RecommendFood(char firstLetter)
{
     if (firstLetter == 'a' || firstLetter == 'A')
     {
          return "apple";
     }
     else if (firstLetter == 'b' || firstLetter == 'B')
     {
          return "banana";
     }
     else if (firstLetter == 'c' || firstLetter == 'C')
     {
          return "chocolate cake";
     }
     else if (firstLetter == 'd' || firstLetter == 'D')
     {
          return "donut";
     }
     else
     {
          return "pizza";
     }
}

void InitializeFoodArray(const char* foodArray[])
{
     foodArray[0] = "apple";
     foodArray[1] = "banana";
     foodArray[2] = "chocolate cake";
     foodArray[3] = "donut";
     foodArray[4] = "pizza";
}

const char* GetFoodByIndex(const char* foodArray[], int index)
{
     if (index >= 0 && index < MAX_FOODS)
     {
          return foodArray[index];
     }
     else
     {
          return "unknown food";
     }
}

const char* foodArray[MAX_FOODS];：声明一个指针数组，每个元素都是指向常量字符的指针。










