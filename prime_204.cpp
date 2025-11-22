#include<iostream>
using namespace std;
string isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "not prime";
        }
    }
    return "prime";
}
void PrintDigits(int n){
    while(n!=0){
        int digit=n%10;    
        cout<<digit<<endl;
        n=n/10;
    }
}

bool armstrong(int n){
    int copyN=n;
    int sumofcubes=0;
    
    while (n!=0)
    {
        int dig=n%10;
        sumofcubes+=(dig*dig*dig); 
        n=n/10;

    }
    return sumofcubes==copyN;
    
} 

int gcd
int main(){
    int n=153;
    if(armstrong(n)){
        cout<<"is an armstrong number\n";
    }else{
        cout<<"not an armstrong number\n";
    }
    // PrintDigits(n);
    // cout<<isPrime(n)<<endl;

}

// class Solution{
//     public:
//     int countPrimes(int n){
//         vector<bool> isPrime(n+1,true);
//         int count=0;

//         for(int i=2;i<n;i++){
//             if(isPrime[i]){
//                 count++;

//                 for(int j=i*2;j<n;j=j+1){
//                     isPrime[j]=false;
//                 }
//             }
//         }
//     }
//     return count;
// }