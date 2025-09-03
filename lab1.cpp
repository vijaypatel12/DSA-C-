// DSA START COLLEGE UMESH SIR 
#include<iostream>
using namespace std;
int main(){
    int arr[4],index,j;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number of the students";
    for(int i=0;i<=4;i++){
        cin>>arr[i];

    }
    cout<<"Enter the search of  the students";
    cin>>index;
    if(arr[4]=index){
        cout<<"yes The roll no. is found "<<size;

    }
    else{
        cout<<"no found student roll no";
    }
    return 0;
}
