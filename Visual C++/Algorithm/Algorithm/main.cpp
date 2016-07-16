#include <iostream>
using namespace std;
const int MINNUMBER =-32767;
int func(int x);
int find_sec_max( int data[] , int count);
union{
	int i;
	char x[2];
}a;
int main(void)
{
	int input,count,Array[10]={1,25,4,0,23,51,12,87,10,32},Sec_max;
	cout << "Please input a new number for X:";
	cin >> input;
	count = func(input);
	cout << "The Number 'one' of the input number is find for " << count << " times" << endl;
	a.x[0] = 10;
	a.x[1] = 1;
	cout << a.i << endl;
	Sec_max=find_sec_max(Array,10);
	cout << "The second max number of Array is :" << Sec_max << endl;
	return 0;
}
int func(int x) 
{ 
    int countx =0; 
    while(x) 
    { 
          countx ++; 
          x = x&(x-1); 
     } 
    return countx; 
}
int find_sec_max( int data[] , int count)
{
	int maxnumber = data[0] ;
	int sec_max = MINNUMBER ;
	for ( int i =1 ; i < count ; i++)
	{
		if ( data[i] > maxnumber )
		{
			sec_max = maxnumber ;
			maxnumber = data[i] ;
		}
		else
		{
			if ( data[i] > sec_max )
			sec_max = data[i] ;
		}
	}
	return sec_max ;
}