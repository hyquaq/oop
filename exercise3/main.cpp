//oop có 4 tính chất
//+ tính đóng gói encapsulation
//    mục đích
//    hạn chế lỗi khi phát triển
//    không bảo bảo mật thông tin
//    ex:
//        class student{
//        private:
//            string name;
//        public:
////            getter
//            string getName(){
//                return name;
//                }
////            setter
//            void setName(string name){
//                this->name = name;
//                }
//        };
//+ tính kế thừa inheritance
//+ tính đa hình pylymorphism
//+ tính trừu tượng abstraction


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
