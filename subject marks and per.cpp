#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int S1,S2,S3,S4,S5,per;
	cin >> S1 >> S2 >> S3 >> S4 >> S5;
	per = (S1 +  S2 + S3 + S4 + S5)/5;
	if (per >= 90)
	{
	    cout <<"A+";
	}
	else if (per >= 75 && per < 90)
	{
	    cout <<"A";
	}
	else if (per >= 60 && per < 75)
	{
	    cout <<"B";
	}
	else if (per < 60)
	{
	    cout << "C";
	}
	return 0;
}
