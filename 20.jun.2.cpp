#include<iostream>
using namespace std;

class cricket
{
	public:
		virtual void getTotalOvers()
		{
			cout<<"total overs in a generic cricket match."<<endl;
		}
};

class T20Match : public cricket
{
	public:
		void gettotalovers()
		{
			cout<<"total overs in a T20 match: 20 overs."<<endl;
		}
};

class TestMatch : public cricket
{
	public:
		void getTotalOvers() override
		{
			cout<<"total overs in a test match : unlimited (played over 5 days)."<<endl;
		}
};

int main()
{
	cricket*match;
	
	T20Match t20;
	TestMatch test;
	
	match = &t20;
	match -> getTotalOvers();
	
	match = &test;
	match -> getTotalOvers();
}