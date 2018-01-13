#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void binary()
{
	char arr[20],b='a';
	cout<<"Enter the binary string"<<endl;
	fflush(stdin);
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='0' && b=='a')
			cout<<b<<"--"<<arr[i]<<"-->"<<b<<endl;
		else
		if(arr[i]=='1' && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		if(arr[i]=='0' && b=='b')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='c';
			cout<<b<<endl;
		}
		else
		if(arr[i]=='1' && b=='b')
		{ 
			cout<<b<<"--"<<arr[i]<<"-->";
			b='a';
			cout<<b<<endl;
		}
		else
		if(arr[i]=='1' && b=='c')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='c';
			cout<<b<<endl;
		}
		else
		if(arr[i]=='0' && b=='c')
		{ 
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		{
			cout<<"Invalid";
			exit(0); 
		}
	}
	if(b=='a')
		cout<<"String is accepted"<<endl;
	else
		cout<<"String is rejected"<<endl;
	cout<<endl<<"Press enter to continue..."<<endl;
	getch();
}
void decimal()
{
	char arr[20],b='a'; //b is the state variable
	cout<<"Enter the decimal string"<<endl;
	fflush(stdin);
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9') && b=='a')
		{
		 	cout<<b<<"--"<<arr[i]<<"-->";
			cout<<b<<endl;
		}
		else
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9') && b=='b')
		{
			 cout<<b<<"--"<<arr[i]<<"-->";
			 cout<<b<<endl;
		}
		else
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9') && b=='c')
		{ 
			cout<<b<<"--"<<arr[i]<<"-->";
			cout<<b<<endl;
		}
		else
		if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8') && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='c';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='b')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='c';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8') && b=='b')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='a';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='c')
		{
			 cout<<b<<"--"<<arr[i]<<"-->";
		   	 b='a';
			 cout<<b<<endl;
		}
		else
		if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8') && b=='c')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		{
			cout<<"Invalid";
			exit(0);
		 }
	}
	if(b=='a')
		cout<<"String is accepted"<<endl;
	else
		cout<<"String is rejected"<<endl;
	cout<<endl<<"Press enter to continue..."<<endl;
	getch();
}
void octal()
{
	char arr[20],b='a'; //b is the state variable
	cout<<"Enter the octal string"<<endl;
	fflush(stdin);
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6') && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			cout<<b<<endl;
		}
		else if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6') && b=='b')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='c';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6') && b=='c')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='2'||arr[i]=='5') && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='c';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='b')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='a';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='2'||arr[i]=='5') && b=='b')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='c')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='c';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='2'||arr[i]=='5') && b=='c')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='a';
			cout<<b<<endl;
		}

		else
		{
			cout<<"Invalid";
			exit(0); 
		}
	}
	if(b=='a')
		cout<<"String is accepted"<<endl;
	else
		cout<<"String is rejected"<<endl;
	cout<<endl<<"Press enter to continue..."<<endl;
	getch();
}
void hexa()
{
	char arr[20],b='a'; //b is the state variable
	cout<<"Enter the hexadecimal string"<<endl;
	fflush(stdin);
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9'||arr[i]=='C'||arr[i]=='F') && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			cout<<b<<endl;
		}
		else
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9'||arr[i]=='C'||arr[i]=='F') && b=='b')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			cout<<b<<endl;
		}
		else
		if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9'||arr[i]=='C'||arr[i]=='F') && b=='c')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			cout<<b<<endl;
		}
		else
		if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7'||arr[i]=='A'||arr[i]=='D') && b=='a')
		{
			cout<<b<<"--"<<arr[i]<<"-->";
			b='b';
			cout<<b<<endl;
		}
		else
		if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8'||arr[i]=='B'||arr[i]=='E') && b=='a')
	{
		cout<<b<<"--"<<arr[i]<<"-->";
		b='c';
		cout<<b<<endl;
	}
	else
	if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7'||arr[i]=='A'||arr[i]=='D') && b=='b')
	{
		cout<<b<<"--"<<arr[i]<<"-->";
		b='c';
		cout<<b<<endl;
	}
	else
	if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8'||arr[i]=='B'||arr[i]=='E') && b=='b')
	{
		cout<<b<<"--"<<arr[i]<<"-->";
		b='a';
		cout<<b<<endl;
	}
	else
	if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7'||arr[i]=='A'||arr[i]=='D') && b=='c')
	{
		cout<<b<<"--"<<arr[i]<<"-->";
		b='a';
		cout<<b<<endl;
	}
	else
	if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8'||arr[i]=='B'||arr[i]=='E') && b=='c')
	{
		cout<<b<<"--"<<arr[i]<<"-->";
		b='b';
		cout<<b<<endl;
	}

	else
	{
		cout<<"Invalid";
		exit(0); 
	}
	}
	if(b=='a')
		cout<<"String is accepted"<<endl;
	else
		cout<<"String is rejected"<<endl;
	cout<<endl<<"Press enter to continue..."<<endl;
	getch();
}
int  main()
{
	char choice;
	while(1)
	{
		cout<<"Choose the operation you want to perform:-"<<endl<<"1. Binary"<<endl<<"2. Decimal"<<endl<<"3. Octal"<<endl<<"4. Hexadecimal"<<endl<<"5. Exit"<<endl;
		fflush(stdin);
		cin>>choice;
		switch(choice)
		{
			case '1':	binary();
						break;
			case '2':	decimal();
						break;
			case '3':	octal();
						break;
			case '4':	hexa();
						break;
			case '5':	exit(1);
						break;
		}
	}
	getch();
}
