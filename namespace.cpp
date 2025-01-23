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
