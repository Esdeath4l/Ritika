#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
	srand(time(0));
	int n=rand()%100+1;
	int g;
	int a=0;
	std::cout<<"_______________________GUESSING GAME_______________________"<<std::endl;
	std::cout<<"Iam guessing the number:)"<<std::endl;
	while(true)
	{
		std::cout<<"enter your guess:";
		std::cin>>g;
		a++;
		if(g<n)
		{
			std::cout<<"Ouch! you guessed too low, Try Again"<<std::endl;
		}
		else if (g>n)
		{
			std::cout<<"Ouch! you guessed too high,Try Again"<<std::endl;
		}
		else
		{
			std::cout<<"CONGRATS, you guessed it right "<<a<<" attempts."<<std::endl;
			break;	
		}
		
	}
	return 0;
}

