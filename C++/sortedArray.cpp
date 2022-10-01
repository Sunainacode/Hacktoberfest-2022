#include<iostream>
using namespace std;

bool sorted(int a[],int n){
    // if(n==2){
    //     if(a[0]<=a[1]){
    //         return true;
    //     }
    //     else return false;
    // }
    // else{
    //     bool x=false;
    //     if(a[n-1]>=a[n-2]){
    //         x=true;
    //     }
    //     return sorted(a,n-1)*x;
    // }
    // return false;
  
//   a better approach
    if(n==0 or n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool smallSort=sorted(a+1,n-1);
    return smallSort;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sorted(a,n);
}