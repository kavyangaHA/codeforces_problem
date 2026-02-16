//Imagine you are given $10^5$ numbers. You need to find the smallest absolute difference between any two of them.
//Bad Way ($O(N^2)$): Compare every number with every other number using two for loops. 
//With $10^5$ numbers, that's $10^{10}$ operations. Your program will take 100 seconds
// (the limit is usually 1 second). You will get TLE (Time Limit Exceeded).Powerful Way ($O(N \log N)$): Sort the numbers first. Once sorted, the two closest numbers must be right next to each other.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    sort(numbers.begin(),numbers.end());
    int ans=2e9;//initialize with a large value
    for(int i=0;i<n-1;i++){
        int diff=numbers[i+1]-numbers[i];
        if(diff<ans){
            ans=diff;
        }
    }
    cout<<ans;
    return 0;
}