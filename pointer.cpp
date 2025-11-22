#include<iostream>
using namespace std;
int main(){
//   int a=10;
//   int* ptr=&a;
//   cout<<ptr<<endl;
//   cout<<*(&a);
int a=5;

int *p=&a;
int **q=&p;
cout<<*p<<endl;
cout<<**q<<endl;
cout<<p<<endl;
cout<<*q<<endl;
}
