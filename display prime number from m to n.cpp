#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int m,n,x,y;
cin>>m>>n;
for (x=m;x<=n;x++)
{
    for (y=2;y<=x/2;y++)
    {
        if (x%y==0)
        break;
    }
    if (y>x/2)
    cout<<x<<",";
}
}
