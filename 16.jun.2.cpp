#include<iostream>
using namespace std;

class student
{
	public:
		string name;
		int age;
		
		student(string n, int a):
		name(n), age(a){}
		
		void updatedetails(student &s)
		{
			s.name = "updated" + s.name;
			s.age += 1;
		}
		
		void display()
		{
			cout<<"name: "<<name<<", age: "<<age<<endl;
		}
};

int main()
{
	student s1("alice" , 20);
	student s2("bob", 22);
	
	s1.display();
	s1.updatedetails(s2);
	s2.display();
}