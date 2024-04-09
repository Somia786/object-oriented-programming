#include<iostream>
#include<conio.h>
using namespace std;
class student{
	string name,cnic,adr,phone;
	int rollno;
	
	public:
		student(){
			cout<<"Default Contructor Call Started\n";
			name="";
			cnic="000";
			adr="SKP";
			phone="000";
			rollno=0;
			cout<<"Default Contructor Call Ended\n";
		}
		void setData(string n,string cn,string ad,string ph,int rn){
			cout<<"Set Data Parameterized  Call Started\n";
			name=n;
			cnic=cn;
			adr=ad;
			phone=ph;
			rollno=rn;
			cout<<"Set Data Parameterized  Call Ended\n";
		}
		
		void setData(){
			
			cout<<"Set Data Parameterless  Call Started\n";
			
			cout<<"enter name:";
			cin>>name;
			cout<<"enter CNIC:";
			cin>>cnic;
			cout<<"enter address:";
			cin>>adr;
			cout<<"enter phone:";
			cin>>rollno;
			
				cout<<"Set Data Parameterless  Call Ended\n";
				
			}
			
			void getData(){
				cout<<"\nGet Data call started\n";
				
				cout<<"name:"<<name;
				cout<<"cnic:"<<cnic;
				cout<<"address:"<<adr;
				cout<<"phone:"<<phone;
				cout<<"rollno:"<<rollno;
			}
		};
		main(){
			cout<<"welcome to main function...!\n\n";
			
			
			student s1;
			s1.getData();
			
			
			s1.setData();
			s1.getData();
			
			s1.setData("Ali","35404","SKP","0302",1547);
			
			s1.getData();
			
			cout<<"\n\nThanks....good day\n";
			
	};

