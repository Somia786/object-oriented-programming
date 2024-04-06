#include<iostream>
#include<conio.h>
using namespace std;
class student 
{
	public:
	string name,address,phone,CNIC;
	int rollno;
};
int main()
{
	student s1,s2;
	s1.name="ali";
	s1.address="skp";
	s1.phone="0300";
	s1.CNIC="35404";
	s1.rollno=15;
	cout<<"Enter a name of s2:";
	cin>>s2.name;
	cout<<"Enter a address of s2:";
	cin>>s2.address;
	cout<<"Enter a phone of s2:";
	cin>>s2.phone;
    cout<<"Enter a CNIC of s2:";
	cin>>s2.CNIC;
	cout<<"Enter a rollno of s2:";
	cin>>s2.rollno;
	cout<<"name,address,phone,CNIC,rollno for student 1:"<<endl;
	cout<<"name:"<<s1.name<<endl;
	cout<<"address:"<<s1.address<<endl;
	cout<<"phone:"<<s1.phone<<endl;
	cout<<"CNIC:"<<s1.CNIC<<endl;
	cout<<"rollno:"<<s1.rollno<<endl;
	cout<<"name,address,phone,CNIC,rollno for student 2:"<<endl;
	cout<<"name:"<<s2.name<<endl;
	cout<<"address:"<<s2.address<<endl;
	cout<<"phone:"<<s2.phone<<endl;
	cout<<"CNIC:"<<s2.CNIC<<endl;
	cout<<"rollno:"<<s2.rollno<<endl;
	return 0;
}