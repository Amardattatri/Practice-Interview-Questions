#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int curSum=0;
    int maxS=INT8_MIN;
    for(int i=0;i<n;i++){
        curSum+=a[i];
        if(curSum<0){
            curSum=0;
        }
        maxS=max(curSum,maxS);
 
   }
   cout<<maxS;
return 0;
}