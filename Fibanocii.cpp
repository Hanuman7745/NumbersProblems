#include <bits/stdc++.h>
using namespace std;
//iterative case:
/* int main(){
         int n;
         cin>>n;
         int a = 0;
         int b = 1;
         int sum = 0;
         //cout<<a<<" "<<b<<" ";
         //if(isFibanoci(0,1,n)){
          for(int i = 1; i <= n; i++){
              cout<<a<<" ";
              sum = a+b;
              a = b;
              b = sum;
          }
          return 0;
    }
*/ 
//  Recursive case:

    void isFibnacci(int a,int b,int n,int i){
        int sum = 0;
        if(i > n){
            return ;
        }
        else {
            cout<<a<<" ";
            sum = a+b;
            a = b;
            b = sum;
        }
        isFibnacci(a,b,n,i+1);
    }
    int main(){
        int n;
        cin>>n;
        int a = 0,b = 1;
        int i = 1;
         isFibnacci(a,b,n,i);
         return 0;
    }