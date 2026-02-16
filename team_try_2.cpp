#include <iostream>
using namespace std;

int main(){
    int n; //number of problems
    cin >>n;
    int f_1;
    int f_2;
    int f_3;
    int can_solve=0;

    for(int i=0;i<n;i++){
        cin>>f_1>>f_2>>f_3;
        if(f_1+f_2+f_3>=2){
            can_solve++;
        }

    }
    cout<<can_solve;
    return 0;
}