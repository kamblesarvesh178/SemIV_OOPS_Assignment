#include<iostream>
#include<string>
using namespace std;

class publication
{
	protected:
		string title;
		float price;
	public:
		publication()   //DEFAULT CONSTRUCTOR
		{
			title="";
			price=0.0;
		}
		publication(string t,float p)   //PARAMETERS PASSED
		{
			title=t;
			price=p;
		}
		
};

class book : public publication
{	
	int pagecount;
	public:
		book()
		{
			pagecount=0;
		}
		book(string t,float p,int page):publication(t,p)
		{
			pagecount=page;
		}
		void print()
		{
			try{
			if(pagecount>10){
			cout<<"BOOK NAME IS: "<<title<<endl;;
			cout<<"PRICE: "<<price<<" Rs"<<endl;
			cout<<"PAGECOUNT: "<<pagecount<<endl;
			}
			else{
				throw(pagecount);
			}
		}
			catch(int pagecount)
			{
				cout<<"BOOK NAME IS: "<<title<<endl;;
				cout<<"PRICE: "<<price<<" Rs"<<endl;
				cout<<"PAGECOUNT IS: "<<"N/A"<<endl;	
			}
		}
};

class tape:public publication
{
	float playtime;
	public:
		tape()
		{
			playtime=0.0;
		}
		tape(string t,float p,int time):publication(t,p)
		{
			playtime=time;
		}
		void display()
		{
			cout<<"BOOK NAME IS: "<<title<<endl;
			cout<<"PRICE: "<<price<<" Rs"<<endl;
			cout<<"PLAYTIME: "<<playtime<<" min";
		}
};

int main()
{
	cout<<"**BOOK DATA**"<<endl;
	book b("C++",550,5);
	b.print();
	cout<<endl<<"**AUDIO BOOK DATA**"<<endl;
	tape t("Data Analysis",220,120);
	t.display();
	return 0;
}
