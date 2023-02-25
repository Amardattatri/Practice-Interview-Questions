#include<iostream>

using namespace std;
//iterative method..
void fact(int n){
    if(n==1){
        cout<<"1";
    }
    int n1=1,n2=1;
    int x;
    while(n>0){
        cout<<n1<<" ";
        x=n1;
        n1=n2;
        n2=x+n2;
        n--;
    }
}
//recursive
int fiboo(int n){
    if(n<=1) return n;
    return fiboo(n-2)+fiboo(n-1);
}
int main(){
    fact(8);
    cout<<endl;
    for(int i=0;i<8;i++){
        cout<<fiboo(i)<<" ";
    }
}