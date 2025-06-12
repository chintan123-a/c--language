#include<iostream>
using namespace std;

class student
{
	private:
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
		string stu_city;
		string stu_email;
		string stu_college;
		
	public:
		void setData(int id,string name,int age,string course,string city,string 
		            email,string college )
		    {
		        stu_id = id;
				stu_name = name;
				stu_age = age;
				stu_course = course;
				stu_city = city;
				stu_email = email;
				stu_college = college;	
			}
	    
	    void displayData()
	    {
	    	cout<<"ID: "<<stu_id<<endl;
	    	cout<<"Name: "<<stu_name<<endl;
	    	cout<<"Age: "<<stu_age<<endl;
	    	cout<<"Course: "<<stu_course<<endl;
	    	cout<<"City: "<<stu_city<<endl;
	    	cout<<"Email: "<<stu_email<<endl;
	    	cout<<"College: "<<stu_college<<endl;
	    	cout<<"--------------------------"<<endl;
		}
};

int main()
{
	student students[5];
	int id, age;
	string name, course, city, email, college;
	
	for(int i = 0; i < 5; i++)
	{
		cout<<"Enter details for student"<<i + 1<<":"<<endl;
		cout<<"ID: ";
		cin>>id;
		cin.ignore();
		cout<<"Name: ";
		getline(cin , name);
		cout<<"Age: ";
		cin>>age;
		cin.ignore();
		cout<<"Course: ";
		getline(cin , course);
		cout<<"City: ";
		getline(cin , city);
		cout<<"Email: ";
		getline(cin , email);
		cout<<"College: ";
		getline(cin , college);
		
		students[i].setData(id,name,age,course,city,email,college);
		cout<<endl;
	}
	
	cout<<"==== student records ===="<<endl;
	
	for(int i = 0; i < 5; i++)
	{
		students[i].displayData();
	}
}
