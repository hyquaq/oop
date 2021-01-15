//tính kế thừa
//+ sử lý trường hợp code lặp lại quá nhiều (DRY
//class Student : private Person
//or
//class Student : Person
//+ trong kế thừa khi lớp con khai báo phương thức trùng với phương thức của lớp cha
//thì phương thức của lớp cha sẽ bị thay thế
//tuy nhiên vẫn có thể gọi lại ::

//tránh include nhiều lần một class (câu lệnh tiền xử lý)

//up-casting
//down-casting
#include<iostream>

using namespace std;

class Person {
private:
	string name;
	string gender;

public:
	Person(string name, string gender) {
		this->name = name;
		this->gender = gender;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	string getGender() {
		return gender;
	}

	void setGender(string gender) {
		this->gender = gender;
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
	}
};

class Student : Person {
	private:
		int dob;
	public:
		Student(string s, string g, int dob): Person(s, g)
		{
			this->dob = dob;
		}
		void display()
		{
			Person::display();
			cout << "Salary: " << dob << endl;
		}
};

int main() {
	Student s("Trung", "Male", 1700);
	s.display();
	return 0;
}
