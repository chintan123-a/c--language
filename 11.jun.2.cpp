#include<iostream>
using namespace std;

class Customer
{
	private:
		int cust_id;
		string cust_name;
		int cust_age;
		string cust_city;
		string cust_mobile_number;
		int cust_simcard_validity;
		string cust_telecom_brand_name;
		
	public:
		void setData(int id,string name,int age,string city,string mobile,
		             int validity,string brand )
		    {
		        cust_id = id;
				cust_name = name;
				cust_age = age;
				cust_city = city;
				cust_mobile_number = mobile;
				cust_simcard_validity = validity;
				cust_telecom_brand_name = brand;	
			}
	    
	    void displayData()
	    {
	    	cout<<"Customer ID: "<<cust_id<<endl;
	    	cout<<"Name: "<<cust_name<<endl;
	    	cout<<"Age: "<<cust_age<<endl;
	    	cout<<"City: "<<cust_city<<endl;
	    	cout<<"Mobile Number: "<<cust_mobile_number<<endl;
	    	cout<<"SIM Card Validity(years): "<<cust_telecom_brand_name<<endl;
	    	cout<<"Telecom Brand: "<<cust_telecom_brand_name<<endl;
	    	cout<<"--------------------------"<<endl;
		}
};

int main()
{
	Customer customers[2];
	int id, age, validity;
	string name, city, mobile, brand;
	
	for(int i = 0; i < 2; i++)
	{
		cout<<"Enter details for customer "<<i + 1<<":"<<endl;
		cout<<"Customer ID: ";
		cin>>id;
		cin.ignore();
		cout<<"Name: ";
		getline(cin , name);
		cout<<"Age: ";
		cin>>age;
		cin.ignore();
		cout<<"City: ";
		getline(cin , city);
		cout<<"Mobile Number: ";
		getline(cin , mobile);
		cout<<"SIM Card validity(in years): ";
		cin>>validity;
		cin.ignore();
		cout<<"Telecom Brand Name(e.g., jio, airtel, vi): ";
		getline(cin , brand);
		
		customers[i].setData(id,name,age,city,mobile,validity,brand);
		cout<<endl;
	}
	
	cout<<"==== customer records ===="<<endl;
	
	for(int i = 0; i < 2; i++)
	{
		customers[i].displayData();
	}
}