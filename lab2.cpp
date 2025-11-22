#include<iostream>
using namespace std;
int main()
{
    int a[6];
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"Enter the number of the students: ";
    for(int i=0;i<=6;i++)
    {
        cin>>a[i];
    }
    if(a[5]%2==0)
    {
        cout<<"Even "<<size;
    }
    else if(a[5]%2!=0){
        cout<<"odd "<<size;
    }
    
    return 0;
}
