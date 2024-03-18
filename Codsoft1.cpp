#include<iostream>
using namespace std;


int main()
{
	int num;
	int number;
	num = 41;
	do
	{
	cout<<"Enter your guess:"<<"\n";
	cin>>number;
	
	if(number < num)
	{
		cout<<"Guess a bit higher!"<<"\n";
	}
	
	else if(number > num)
	{
		cout<<"Guess a bit lower!"<<"\n";
	}
	else
	{
		cout<<"You have won!"<<"\n";
	}
	}while(num != number);
return 0;
}
			
		
	

	
