#include <iostream>
#include <string>

using namespace std;

// 定义命名空间 namespace1
namespace namespace1
{
    int age = 20;
    string name = "taozk";

    // 嵌套命名空间
    namespace nested
    {
        double height = 175.5;
        void displayInfo()
        {
            cout << "Height in namespace1::nested: " << height << " cm" << endl;
        }
    }

    // 匿名命名空间
    namespace
    {
        int secretNumber = 42; // 只能在当前文件中访问

        void secretFunction()
        {
            cout << "This is a secret function in an anonymous namespace." << endl;
        }
    }

    void showSecret()
    {
        cout << "Secret Number: " << secretNumber << endl;
        secretFunction();
    }
}

// 定义命名空间 namespace2
namespace namespace2
{
    int age = 25;
    string name = "taozhikun";
}

// 命名空间别名
namespace ns1 = namespace1;
namespace ns2 = namespace2;

int main()
{
    // 访问 namespace1 和 namespace2 中的变量
    cout << "namespace1::age = " << namespace1::age << endl;
    cout << "namespace2::age = " << namespace2::age << endl;
    cout << "namespace1::name = " << namespace1::name << endl;
    cout << "namespace2::name = " << namespace2::name << endl;

    // 使用嵌套命名空间
    cout << "namespace1::nested::height = " << namespace1::nested::height << " cm" << endl;
    namespace1::nested::displayInfo();

    // 使用命名空间别名
    cout << "Using alias ns1::age = " << ns1::age << endl;
    cout << "Using alias ns2::name = " << ns2::name << endl;

    // 调用匿名命名空间中的函数（通过 namespace1 提供的接口）
    namespace1::showSecret();

    // 标准库命名空间 std 的使用
    // 虽然在顶部使用了 'using namespace std;'，但这里为了演示仍然使用 std:: 前缀
    std::cout << "This is using the std namespace explicitly." << std::endl;

    return 0;
}

这样可以进一步组织相关的变量和函数，增加代码的层次感和可读性。
访问方式为 namespace1::nested::height 和 namespace1::nested::displayInfo()

匿名命名空间 不具备名称，通常用于定义只在当前文件内可见的变量和函数，避免外部链接。
secretNumber 和 secretFunction 只能在定义它们的文件中访问。
提供 showSecret 函数作为接口，用于在 main 函数中访问匿名命名空间中的内容



namespace1::age = 20
namespace2::age = 25
namespace1::name = taozk
namespace2::name = taozhikun
namespace1::nested::height = 175.5 cm
Height in namespace1::nested: 175.5 cm
Using alias ns1::age = 20
Using alias ns2::name = taozhikun
Secret Number: 42
This is a secret function in an anonymous namespace.
This is using the std namespace explicitly.





