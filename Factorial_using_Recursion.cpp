#include  <bits/stdc++.h>
using namespace std;
int arr[100005];
int factorial(int n){
    if(n == 0){
        return 1;
    }
    if(arr[n]!= -1){
        return arr[n];
    }
      return arr[n] = (factorial(n-1)*n);
}
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        arr[i] = -1;
    }
    cout<<factorial(n)<<endl;
    return 0;
}