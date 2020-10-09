#include<iostream>
using namespace std;

class Bank 
{
	public:
		char ch[100],address[100];
		int cnumber,adhar,balance,Amount;
	void CreateAccount();
	void DepositeMoney();
	void BalnceInfo();
	void WithDrawMoney();	
	void DisplayAccount();	
};


void Bank ::CreateAccount(){
	cout<<"Enter Your Name              :"<<endl;
	cin>>ch;
	cout<<"Enter Your Address           :"<<endl;
	cin>>address;
	cout<<"Enter Your Contact Number    :"<<endl;
	cin>>cnumber;
	cout<<"Enter Your Adhar Card Number :"<<endl;
	cin>>adhar;	
}


void Bank :: DepositeMoney()
{
	cout<<"Enter Your Amount"<<endl;
	cin>>Amount;
	balance=balance+Amount;
}


void Bank :: BalnceInfo(){
	cout<<"Your Total Amount :"<<balance<<endl;		
}


void Bank ::WithDrawMoney(){
	
	cout<<"Withdraw Amount"<<endl;
	cin>>Amount;
	balance=balance-Amount;
}

void Bank :: DisplayAccount(){
	cout<<" Your Name                   :"<<ch<<endl;
	cout<<" Your Address                :"<<address<<endl;
	cout<<" Your Contact Number    :"<<cnumber<<endl;
	cout<<" Your Adhar Card Number :"<<adhar<<endl;

}



int main()
{
	int choose;
	Bank b;
	while(1){
	
	cout<<"1. Create Your Account "<<endl;
	cout<<"2. Balance Info "<<endl;
	cout<<"3. WithDraw Money "<<endl;
	cout<<"4. Deposite Money "<<endl;
	cout<<"5. Display Account "<<endl;
	cout<<"6. Exit"<<endl;
	cin>>choose;
	
	
		
		switch(choose){
			
			case 1: {
				b.CreateAccount();
				break;
			}
			case 2:{
				b.BalnceInfo();
				break;
			}
			case 3: {
				b.WithDrawMoney();
				break;
			}
			case 4 :{
				b.DepositeMoney();
				
				break;
			}
			case 5:{
				b.DisplayAccount();
				break;
			}
			case 6:{
				exit(1);
			}		
			default:{
				cout<<"Enter Your choice"<<endl;
				break;
			}
		}
	}
	
	
	
	return 0;
}
