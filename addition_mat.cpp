#include<iostream>
using namespace std;
int main(){
    int arr[3][3] ={1,2,3,4,5,6,7,8,9};
    int sum[3][3]={9,8,7,6,5,4,3,2,1};
    cout<<"First array "<<endl;

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"  ";

        }
        cout<<endl; 
    }

    cout<<"Second array "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<"  ";

        }
        cout<<endl; 
    }
    cout<<"Addition is "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]+sum[i][j]<<"  ";

        }
        cout<<endl;
    }


}