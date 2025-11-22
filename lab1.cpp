// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[4],j,index;
//     int size=sizeof(a)/sizeof(a[0]);
//     cout<<"Enter the number of the students: ";
//     for(int i=0;i<=4;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Enter the number to be searched:";
//     cin>>index;
//     if(a[4]=index)
//     {
//         cout<<"Yes,The roll is found\n"<<size;
//     }
//     else{
//         cout<<"No not found";
//     }
    
    

    
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4],index,j;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Enter the number of the students";
//     for(int i=0;i<=4;i++){
//         cin>>arr[i];

//     }
//     cout<<"Enter the search of  the students";
//     cin>>index;
//     if(arr[4]=index){
//         cout<<"yes The roll no. is found "<<size;

//     }
//     else{
//         cout<<"no found student roll no";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4],index;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Enter the roll no. of student";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the search of student";
//     cin>>index;
//     if(arr[4]==index){
//         cout<<"yes the no. is found "<<size;

//     }
//     else{
//        cout<<"no record found";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

class electricity_consumption {
    public:
    int n, even = 0, odd = 0;

    void input() {
        cout << "Enter number of consumption entries: ";
        cin >> n;

        cout << "Enter consumption values: " << endl;
        for (int i = 0; i < n; i++) {
            int unit;
            cin >> unit;
            if (unit % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    void output() {
        cout << "Total even consumption entries: " << even << endl;
        cout << "Total odd consumption entries: " << odd << endl;
    }
};

int main() {
    electricity_consumption e1;
    e1.input();
    e1.output();
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of students:" << endl;
//     cin >> n;

//     int rollNumbers[n];
//     cout << "Enter roll numbers:" << endl;
//     for(int i = 0; i < n; i++) {
//         cin >> rollNumbers[i];
//     }
//     int searchRoll;
//     cout << "Enter roll number to search:" << endl;
//     cin >> searchRoll;

//     int index = -1;   
//     for(int i = 0; i < n; i++) {
//         if(rollNumbers[i] == searchRoll) {
//             index = i;
//             break;
//         }
//     }
//     if(index != -1) {
//         cout << "Roll number found at index position: " << index << endl;
//     } else {
//         cout << "Roll number not found." << endl;
//     }
//     return 0;
// }

 