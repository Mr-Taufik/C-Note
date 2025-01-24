#include <iostream>
#include <string>
#include <cctype> // 用于字符处理函数，如 tolower

// 函数声明
std::string RecommendFood(char firstLetter);
void InitializeFoodList(std::string foodList[]);
std::string GetFoodByIndex(const std::string foodList[], int index);

int main()
{
    char letter;
    std::cout << "请输入一个字母以获得食物推荐: ";
    std::cin >> letter;

    std::string recommendedFood = RecommendFood(letter);
    std::cout << "今天你可以吃: " << recommendedFood << ".\n";

    // 示例：通过索引访问食物
    int index = 3;
    std::string foodAtIndex = GetFoodByIndex(nullptr, index); // foodList 未初始化，此处仅为示例
    std::cout << "食物列表中索引 " << index << " 的食物是 " << foodAtIndex << ".\n";

    return 0;
}

std::string RecommendFood(char firstLetter)
{
    // 将输入字符转换为小写
    firstLetter = std::tolower(static_cast<unsigned char>(firstLetter));

    switch (firstLetter)
    {
        case 'a':
            return "苹果 (Apple)";
        case 'b':
            return "香蕉 (Banana)";
        case 'c':
            return "巧克力蛋糕 (Chocolate Cake)";
        case 'd':
            return "甜甜圈 (Donut)";
        case 'e':
            return "意大利面 (Spaghetti)";
        default:
            return "披萨 (Pizza)";
    }
}

void InitializeFoodList(std::string foodList[])
{
    foodList[0] = "苹果 (Apple)";
    foodList[1] = "香蕉 (Banana)";
    foodList[2] = "巧克力蛋糕 (Chocolate Cake)";
    foodList[3] = "甜甜圈 (Donut)";
    foodList[4] = "披萨 (Pizza)";
}

std::string GetFoodByIndex(const std::string foodList[], int index)
{
    const int MAX_FOODS = 5;
    if (index >= 0 && index < MAX_FOODS)
    {
        return foodList[index];
    }
    else
    {
        return "未知的食物 (Unknown Food)";
    }
}


#include <iostream>
#include <string>
#include <cctype> // 用于字符处理函数，如 tolower

// 函数声明
std::string RecommendFood(char firstLetter);
void InitializeFoodList(std::string foodList[]);
std::string GetFoodByIndex(const std::string foodList[], int index);

int main()
{
    // 初始化食物列表
    const int MAX_FOODS = 5;
    std::string foodList[MAX_FOODS];
    InitializeFoodList(foodList);

    char letter;
    std::cout << "请输入一个字母以获得食物推荐: ";
    std::cin >> letter;

    std::string recommendedFood = RecommendFood(letter);
    std::cout << "今天你可以吃: " << recommendedFood << ".\n";

    // 通过索引访问食物
    int index = 3;
    std::string foodAtIndex = GetFoodByIndex(foodList, index);
    std::cout << "食物列表中索引 " << index << " 的食物是 " << foodAtIndex << ".\n";

    return 0;
}

std::string RecommendFood(char firstLetter)
{
    // 将输入字符转换为小写
    firstLetter = std::tolower(static_cast<unsigned char>(firstLetter));

    switch (firstLetter)
    {
        case 'a':
            return "苹果 (Apple)";
        case 'b':
            return "香蕉 (Banana)";
        case 'c':
            return "巧克力蛋糕 (Chocolate Cake)";
        case 'd':
            return "甜甜圈 (Donut)";
        case 'e':
            return "意大利面 (Spaghetti)";
        default:
            return "披萨 (Pizza)";
    }
}

void InitializeFoodList(std::string foodList[])
{
    foodList[0] = "苹果 (Apple)";
    foodList[1] = "香蕉 (Banana)";
    foodList[2] = "巧克力蛋糕 (Chocolate Cake)";
    foodList[3] = "甜甜圈 (Donut)";
    foodList[4] = "披萨 (Pizza)";
}

std::string GetFoodByIndex(const std::string foodList[], int index)
{
    const int MAX_FOODS = 5;
    if (index >= 0 && index < MAX_FOODS)
    {
        return foodList[index];
    }
    else
    {
        return "未知的食物 (Unknown Food)";
    }
}



#include <iostream>
#include <string>
#include <cctype> // 用于字符处理函数，如 tolower
#include <vector>

// 定义 Food 类
class Food
{
private:
    std::string name;
    char identifier; // 用于推荐的字母

public:
    // 构造函数
    Food(char id, const std::string& foodName) : identifier(id), name(foodName) {}

    // 获取食物名称
    std::string getName() const { return name; }

    // 获取标识符
    char getIdentifier() const { return identifier; }
};

// 定义 FoodRecommender 类
class FoodRecommender
{
private:
    std::vector<Food> foodList;

public:
    // 添加食物到列表
    void addFood(char identifier, const std::string& foodName)
    {
        foodList.emplace_back(identifier, foodName);
    }

    // 根据字母推荐食物
    std::string recommend(char firstLetter) const
    {
        firstLetter = std::tolower(static_cast<unsigned char>(firstLetter));
        for (const auto& food : foodList)
        {
            if (std::tolower(static_cast<unsigned char>(food.getIdentifier())) == firstLetter)
            {
                return food.getName();
            }
        }
        return "披萨 (Pizza)"; // 默认推荐
    }

    // 根据索引获取食物
    std::string getFoodByIndex(int index) const
    {
        if (index >= 0 && index < static_cast<int>(foodList.size()))
        {
            return foodList[index].getName();
        }
        else
        {
            return "未知的食物 (Unknown Food)";
        }
    }

    // 显示所有可用的食物
    void displayAllFoods() const
    {
        std::cout << "可用的食物列表:\n";
        for (size_t i = 0; i < foodList.size(); ++i)
        {
            std::cout << i << ": " << foodList[i].getName() << " (标识符: " << foodList[i].getIdentifier() << ")\n";
        }
    }
};

int main()
{
    FoodRecommender recommender;

    // 添加食物到推荐系统
    recommender.addFood('a', "苹果 (Apple)");
    recommender.addFood('b', "香蕉 (Banana)");
    recommender.addFood('c', "巧克力蛋糕 (Chocolate Cake)");
    recommender.addFood('d', "甜甜圈 (Donut)");
    recommender.addFood('e', "意大利面 (Spaghetti)");

    // 显示所有食物
    recommender.displayAllFoods();

    // 获取用户输入
    char letter;
    std::cout << "请输入一个字母以获得食物推荐: ";
    std::cin >> letter;

    // 推荐食物
    std::string recommendedFood = recommender.recommend(letter);
    std::cout << "今天你可以吃: " << recommendedFood << ".\n";

    // 通过索引获取食物
    int index;
    std::cout << "请输入一个索引以获取对应的食物: ";
    std::cin >> index;
    std::string foodAtIndex = recommender.getFoodByIndex(index);
    std::cout << "食物列表中索引 " << index << " 的食物是 " << foodAtIndex << ".\n";

    return 0;
}





