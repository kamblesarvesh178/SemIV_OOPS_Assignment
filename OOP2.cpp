#include<iostream>
using namespace std;

class Students
{ 
	friend class friend_Students;
	int roll_no;
	long int phone_no;
	int license_no;
	int prns;
	string blood;
	string dob;
	string name;
	string addrss;
	static string division,clss;
	public:
		Students()     //default constructor
		{
			roll_no= 0;
			phone_no=0;
			license_no=0;
		}
		Students(Students &obj)   //copy constructor
		{
			roll_no=obj.roll_no;
			phone_no=obj.phone_no;
			license_no=obj.license_no;
		}
		
		void idata()
		{
			cout<<"Enter roll number: "<<endl;
			cin>>roll_no;
			cout<<"Phone Number: "<<endl;
			cin>>phone_no;
			cout<<"License Number: "<<endl;
			cin>>license_no;
			cout<<endl;
		}
		void sdata()
		{
			cout<<"Enter name: "<<endl;
			getline(cin,name);
			cout<<"Enter address: "<<endl;
			getline(cin,addrss);
			cout<<"Date of Birth: "<<endl;
			getline(cin,dob);
			cout<<"Blood Group: "<<endl;
			getline(cin,blood);	
		}
		void output()
		{
			//Exception Handling
			try{
				if(phone_no>=1000000000)
					{
						cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
						cout<<"NAME: "<<name<<endl;
						cout<<"ROLL NO: "<<roll_no<<endl;
						cout<<"CLASS: "<<clss<<endl;
						cout<<"DIVISON: "<<division<<endl;
						cout<<"DATE OF BIRTH: "<<dob<<endl;
						cout<<"BLOOD GROUP: "<<blood<<endl;
						cout<<"ADDRESS: "<<addrss<<endl;
						cout<<"PHONE NO: "<<phone_no<<endl;
						cout<<"LICENSE NO: "<<this->license_no<<endl;   //this pointer
						cout<<"PRN: "<<prns<<endl;
					}
				else
				{
					throw(phone_no);
				}
			}
			catch(long int phone_no)
			{
				cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
				cout<<"NAME: "<<name<<endl;
				cout<<"ROLL NO: "<<roll_no<<endl;
				cout<<"CLASS: "<<clss<<endl;
				cout<<"DIVISON: "<<division<<endl;
				cout<<"DATE OF BIRTH: "<<dob<<endl;
				cout<<"BLOOD GROUP: "<<blood<<endl;
				cout<<"ADDRESS: "<<addrss<<endl;
				cout<<"PHONE NO: "<<"Invalid"<<endl;
				cout<<"LICENSE NO: "<<this->license_no<<endl;
				cout<<"PRN: "<<prns<<endl;
			}	
	}	
};
class friend_Students   //friend class
{
	public:
		inline void prns(Students&obj)   //inline function
		{
			int x;
			cout<<"Enter PRN: "<<endl;
			cin>>x;
			obj.prns=x;
		}
};
string Students::division="AI&DS";
string Students::clss="SECOND YEAR";
int main()
{
    Students* stud1[100];
    int n=0;
    stud1[n]=new Students;
    stud1[n]->sdata();
    stud1[n]->idata();
    cout<<"---------------------------------------------------------------"<<endl;
    stud1[n]->output();
    
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<endl<<"---------------------------------------------------------------"<<endl;
    delete stud1[n];
    return 0;
}
