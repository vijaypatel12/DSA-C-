// #include <iostream>
// using namespace std;

// int main(){
//    int n=10;
//    int a[10];
//    int low=0;
//    int high =9;
//    int mid = 0;
//    int m;

//    cout<<"Enter the Array"<<endl;
//    for(int i=1;i<=10;i++){
//     cin>>a[i];

//    }
//    cout<<"Your array is :";
//    cin>>a[n];
//    cout<<"Enter u want to find";
//    cin>>m;

//    mid= (low+high)/2;
//    if (mid==m){
//     cout<<"YOU got"<<endl;
//    }
  
//    else if(mid == m){
//     cout<<"Done";
//    }
//    else{
//     cout<<"done"
//    }
// }

#include<iostream>
using namespace std;


int main(){
   int n,m;
   cout<<"Enter a size of array:"<<endl;
   cin>>n;

   int arr[n];
   cout<<"Enter the element sorted:";
   for (int i=0;i<n;i++){

      cin>>arr[i];
   }

   cout<<"Enter element: ";
   cin>>m;
   int low=0,high=n-1;
   int mid=(low+high)/2;

   if(arr[mid] == m){
      cout<<"Enter found index:"<<mid<<endl;

   }
   else if(arr[mid] < m){
      low=mid+1;
      mid=(low+high)/2;

   }
   if (arr[mid] == m){
      cout<<"Element found index:"<<mid<<endl;

   }
 

   else {
      high=mid-1;
      mid=(low+high)/2;
   }

      if(arr[mid] == m){
         cout<<"Element found index: "<<mid<<endl;

      }
      else {
         cout<<"Element not found<<endl";
      }
}
   