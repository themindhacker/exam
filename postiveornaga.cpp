#include  <iostream>
using   namespace std;
int main()
{
int N;
cout<<"Enter the number";
cin>>N;
if  (N>0)
	cout<<"\n The given number is positive";
else if(N<0)
	cout<<"\n The given number is negative";
else
	cout<<"\n The given number is zero";
return 0;
}