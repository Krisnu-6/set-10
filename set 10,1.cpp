#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int a,b,c;
	char data[100] = "can not devide by zero";
	
	cout<<"Enter Value A = ";
	cin>>a;
	cout<<"Enter Value B = ";
	cin>>b;
	
	try{
		
		if(b>0)
		{
			c = a/b;
			cout<<"Ans = "<<c<<endl;
		}
		else
		{
			throw a; 
		}
	}
	catch(char a[])
	{
		cout<<data<<endl;
	}
	catch(int s)
	{
		cout<<data<<endl;
	}
}