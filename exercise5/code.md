# tính đa hình
### *một phương thức nhưng nhiều form*
```
class Calculator{
public:
    int add(int x, int y){
        return x + y;
    }
    int add(int x, int y, int z){
        return add(x, y) + z;
    }
    double add(double x, double y){
        return x + y;
    }
};
```
# ghi đè
```
class Employee{
private:
    int salary;
public:
    int getSalary(){
        return salary;
    }
};

class Manager: Employee{
private:
    int bonus;
public:
    int getSalary(){
        return salary + bonus;
    }
};
```
### khi lớp cha và lớp con đều có chung một biến thì ưu tiên gọi lớp cha
```
#include <iostream>

using namespace std;

class Animal {
public:
	int age = 1;
};

class Dog : public Animal {
public:
	int age = 2;
};


int main() {
	Animal* animal = new Dog();
	cout << animal->age;
	return 0;
}
```
## *tính trừu tượng* (Lớp trừu trượng)
**ex:** lớp trừu tượng
```
class Animal {
public:
	// sound là một phương thức trừu tượng
	virtual void sound() = 0;
};
```
```
#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point()
    {
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int getY()
    {
        return y;
    }
};

class Line{
private:
    Point begin;
    Point end;
public:
    Line(Point begin, Point end)
    {
        this->begin = begin;
        this->end = end;
    }
    Line(int x, int y, int x1, int y1)
    {
        this->begin = Point(x, y);
        this->end = Point(x1, y1);
    }
    void setBegin(Point begin)
    {
        this->begin = begin;
    }
    Point getBegin()
    {
        return begin;
    }
    void setEnd(Point end)
    {
        this->end = end;
    }
    Point getEnd()
    {
        return end;
    }
    double getLength()
    {
        return sqrt((begin.getX() - end.getX()) * (begin.getX() - end.getX()) + (begin.getY() - end.getY())*(begin.getY() - end.getY()));
    }
};


int main() {
	Point begin(1, 1);
	Point end(2, 2);
	Line line1(begin, end);
	cout << line1.getLength() << endl;

	Line line2(2, 3, 5, 4);
	cout << line2.getLength() << endl;
	return 0;
}

```