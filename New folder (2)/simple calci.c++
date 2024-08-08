#include <iostream>
int main()
{
	double num1, num2;
	char op;
	
	std::cout<<"SIMPLE CALCULATOR"<<std::endl;
	std::cout<<"_________________"<<std::endl;
	
	std::cout<<"Enter the first number:"<<std::endl;
	std::cin>>num1;
	
	std::cout<<"Enter the second number:"<<std::endl;
	std::cin>>num2;
	
	std::cout<<"Enter the operation(+, -, *, /)"<<std::endl;
	std::cin>>op;
	
	switch(op)
	{
		case'+':
			std::cout<<"ADDITION OF TWO NUMBERS:"<<num1+num2<<std::endl;
			break;
		case '-':
			std::cout<<"SUBRACTION OF TWO NUMBERS:"<<num1-num2<<std::endl;
			break;
		case '*':
			std::cout<<"MULTIPLICATION OF TWO NUMBERS:"<<num1*num2<<std::endl;
			break;
		case '/':
			if (num2!=0)
			{
				std::cout<<"DIVISION OF TWO NUMBERS:"<<num1/num2<<std::endl;
			}
			else
			{
				std::cout<<"ERROR<division by zero>"<<std::endl;
			}
		default:
			std::cout<<"INVALID OPERATION!!!"<<std::endl;
	}
	return 0;
}
