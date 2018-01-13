#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	string s;
	int a[2],init,f,i=0,cs;
	cout<<"Enter states: ";
	for(i=0;i<2;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter initial state: ";
	cin>>init;
	cout<<"Enter final state: ";
	cin>>f;
	cs=init;
	cout<<"Enter string:\t";
	cin>>s;
	int b=s.length();
	for(i=0;i<=b-1;i++)
	{
			if(s[i]=='0')
			{
				cs=0;
					
			}
			else if(s[i]=='1')
			{
				cs=1;	
			}
			else
				break;
			#cout<<cs<<"-->"<<i;
	}
	if(cs==f)
	{
		cout<<"Number is even & current state is "<<cs;	
	}
	else
	{
		cout<<"Number is odd and string not accepted & current state is"<<cs	;
	}
	
	getch();
}
