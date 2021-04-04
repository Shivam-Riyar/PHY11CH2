#include<iostream>
#include<conio.h>

using namespace std;

void radtodeg()
{	
	double rad,deg;
	cout<<"\n ENTER ANGLE MEASUREMENTS IN RADIANS : ";
	cin>>rad;
	deg = (rad*(57.2958));
	cout<<"\n ANGLE MEASUREMENT OF "<<rad<<" radians \n IN DEGREE IS : "<<deg<<" degrees \n";
	getch();
}

void degtorad()
{	
	double deg,rad;
	cout<<"\n ENTER ANGLE MEASUREMENTS IN DEGREES : ";
	cin>>deg;
	rad = (deg/(57.2958));
	cout<<"\n ANGLE MEASUREMENT OF "<<deg<<" degrees \n IN RADIAN IS : "<<rad<<" radians \n";
	getch();
}

int main()
{
	int rad,deg,ctr;
	do{ 
		clrscr();
		cout<<"\n ------CONVERSION MENU------ \n 1. RADIANS TO DEGREE \n 2. DEGREE TO RADIANS \n 3. EXIT ";
		cout<<"\n ENTER YOUR CHOICE : ";
		cin>>ctr;
		switch(ctr)
		{
			case 1 : radtodeg();
					 break;
			case 2 : degtorad();
					 break;
			case 3 : cout<<"\n EXITING THE PROGRAM !!! ";
					 break;
			default : cout<<"\n WRONG CHOICE !!! \n PLEASE SELECT VALID OPTION  ";
			
		}
	}while(ctr!=3);
		
}
