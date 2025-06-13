#include<iostream>
using namespace std;

class employee
{
	public:
		int emp_id;
		string emp_name;
		int emp_age;
		string emp_role;
		float emp_salary;
		string emp_city;
		int emp_experience;
		string emp_company_name;
		
		void input()
		{
			cout<<"enter employee ID: ";
			cin>>emp_id;
			cin.ignore();
			
			cout<<"enter name: ";
			getline(cin,emp_name);
			
			cout<<"enter age: ";
			cin>>emp_age;
			cin.ignore();
			
			cout<<"enter role: ";
			getline(cin,emp_role);
			
			cout<<"enter salary: ";
			cin>>emp_salary;
			cin.ignore();
			
			cout<<"enter city: ";
			getline(cin,emp_city);
			
			cout<<"enter experience(in years): ";
			cin>>emp_experience;
			cin.ignore();
			
			cout<<"enter company name: ";
			getline(cin,emp_company_name);
		}
		void display()
		{
			cout<<"\nEmloyee ID: "<<emp_id<<endl;
			cout<<"\nName: "<<emp_name<<endl;
			cout<<"\nAge: "<<emp_age<<endl;
			cout<<"\nRole: "<<emp_role<<endl;
			cout<<"\nSalary: "<<emp_salary<<endl;
			cout<<"\nCity: "<<emp_city<<endl;
			cout<<"Experience: "<<emp_experience<<"years"<<endl;
			cout<<"Company Name: "<<emp_company_name<<endl;
		}
};

int main()
{
	const int SIZE = 2;
	employee emp[SIZE];
	
	cout<<"Enter details for "<<SIZE<<"employees:\n";
	for(int i = 0;i < SIZE; i++)
	{
		cout<<"\nEmployee"<<i + 1<<":\n";
		emp[i].input();
	}
	
	cout<<"\n=====Employee Records =====\n";
	for(int i = 0; i < SIZE; i++)
	{
		cout<<"\n---Employee"<<i + 1<<"Details---";
		emp[i].display();
	}
}