# ke thua 
```
#include<iostream>

using namespace std;

class Person {
private:
	string name;
	int dob;
public:
	Person(string name, int dob) {
		this->name = name;
		this->dob = dob;
	}
	string getName()
	{
		return name;
	} 
	int getDob()
	{
		return dob;
	}
};

class Student : public Person {
private:
	double gpa;
public:
	Student(string name, int dob, double gpa) : Person(name, dob)
	{
		this->gpa = gpa;
	}
	double getGpa()
	{
		return gpa;
	}
};

int main() {
	Student s("Hai", 1999, 8.8);
	cout << "Name: " << s.getName() << endl;
	cout << "Date of birth: " << s.getDob() << endl;
	cout << "GPA: " << s.getGpa() << endl;
	return 0;
}
```
## ghi de
```
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
```
#
```

```