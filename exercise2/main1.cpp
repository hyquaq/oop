#include <iostream>

using namespace std;
#include<iostream>

using namespace std;

class Student {
private:
	string name;
	char gender;
public:
	Student() {
		name = "Unknown";
		gender = 'u';
	}

	Student(string name) {
		this->name = name;
		this->gender = 'u';
	}

	Student(char gender) {
		this->name = "Unknown";
		this->gender = gender;
	}

	Student(string name, char gender) {
		this->name = name;
		this->gender = gender;
	}

	void display() {
		cout << "Name: " + name << endl;
		if (gender == 'u') {
			cout << "Gender: Unknown" << endl;
		}
		if (gender == 'm') {
			cout << "Gender: Male" << endl;
		}
		if (gender == 'f') {
			cout << "Gender: Female" << endl;
		}
	}
};

int main()
{
    Student s1;
	s1.display();
	Student s2("Quang");
	s2.display();
	Student s3('m');
	s3.display();
	Student s4("Thu", 'f');
	s4.display();
    return 0;
}
//#include <iostream>
//
//using namespace std;
//
//class ArrayCalculator
//{
//public:
//    static int maxOfArray(int arr[], int n)
//    {
//        int j = 0;;
//        for(int i = 0; i < n; i ++)
//            arr[j] > arr[i] ? j = i : j = j;
//        return arr[j];
//    }
//
//    static double maxOfArray(double arr[], int n)
//    {
//        int j = 0;;
//        for(int i = 0; i < n; i ++)
//            arr[j] > arr[i] ? j = i : j = j;
//        return arr[j];
//    }
//
//};
//
//int main()
//{
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include <iostream>
////
////using namespace std;
////
////class ArrayCalculator{
////public:
////    static int sumOfArray(int arr[], int n){
////        int s = 0;
////        for(int i = 0; i < n; i ++)
////            s += arr[i];
////        return s;
////    }
////
////    static double sumOfArray(double arr[], int n){
////        double s = 0;
////        for(int i = 0; i < n; i ++)
////            s += arr[i];
////        return s;
////    }
////
////};
