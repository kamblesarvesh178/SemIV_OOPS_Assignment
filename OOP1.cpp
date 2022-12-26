#include<iostream>
using namespace std;

class Complex
{
	public:
		float real,img;
		complex()
		{
			real=0;
			img=0;
		}
		Complex operator+(Complex);
		Complex operator*(Complex);
		
		friend istream &operator >>(istream &input,Complex &ref)
		{
			cout<<"Enter real part of the number: ";
			input>>ref.real;
			cout<<"Enter imaginary part of the number: ";
			input>>ref.img;
			
		}
		friend ostream &operator <<(ostream &output,Complex &ref)
		{
			output<<ref.real<<"+"<<ref.img<<"i";
			
		}
};
Complex Complex :: operator + (Complex obj)
{
	Complex temp;
	temp.real=real+obj.real;
	temp.img=img+obj.img;
	return temp;
}
Complex Complex :: operator * (Complex obj)
{
	Complex temp;
	temp.real=(real*obj.real)+(img*obj.real);
	temp.img=(img*obj.real)+(real*obj.img);
	return temp;
}
int main()
{
	int choice;
	Complex in1,in2,sum,mul;
	cout<<"ENTER FIRST NUMBER: "<<endl;
	cin>>in1;
	cout<<"ENTER SECOND NUMBER: "<<endl;
	cin>>in2;
	cout<<"------------------------"<<endl;
	cout<<"Addtion: "<<endl;
	cout<<"Multiplication"<<endl;
	sum=in1+in2;
	mul=in1*in2;
	cout<<"Enter choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"SUM IS: "<<endl;
		cout<<sum<<endl;
		break;
		case 2:
		cout<<"PROUUCT IS: "<<endl;
		break;
		default:
		cout<<"QUIT";
	}
}
