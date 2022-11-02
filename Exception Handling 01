#include<iostream>
using namespace std;
int main(){
	int age;
	string str;
	
	try{
		cout<<"Enter the age  : ";
		cin>>age;
		if(age>=18 && age<=55){
			cout<<"Access Approved !!!"<<endl;
		}
		else if(age>55 && age<=120) throw('a');
		else if(age>120) throw(12.3);
		else throw(age);
		
		
	}
	
	catch(int i){
		cout<<"Access Denied !!!"<<endl;
		cout<<"Age is "<<i<<endl;
		cout<<"Less than 18"<<endl;
	}
	
	catch(char j){
		cout<<"Access not Approved !!!"<<endl;
		cout<<"Age is "<<age<<endl;
		cout<<"More than 55"<<endl;
	}
	catch(double k){
		cout<<"Person may be dead"<<endl;
		
	}
	

	
	return 0;
}
