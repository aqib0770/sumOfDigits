#include<iostream>
using namespace std;

int sum(int n){
    // base case
    if(n>=0 and n<=9)return n;
    //self work
    return sum(n/10)+(n%10);
}
int main(){
    int result=sum(12345);
    cout<<result;
}
