#include <iostream>
using namespace std;
int func(int x);
int main(void)
{
	int input,count;
	cout << "Please input a new number for X:";
	cin >> input;
	count = func(input);
	cout << "The Number 'one' of the input number is find for " << count << " times" << endl;
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