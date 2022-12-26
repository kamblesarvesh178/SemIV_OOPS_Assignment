#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
	char Name[10];
	int ID;
	double salary;
	public:
		void accept()
		{
			cout<<"Enter Employee Name: ";
			cin>>Name;
			cout<<"Enter Employee ID: ";
			cin>>ID;
			cout<<"Enter Employee salary: ";
			cin>>salary;
		}
		void display()
		{
			cout<<"\n--------------------------------------------";
			cout<<"\n**DETAILS**";
			cout<<"\nNAME: "<<Name;
			cout<<"\nID: "<<ID;
			cout<<"\nSALARY: "<<salary;
		}
};
int main()
{
	Employee obj[5];
	fstream f;
	int i,n;
	f.open("file1.txt");
	cout<<"\nHow many Employee details do you want to store?: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"\nEnter information of Employee "<<i<<endl;
		obj[i].accept();
		f.write((char*)&obj[i],sizeof obj[i]);
	}
	f.close();
	
	f.open("file1.txt",ios::in);
	cout<<"\n--------------------------------------------";
	cout<<"\n Information of Employees is as follows: ";
	for(i=1;i<=n;i++)
	{
		f.write((char*)&obj[i],sizeof obj[i]);
		obj[i].display();
	}
	f.close();
	return 0;
}
