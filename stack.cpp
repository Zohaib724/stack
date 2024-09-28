#include<iostream>
using namespace std;
class A{
public:
	int top=-1;
	int s[100];
	int max_size;
	void push(int x)
	{
		if(top==max_size-1)
		{
			cout<<"overflow";
		}
		else
		{
			s[++top]=x;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"underflow";
		}
		else
		{
			cout<<"deleted value is"<<s[top--];
		}
	}
	void display()
	{
		if(top==-1)
		{
			cout<<"empty";
		}
		else
		{
			for(int i=top;i>=0;i--)
			{
				cout<<s[i];
			}
		}
	}
}ob;
	int main()
	{
		cout<<"enter the size of stack";
		cin>>ob.max_size;
		int c;
		while(c!=4)
		{
			cout<<"\n1.push 2.pop 3.display 4.exit";
			cout<<"\nenter your choice";
			cin>>c;
			switch(c)
			{
				case 1:cout<<"enter the value you want to enter";
				 	   int v;
				 	   cin>>v;
				 	   ob.push(v);
				 	   break;
				case 2:ob.pop();
				  	   break;
				case 3:ob.display();
				       break;
			    case 4:cout<<"exit";
				default:cout<<"wrong input";  		
			}
		}
	return 0;	
	}
