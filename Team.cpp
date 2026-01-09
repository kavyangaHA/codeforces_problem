#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //cout<<"I got the initial input"<<n<<endl;
    int f_1;
    int f_2;
    int f_3;
    int can_solve;
    int total_problems_solved=0;

    for(int i=0;i<n;i++){
        cin>>f_1>>f_2>>f_3;
        //cout<<"I got the three inputs"<<f_1<<f_2<<f_3<<endl;
        can_solve=0;
        if(f_1==1){
            can_solve++;
        }
        if(f_2==1){
            can_solve++;
        }
        if(f_3==1){
            can_solve++;

        }
        if (can_solve>=2){
            total_problems_solved++;

        } 

    }
    //cout<<"I finished getting all the inputs"<<endl;
    cout<<total_problems_solved;
    return 0;

}