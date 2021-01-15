# rectangle
```
#include <iostream>

using namespace std;
class Rectangle
{
private:
    double length, width;
public:
    Rectangle(double l, double w)
    {
        length= l;
        width = w;
    }
    void setLength(double l)
    {
        length = l;
    }
    void setWidth(double w)
    {
        width = w;
    }
    double getLength()
    {
        return length;
    }
    double getWidth()
    {
        return width;
    }
    double getArea()
    {
        return length*width;
    }
    double getPerimeter()
    {
        return (length+width) * 2;
    }
};

int main()
{
    Rectangle r(4, 5);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    r.setLength(2);
    r.setWidth(3);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    return 0;
}
```
# time
~~~
#include <iostream>

using namespace std;
class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void setSecond(int s)
    {
        second = s;
    }
    void setHour(int h)
    {
        hour = h;
    }
    void setMinute(int m)
    {
        minute = m;
    }
    int getSecond(int s)
    {
        return second;
    }
    int getHour(int h)
    {
        return hour;
    }
    int getMinute(int m)
    {
        return minute;
    }
    void display()
    {
        printf("%.2d:%0.2d:%0.2d\n", hour, minute, second);
//        cout << hour << ": " << minute << ":" << second << endl;
    }
    void nextSecond()
    {
        second++;
        if (second == 60)
        {
            second = 0;
            minute++;
            if (minute == 60)
            {
                minute = 0;
                hour++;
                if (hour == 24)
                {
                    hour = 0;
                }
            }
        }
    }
    void previousSecond()
    {
        second --;
        if (second < 0)
        {
            second = 59;
            minute --;
            if(minute < 0)
            {
                minute = 59;
                hour--;
                if (hour < 0)
                {
                    hour = 23;
                }
            }
        }

    }
};


int main() {
//	Time t(23, 59, 59);
//	t.nextSecond();
//	t.display();
//	t.previousSecond();
//	t.display();
    Time t(12, 1, 1);
    t.display();
	t.setTime(23, 59, 59);
	t.display();
	t.nextSecond();
	t.display();
	t.nextSecond();
	t.display();
	t.setTime(7, 0, 0);
	t.display();
	t.previousSecond();
	t.display();
	return 0;
}

~~~
