#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
	    string name;
		int rollnumber;
		float gpa;
		
	public:
	    student()
		{
		    name = "unknown";
			rollnumber = 0;
			gpa = 0.0;	
		}
		
		student(string n, int r, float g)
		{
		    name = n;
			rollnumber = r;
			gpa = g;	
		}
		
		student(const student &s)
		{
		    name = s.name;
			rollnumber = s.rollnumber;
			gpa = s.gpa;	
		}
		
		string getname() const
		{
		    return name;	
		}	
		
		int getrollnumber() const
		{
			return rollnumber;
		}
		
		float getgpa() const
		{
			return gpa;
		}
		
		void display() const
		{
			cout<<"name: "<<name<<endl;
			cout<<"roll number: "<<rollnumber<<endl;
			cout<<"gpa: "<<gpa<<endl;
		}
};

int main()
{
	student s1;
	student s2("john doe", 101,3.75f);
	student s3 = s2;
	
	cout<<"default constructor object: "<<endl;
	s1.display();
	
	cout<<"\nparameterized constructor object: "<<endl;
	s2.display();
	
	cout<<"\ncopied object: "<<endl;
	s3.display();
}