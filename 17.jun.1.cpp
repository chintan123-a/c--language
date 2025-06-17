#include<iostream>
using namespace std;

class x
{
	public:
		int a, b, c;
};

class y : public x
{
	public:
		void setdeta(int x, int y, int z)
		{
			a = x;
			b = y;
			c = z;
		}
		
		void getdeta()
		{
			int sumofcubes = (a * a * a)+(b * b * b)+(c * c * c);
			
			cout<<"sum of cubes = "<<sumofcubes<<endl;
		}
};

int main()
{
	y obj;
	int num1 ,num2 ,num3;
	
	cout<<"enter three numbers: ";
	cin>> num1 >> num2 >> num3;
	
	obj.setdeta(num1 , num2 , num3);
	obj.getdeta();
}