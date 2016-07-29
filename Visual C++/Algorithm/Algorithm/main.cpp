#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;
const int MINNUMBER =-32767;
int func(int x);
int find_sec_max( int data[] , int count);
union{
	int i;
	char x[2];
}a;
typedef struct {
private:
	string name;
	int age;
	char sex;
	int salary;
public:
	void init_param(void)
	{
		name="mamiao";
		age=22;
		sex='m';
		salary=20000;
	}
	void salary_year(void)
	{
		cout << "The salary for only one month is equal to " << salary << endl;
		cout << "The salary of mamiao for a year is equal to " << 12*salary << endl;
	}
}Employee;
class parent{
public:
	string name;
	int age;
	int parent_fun(void)
	{
		cout << "Hello world!" << endl;
		return 0;
	}
};
class child:public parent{
public:
	string PP;
	int parent_fun(void)
	{
		cout << "This function ahve already been reload by class child!" << endl;
		return 0;
	}
};
int Keyboard_value(void);
int main(void)
{
	int input,count,Array[10]={1,25,4,0,23,51,12,87,10,32},Sec_max;
	Employee Emp;
	parent p;
	child c;
	cout << "Please input a new number for X:";
	cin >> input;
	count = func(input);
	cout << "The Number 'one' of the input number is find for " << count << " times" << endl;
	a.x[0] = 10;
	a.x[1] = 1;
	cout << a.i << endl;
	Sec_max=find_sec_max(Array,10);
	cout << "The second max number of Array is :" << Sec_max << endl;
	Keyboard_value();
	Emp.init_param();
	Emp.salary_year();
	p.parent_fun();
	c.parent_fun();
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
	return sec_max;
}
int Keyboard_value(void)
{
	int values;
	while((values=getch())!=0x1B)/* ESC to quit */
	{
		cout << "The first values is equal to:" << values << endl;
		switch (values)
		{
			case 0xE0:
				switch (values=getch())
				{
					case 72: cout << "UP\n"; break;	
					case 80: cout << "DOWN\n"; break;	
					case 75: cout << "LEFT\n"; break;	
					case 77: cout << "RIGHT\n"; break;	
					cout << "The second values is equal to:" << values << endl;
				}
				break;
			default : break;
		}
		//cout << "The values of key is equal to:" << int(values) << endl; 
	}
	return 0;
}