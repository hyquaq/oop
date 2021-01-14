#include <iostream>

using namespace std;

class nonStatic
{
private:

public:
    int nonStatic;

};

//biến static thường được dùng để lưu các giá trị chung
//hoặc là hằng số của các đối tượng
class haveStatic
{
public:
    static int Static;
};
int haveStatic::Static = 0;


//function static
class Math
{
public:
    static int MAX(int a, int b)
    {
        return a > b ? a : b;
    }

    static int MIN(int a, int b)
    {
        return a < b ? a : b;
    }
};

//truy xuất giá trị trong class với static (ERROR)
//class Math2{
//public:
//    int pi = 3;
//    static int getPi(){
//        return pi;
//    }
//};

//nạp chồng phương thức
//ex: hàm abs có thể dùng cho tất cả kiểu dữ liệu
class Math3
{
public:
//    c1
    static int add(int a, int b)
    {
        return a + b;
    }
    static double add(double a, double b)
    {
        return a + b;
    }
    static long add(long a, long b)
    {
        return a + b;
    }
//    c3
    static int MAX(int x, int y)
    {
        return x > y ? x : y;
    }
    static int MAX(int x, int y, int z)
    {
        return MAX(x,y) > z ? MAX(x,y) : z;
    }
//    c2
    static int Abs(int x)
    {
        return x > 0 ? x : -x;
    }
    static float Abs(float x)
    {
        return x > 0 ? x : -x;
    }
    static long Abs(long x)
    {
        return x > 0 ? x : -x;
    }
};

int main()
{
//    non static
    nonStatic t1, t2;
    t1.nonStatic = 1;
    t2.nonStatic = 2;
    cout << "non static" << endl;
    cout << t1.nonStatic << endl;
    cout << t2.nonStatic << endl;
//    have static
    haveStatic t3, t4;
    cout << "have static" << endl;
    cout << "before: " << t3.Static << t4.Static << endl;
    t3.Static = 1;
    t4.Static = 2;
    cout << "after: " << t3.Static << t4.Static << endl;
//    function static
    cout << "function static: MAX:" << Math::MAX(2,3) << " MIN:" << Math::MIN(1,10) << endl;

//    truy xuất giá trị trong class với static
//    cout << Math2::getPi() << endl;

//    nạp chồng phương thức
    cout << "nap chong phuong thuc: " << Math3::add(1,2) << " " << Math3::add(2.1, 2.3) << " " << endl;
//    cout << Math3::Abs(2.2) << endl;
    cout << Math3::MAX(1,2,3) << endl;
    return 0;
}
