//prime number method 1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 0;
    for(int i = 1; i <= n; i++)  {
        if(n % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        cout<<"Prime Number"<<endl;
    }
    else {
        cout<<"Not a Prime Number";
    }
    return 0;
}

//prime number method 2
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 0;
    for(int i = 2; i <= (n/2); i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if(count == 0 && n != 1) {
        cout<<"Prime Number"<<endl;
    } 
    else { 
        cout<<"Not a prime number";
    }  
    return 0;
}

//prime number method 3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count=+1;
        }
    }
    if(count == 0 && n != 1 ) {
        cout<<"Prime Number"<<endl;
    } 
    else {
        cout<<"Not a prime Number"<<endl;
    }  
    return 0;
}
