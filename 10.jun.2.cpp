#include<iostream>
using namespace std;

class car
{
	public:
		int car_id;
		string car_company_name;
		string car_color;
		string car_model;
		int car_release_year;
		
		void inputdetails()
		{
			cout<<"enter car ID: ";
			cin>>car_id;
			cin.ignore();
			
			cout<<"enter car company name: ";
			getline(cin,car_company_name);
			
			cout<<"enter car color: ";
			getline(cin,car_color);
			
			cout<<"enter car model: ";
			getline(cin,car_model);
			
			cout<<"enter car release year: ";
			cin>>car_release_year;
		}
		
		void displaydetails()
		{
			cout<<"\ncar ID: "<<car_id<<endl;
			cout<<"car company name: "<<car_company_name<<endl;
			cout<<"car color: "<<car_color<<endl;
			cout<<"car model: "<<car_model<<endl;
			cout<<"car release year: "<<car_release_year<<endl;
		}
};

int main()
{
    car cars[4];
	
	cout<<"enter details for 4 cars:\n";
	for(int i = 0; i < 4; i++)
	{
	    cout<<"\ncar"<<i + 1<<":\n";
		cars[i].inputdetails();	
	}

	cout<<"\ncar records:\n";
	for(int i = 0; i < 4; i++)
	{
		cout<<"\ndetails of car"<<i + 1<<":\n";
		cars[i].displaydetails();
	}	
}