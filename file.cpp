#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bank
{
	char name[100];
	char add [100],y;
	int balance;
	public :
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();
	};
void bank :: open_account()
{ 
cout<<"enter your full name : ";
cin.ignore();
cin.getline(name,100);
cout<<"Enter your address : ";
cin.ignore();
cin.getline(add,100);
cout<<"What type of account you want to open : "<<endl<<"1) Saving (s)"<<endl<<"2) Current (c)";
cin>>y;
cout<<"Enter amount for deposit : ";
cin>>balance;
cout<< "Your account has been created."<<endl;
	
}
		void bank :: deposit_money(){
			int a;
			cout<<"Enter how much you deposite : ";
			cin>>a;
			balance+=a;
			cout<<"total amount you deposit is : "<<balance;
		}
		
		
		void bank :: withdraw_money(){
		float amount;
		cout<<"Enter how much you withdraw : ";
		cin>>amount;
		balance-=amount ;
		cout<<"total amount left is : "<<balance;
		}
		
		
		void bank :: display_account(){
		cout<<"Your full name : "<<name;
		cout<<"Your address : "<<add;
		cout<<"Type of account that you open : "<<y;
		cout<<"Amount you deposite : "<< balance;	
		}
		
		
int main(){
	int ch,x ;
	bank obj;
	do{
	
	cout<<"1) open account"<<endl;
	cout<<"2) deposite money"<<endl;
	cout<<"3) withdraw money"<<endl;
	cout<<"4) display"<<endl;
	cout<<"5) exit"<<endl;
	cout<< "SELECT THE OPTION FROM ABOVE"<<endl;
	cin>> ch;
		
	switch(ch)
	{
		case 1: 
		cout << "1) open account \n";
		obj.open_account() ;
		break;
		
		case 2: 
		cout<< "2) deposite money \n";
		obj.open_account() ;
		break;
		
		case 3: 
		cout <<"3) withdraw money \n ";
		obj.withdraw_money() ;
		break;
		 
		case 4 : 
		cout <<"4) displaty money \n ";
		obj.display_account();
		break;
		
		case 5:
			if(ch==5)
			exit(1);
			
		default :
		cout<<"PLEASE ENTER THE VALID INPUT"<<endl;
	}
		
		cout<<"if you want to select another option please press : y "<<endl;
		cout<<"if you want to exit press : n "<< endl;
		cin>>x;
		if (x=='n'|| x=='N')
		exit (0);
		
	}while(x=='y' || x=='Y');

	

	return 0;
}
