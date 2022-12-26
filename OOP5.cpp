#include<iostream>
 using namespace std;
 
 template <class T>
 class sort {
 public:
 T n;
 T a[50];
 
 void accept()
 {
 cout << "Enter number of elements :\n";
 cin >> n;
 cout <<"Enter elements of array to sort :";
 for(int i=0; i< n;i++)
 {
 cin >>a[i];
 }
 }
 
 void display()
 {
 cout<<"ARRAY: "<<"[ ";
 for(int i=0;i<n;i++){
 cout <<a[i]<<ends; 
 }
 cout<<"]";
 }
 void swap(T *a ,T *b)
 {
 T temp;
 temp =*a;
 *a = *b;
 *b = temp;
 }
 
 void selection_sort()
 {
 
 for(int i= 0;i<n-1;i++)
 {
 for(int j= i;j <n ;j++)
 { 
 
 if(a[i] > a[j])
 {
 swap(&a[i],&a[j]);
 } 
 
 } 
 }
 }
 
 };
 int main()
 {
 char choice[10];
 cout<<"Enter your datatype(int/float): ";
 cin>>choice;
 if(choice=="f"||"F"||"float"||"FLOAT")
 {
 sort<float> s1;
 s1.accept();
 s1.selection_sort();
 s1.display();
 }
 else if(choice=="i"||"I"||"int"||"INT")
 {
 sort<int> s2;
 s2.accept();
 s2.selection_sort();
 s2.display();
 }
 
 return 0;
 }

