#include<iostream>
using namespace std;

class p
{
	public:
		float temperature;
};

class q : public p 
{
	public:
		float tofahrenheit()
		{
			return(temperature * 9 / 5) + 32;
		}
};

class r : public q
{
	public:
		void tokelvin()
		{
			float fahrenheit = tofahrenheit();
			float kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
			cout<<"temperature in fahrenheit: "<<fahrenheit<<"f"<<endl;
			cout<<"temperature in kelvin: "<<kelvin<<"k"<<endl;
		}
};

int main()
{
	r obj;
	cout<<"enter temperature in celsius: ";
	cin>>obj.temperature;
	
	obj.tokelvin();
}