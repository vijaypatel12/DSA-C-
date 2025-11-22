#include<iostream>
using namespace std;
 struct structure{
    string name;
    int mobile;
    int age;
    string branch;
    string university;


};
int main(){
    structure obj;
    cout<<"Enter your name"<<endl;
    cin>>obj.name;
    cout<<"Enter you age"<<endl;
    cin>>obj.age;
    cout<<"Mobile no."<<endl;
    cin>>obj.mobile;
    cout<<"branch"<<endl;
    cin>>obj.branch;
    cout<<"university"<<endl;
    cin>>obj.university;

    cout<<"Student detail is "<<endl;
    cout<<"name is "<<obj.name<<endl;
    cout<<"age  is "<<obj.age<<endl;
    cout<<"mobile no. is "<<obj.mobile<<endl;
    cout<<"branch is "<<obj.branch<<endl;
    cout<<"university is "<<obj.university<<endl;

    return 0;
}