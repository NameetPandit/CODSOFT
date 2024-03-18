#include<iostream>
#include<cmath>
using namespace std;

void add(float num1 , float num2)
{
	float sum;
	sum = num1 + num2;
	cout<<"The sum is"<<" "<<sum<<"\n";
	
}

void subtract(float num1 , float num2)
{
	float difference;
	difference = num1 - num2;
	cout<<"The difference is"<<" "<<difference<<"\n";
}

void multiply(float num1 , float num2)
{
	float product;
	product = num1 * num2;
	cout<<"The product is"<<" "<<product<<"\n";
}

void divide(float num1 , float num2)
{
	float quotient;
	quotient = num1 / num2;
	cout<<"The quotient is"<<" "<<quotient<<"\n";
}	
		

int main()
{
	float num1;
	float num2;
	int choice;
	
	cout<<"Enter the first number:"<<"\n";
	cin>>num1;
	cout<<"Enter the second number:"<<"\n";
	cin>>num2;
	
	cout<<"1. ADD"<<"\n";
	cout<<"2. SUBTRACT"<<"\n";
	cout<<"3. MULTIPLY"<<"\n";
	cout<<"4. DIVIDE"<<"\n";
	cout<<"5. EXIT"<<"\n";
	
	do
	{
		cout<<"Enter your choice:"<<"\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				add(num1 , num2);
				break;
			}
			case 2:
			{
				subtract(num1 , num2);
				break;
			}
			case 3:
			{
				multiply(num1 , num2);
				break;
			}
			case 4:
			{
				divide(num1 , num2);
				break;
			}
			case 5:
			{
				cout<<"Thanks for using the calculator app!"<<"\n";
				break;
			}
		}
	}while(choice != 5);
return 0;
}
						
					
		
	
	
	
	
	
	
	
	
	
	
	
