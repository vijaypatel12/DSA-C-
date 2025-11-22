#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap =true;
            }
        }
        if(!isSwap){
            return ;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// void selectionsort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int MinIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[MinIndex]){
//                 MinIndex=j;
//             }dnf
//         }
//         swap(arr[i],arr[MinIndex]);
//     }
// }
int main(){
    int n=10;
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    bubblesort (arr,n);
    printArray(arr,n);
    return 0;
}