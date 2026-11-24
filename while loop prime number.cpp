#include <bits/stdc++.h>
using namespace std;

int main() {   
    // your code goes here
int n,x;
cin>>n;
for(x=2;x<=n/2;x++)
{
    if(n%2==0){
    break;
    }
}
if(x>n/2){
cout<<"prime number";
}
else{
cout<<"Not prime number";
}
}
