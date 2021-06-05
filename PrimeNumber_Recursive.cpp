#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n, int i){
    //int count = 0;
   if(i > sqrt(n)) {
       return true;
   }
   if (n % i == 0){
       return false;
   }
 
    return isPrime(n, i + 1); 
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n,2) && n!= 1 ){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
}