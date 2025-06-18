#include<iostream>
using namespace std;

class A
{
	protected:
		int a;
		
	public:
	    A(int x)
		{
			a = x;
		 } 
};

class B
{
	protected:
		int b;
		
	public:
	    B(int y)
		{
			b = y;
		 } 
};

class C : public A, public B
{
	protected:
		int c;
		
	public:
		C(int x, int y, int z) : A(x), B(y)
		{
			c = z;
		}
};

class D : public C
{
	int d;
	public:
		D(int x, int y, int z, int w) : C(x , y , z)
		{
			d = w;
		}
		
		void displaySum()
		{
			int sum = a + b + c + d;
			cout<<"sum of four numbers: "<<sum<<endl;
		}
};

int main()
{
	D obj(10 , 20 , 30 , 40);
	obj.displaySum();
}