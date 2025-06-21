#include<iostream>
using namespace std;

class arithmetic{};

class calculator : public arithmetic
{
	public:
		void calculate(int a, int b)
		{
			if(b != 0)
			    cout<<"division: "<<(float)a / b<<endl;
			else
			    cout<<"error: division by zero!"<<endl;
		}
		
		void calculate(int a, int b, int c)
		{
			cout<<"subtraction: "<<(a - b - c)<<endl;
		}
		
		void calculate(int a, int b, int c, int d)
		{
			cout<<"muliplication: "<<(a * b * c * d)<<endl;
		}
		
		void calculate(int a, int b, int c, int d, int e)
		{
			cout<<"addition: "<<(a + b + c + d + e)<<endl;
		}
};

int main()
{
	calculator calc;
	
	calc.calculate(20 , 4);
	calc.calculate(20 , 5 , 3);
	calc.calculate(2 , 3 , 1 , 4);
	calc.calculate(1 , 2 , 3 , 4 , 5);
}