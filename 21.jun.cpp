#include<iostream>
using namespace std;

class number
{
	private:
		int value;
		
	public:
		number(int v=0)
		{
			value = v;
		}
		
		bool operator < (number obj)
		{
			return value < obj.value;
		}
		
		void display()
		{
			cout<<"value: "<<value<<endl;
		}
};

int main()
{
	number n1(50);
	number n2(30);
	
	cout<<"comparing two numbers: "<<endl;
	
	n1.display();
	n2.display();
	
	if(n1 < n2)
	    cout<<"second object has a higher value."<<endl;
	else
	    cout<<"first object has a higher value."<<endl;    
}