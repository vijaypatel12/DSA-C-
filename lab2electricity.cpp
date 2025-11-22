#include <iostream>
using namespace std;
class electricity{
    public:
    int n, even=0,odd=0;
    void input(){
        cout<<"Enter consumption entries ";
        cin>>n;

        cout<<"Enter consumption value ";
        for( int i=0;i<n;i++){
            int unit;
            cin>>unit;
            if(unit%2==0)
            even++;
            else
            odd++;

        }

    }
    void output(){
        cout<<"Total even consumption "<<even<<endl;
        cout<<"Total  odd consumption "<<odd<<endl;

        
    }

};
int main(){
    electricity e;
    e.input();
    e.output();
    return 0;
}

 