#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	string name;
	string address;
	string phone;
	int rollno;
	public:
void setData(string n,string adr,string ph,int rn)
   {
	    name=n;
		address=adr;
		phone=ph;
		rollno=rn;
    }
void getData()
   {
	   cout<<"name:"<<name<<endl;
	   cout<<"address:"<<address<<endl;
	   cout<<"phone:"<<phone<<endl;
	   cout<<"rollno:"<<rollno<<endl;
	}
void setData()		
	{
		cout<<"Enter a name:";
		cin>>name;
		cout<<"Enter a address:";
		cin>>address;
		cout<<"Enter a phone:";
		cin>>phone;
		cout<<"Enter a rollno:";
		cin>>rollno;
	}
	
};
int main()
	{
		student s1,s2;
		s1.setData("ali","skp","0302",344);
		s1.getData();
		s2.setData();
		s2.getData();
    }
 