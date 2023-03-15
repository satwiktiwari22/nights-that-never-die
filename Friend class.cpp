#include<iostream>
using namespace std;
class student{
	string name;
	int maths,physics,chemistry;
	public:
		void get_data(){
			cout<<"Enter name : ";
			getline(cin,name);
			cout<<"Enter marks - \n";
			cout<<"Physics : ";
			cin>>physics;
			cout<<"chemistry : ";
			cin>>chemistry;
			cout<<"Maths : ";
			cin>>maths;
		}
		friend class average;
//		void display(){
//			average m;
//			cout<<m.avg();
//		}
			
		
};
class average{
	public:
		float avg(student &t){
			float average=(t.maths+t.physics+t.chemistry)/3;
			return average;			
		}
		
};
int main(){
	student a;
	a.get_data();
	average b;
	cout<<"Average : ";
	cout<<b.avg(a);
	
	return 0;
	
}
