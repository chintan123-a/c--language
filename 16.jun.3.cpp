#include<iostream>
#include<cstring>
using namespace std;

class student
{
	private:
		char*name;
		int age;
		
	public:
		student(const char*n, int a)
		{
			name = new char[strlen(n) + 1];
			strcpy(name, n);
			age = a;
		}
		
		student(const student & other)
		{
			name = new char[strlen(other.name) + 1];
			strcpy(name, other.name);
			age = other.age;
		}
		
		~student()
		{
			delete[]name;
		}
		
		void display()
		{
			cout<<"name: "<<name<<", age: "<<age<<endl;
		}
};

int main()
{
	student s1("alice",20);
	student s2 = s1;
	
	s1.display();
	s2.display();
}
