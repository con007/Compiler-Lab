#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void decimal();
void binary();
void octal();
void hexadecimal();
int main()
{
	char ch;
	
	while(1)
	{
		printf("\n Enter Ur Choice given below :\n1. Binary \n 2.Decimal \n 3. Octal \n 4. Hexadecimal \nPress Any key to exit.....\n");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case '1' :   binary();
						break;
			case '2' :   decimal() ;
						break;
			case '3' :   octal();
						break;
			case '4' :   hexadecimal();
						break;	
						
			case '5' : 
							break;	
		}	
	}
	return 0;
}
void binary()
{
	char arr[20],b='a';
	int i;
	printf("Enter the binary string");
	fflush(stdin);
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='0' && b=='a')
		{
			printf("%c-->%c-->%c\n",b,arr[i],b);
		}
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
	{
		cout<<"String is accepted"<<endl;
	}
	else
	{
		cout<<"String is rejected"<<endl;
	}
	cout<<endl<<"Press enter to continue..."<<endl;
	getch();
}
