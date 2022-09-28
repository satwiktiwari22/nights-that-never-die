#include<iostream>

using namespace std;

class vehicle{
	protected:
	int reg_no;
	string category;
};
class four_wheeler:public vehicle{
	string model_no;
	string color;
	string company_name;
	public:
		void get(){
			cout<<"\nVehicle Details :- "<<endl;
			cout<<"Category : "<<category<<endl;
			cout<<"Reg no. : "<<reg_no<<endl;
			cout<<"Model no. : "<<model_no<<endl;
			cout<<"Color : "<<color<<endl;
			cout<<"Company Name : "<<company_name<<endl;	
		}
		four_wheeler(string cat,int reg,string mod,string col,string com){
			category=cat;
			reg_no=reg;
			model_no=mod;
			color=col;
			company_name=com;
		}
};
class two_wheeler:public vehicle{
	string model_no;
	string color;
	string company_name;
	public:
		void get(){
			cout<<"\nVehicle Details :- "<<endl;
			cout<<"Category : "<<category<<endl;
			cout<<"Reg no. : "<<reg_no<<endl;
			cout<<"Model no. : "<<model_no<<endl;
			cout<<"Color : "<<color<<endl;
			cout<<"Company Name : "<<company_name<<endl;	
		}
		two_wheeler(string cat,int reg,string mod,string col,string com){
			category=cat;
			reg_no=reg;
			model_no=mod;
			color=col;
			company_name=com;
		}
};
int main(){
	four_wheeler abc("Four",8524,"7xt","Black","Volkswagen");
	abc.get();
	two_wheeler def("Two",1145,"2ls","Blue","Honda");
	def.get();
	
	return 0;
}
