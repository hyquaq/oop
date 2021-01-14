#include <iostream>

using namespace std;

//khai báo class
class Circle
{
//biến private chỉ sử dụng trong class
private:
    double radius;
//biến protected sử dụng trong class và class kế thừa(class con)
protected:

//biến public sử dụng ở mọi nơi
public:
//    Contructer
    Circle(double radius)
    {
//    fix trường hợp có truyền tham số
//        trường hợp tên biến truyền vào trùng tên biến có sẵn trong class phải dùng this->
        this->radius = radius;
    }

    Circle()
    {
//    fix trường hợp không truyền tham số sẵn
    }

//    tính diện tích hình tròn
    double getArea()
    {
        return 3.14*radius*radius;
    }
//    tính chu vi hình tròn
    double getCircumference()
    {
        return 2*3.14*radius;
    }

//    destructor
    ~Circle(){
//        delete[] arr;
    }
};

int main()
{
    Circle r(2);
    cout << r.getArea();
    return 0;
}
