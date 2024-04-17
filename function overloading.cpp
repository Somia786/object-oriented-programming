#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int rollno;
	string name;
	public:
		
	student()
	{
		rollno=0;
		name="unkhown";
	}
	student(int rn,string n)
	{
		rollno=rn;
		name=n;
	}
	void show()
	{
		cout<<" The rollno is:"<<rollno<<endl;
		cout<<" The name is:"<<name<<endl;
		
	}
};
main()
{
	student s1;
	student s2(52,"ali");
	s1.show();
	s2.show();
}