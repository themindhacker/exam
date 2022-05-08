#include <iostream>
using namespace std;
int main()
{
int  N,  i,  sum=0;
cout<<"Enter the limit";
cin>>N;
for (i=1; i<=N; i++)
	sum = sum + i*i;
cout<<"\n Sum of squares of first "<<N<<"natural numbers="<<sum;
return 0;
 }
