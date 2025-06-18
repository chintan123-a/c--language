#include<iostream>
using namespace std;

class RBI
{
	public:
		float rate;
		void getROI()
		{
			cout<<"rate of interest: "<<rate<<endl;
		}
};

class SBI : public RBI
{
	public:
		SBI()
		{
			rate = 5.5;
		}
};

class BOB: public RBI
{
	public:
		BOB()
		{
			rate = 6.0;
		}	
};

class ICICI : public RBI
{
	public:
		ICICI()
		{
			rate = 6.5;
		}
};

int main()
{
	SBI s;
	BOB b;
	ICICI i;
	
	cout<<"SBI -> ";
	s.getROI();
	
	cout<<"BOB -> ";
	s.getROI();
	
	cout<<"ICICI -> ";
	s.getROI();
}