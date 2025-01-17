#include <iostream>
#include <cmath>

int main()
{
     double x = 3;
     double y = 4;
     
   ///  z = std::max(x, y);  找出最大值
   ///  m = std::min(x, y);  找出最小值
   ///  z = pow(2, 4);       幂函数
   ///  m = sqrt(9);         开平方
   ///  z = abs(-3);         计算绝对值
   ///  z = round(x)         四舍五入
   ///  z = ceil(x);         向上取整
   ///  z = floor(x)         向下取整



     return 0;
}






#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = -5.6, y = 3.0;

    // 绝对值
    cout << "abs(" << x << ") = " << abs(x) << endl;
    cout << "fabs(" << x << ") = " << fabs(x) << endl;

    // 平方根
    cout << "sqrt(" << x << ") = " << sqrt(abs(x)) << endl;  // 传入绝对值

    // 幂运算
    cout << "pow(" << x << ", " << y << ") = " << pow(x, y) << endl;

    // 指数与对数
    cout << "exp(" << y << ") = " << exp(y) << endl;
    cout << "log(" << y << ") = " << log(y) << endl;
    cout << "log10(" << y << ") = " << log10(y) << endl;

    // 三角函数
    cout << "sin(" << y << ") = " << sin(y) << endl;
    cout << "cos(" << y << ") = " << cos(y) << endl;
    cout << "tan(" << y << ") = " << tan(y) << endl;

    // 反三角函数
    cout << "asin(" << 0.5 << ") = " << asin(0.5) << " (radians)" << endl;
    cout << "acos(" << 0.5 << ") = " << acos(0.5) << " (radians)" << endl;
    cout << "atan(" << y << ") = " << atan(y) << " (radians)" << endl;

    // 角度与弧度转换
    double angle_deg = 45.0;
    double angle_rad = angle_deg * (M_PI / 180.0);
    cout << angle_deg << " degrees = " << angle_rad << " radians" << endl;

    // 取整
    cout << "ceil(" << x << ") = " << ceil(x) << endl;
    cout << "floor(" << x << ") = " << floor(x) << endl;
    cout << "round(" << x << ") = " << round(x) << endl;
    cout << "trunc(" << x << ") = " << trunc(x) << endl;

    // 余数
    cout << "fmod(" << x << ", " << y << ") = " << fmod(x, y) << endl;

    return 0;
}
