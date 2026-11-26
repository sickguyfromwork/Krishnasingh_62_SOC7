#include<iostream>
using namespace std;

class Calculator
{
	public:
	int add (int x,int y)
	{
	 return x+y;
	}
         int add (int a,int b,int c)
	{
	 return a+b+c;
	}
};
	int main()
	{
	 Calculator c;
	 cout<<"THE ADDITION IS:"<<c.add(2,3)<<endl;
	 cout<<"THE ADDITION IS:"<<c.add(3,6,9)<<endl;
	 return 0;
	}
