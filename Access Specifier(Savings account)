#include<iostream>
using namespace std;
class saving_acc{
	string name;
	string id;
	double balance;
	public:
		void debit(){
			double withdraw;
			cout<<"\n Enter debit amount : ";
			cin>>withdraw;
			balance=balance-withdraw;
		}
		void credit(){
			double credit;
			cout<<"\n Enter credit amount : ";
			cin>>credit;
			balance=balance+credit;	
		}
		void set_data(){
			cout<<" Enter Savings account details - "<<endl;
			cout<<" Enter Name : ";
			getline(cin,name);
			cout<<" Enter ID : ";
			cin>>id;
			cout<<" Enter Balance : ";
			cin>>balance;
		}
		void get_data(){
			cout<<"\n Your Savings account details -"<<endl;
			cout<<" Name : "<<name<<endl;
			cout<<" ID : "<<id<<endl;
			cout<<" Balance : "<<balance<<endl;
		}
};
int main(){
	char a;
	int option;
	saving_acc harry;
	harry.set_data();
	cout<<"\n Do you want to credit or debit from your account(y or n) : ";
	cin>>a;
	if(a=='y'){
		cout<<"    1.Credit     2.Debit"<<endl;
		cout<<" Choose an option from above : ";
		cin>>option;
		if(option==1){
			harry.credit();
		}
		else if(option==2){
			harry.debit();
		}
	}
	
	
	harry.get_data();
	return 0;
}
