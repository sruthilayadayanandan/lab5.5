//include library
#include<iostream>
using namespace std;

//using main function
int main (){

//declaring variables
int A,a,b;

//asking user for the input
cout<< " enter the number of series for the pattern; "<<endl;
cin>>A;

//loop for the number of lines
for (a=0;a<A;a++)           

//loop for number of stars in a line
{for (b=0;b<a;b++)

//printing stars
{cout<<"*";
}
cout<<"*";
cout <<endl;
}
}                                 
