// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(vector<int> arr,int tar){
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(tar>arr[mid]){
//             st=mid+1;
//         }else if(tar<arr[mid]){
//             end=mid-1;
//         }else{
//             return mid;
//         }
//     }return -1;

// }
// int main(){
//     vector<int> arr1={-0,2,5,6,9,7,12};
//     int tar1=12;
//     cout<<binarySearch(arr1,tar1)<<endl;

// };


#include<iostream>
#include<vector>
using namespace std;
 int RecBinarySearch(arr,tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){
            return RecBinarySearch(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){
            return RecBinarySearch(arr,tar,st,mid-1);

        }else{
            return mid;
        }
    }
    return -1;
 }
int main(){
    vector<int> arr1={-0,2,5,6,9,7,12};
    int tar1=12;
    cout<<RecBinarySearch(arr1,tar1)<<endl;

};
