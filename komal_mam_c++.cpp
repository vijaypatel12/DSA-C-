// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={40,60,65,70,80};
//     int n=5,avg=0, sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//        } avg=sum/n;
//        int max=arr[0];
       
//     cout<<sum<<endl;
//     cout<<"Average is:"<<avg;
    
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {50,55,60,65,70};
//     int n = 5;
//     int sum = 0, avg = 0;

//     // sum
//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//     }
//     avg = sum / n;

//     // highest
//     int max = arr[0];
//     for(int i = 1; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }

//     // passed students (>=60)
//     int passed = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] >= 60){
//             passed++;
//         }
//     }

//     // Output
//     cout << "Sum is: " << sum << endl;
//     cout << "Average is: " << avg << endl;
//     cout << "Highest Grade: " << max << endl;
//     cout << "Passed Students: " << passed << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={50,55,60,65,70};
//     int n=5;
//     int sum=0,avg=0;

//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     avg=sum/n;

//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     int pass=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>=60){
//             pass++;
//         }

//     }
//     cout<<sum<<endl;
//     cout<<avg<<endl;
//     cout<<max<<endl;
//     cout<<pass;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a size array element"<<endl;
//     cin>>n;
//      int arr[100];

//      cout<<"Enter"<<n<<"elements"<<endl;
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//      }

//      cout<<"Even no"<<endl;
//      for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<" ";
//         }
//      }
//      cout<<"\nodd number";
//      for(int i=0;i<n;i++){
//         if(arr[i]%2!=0){
//             cout<<arr[i]<<" ";
//         }
//      }
// return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int arr[10], even[10], odd[10];
    int n, e = 0, o = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Separate even and odd
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    // Print all even then odd
    cout << "\nArray after separating even and odd:\n";
    for(int i = 0; i < e; i++)
        cout << even[i] << " ";

    for(int i = 0; i < o; i++)
        cout << odd[i] << " ";

    return 0;
}