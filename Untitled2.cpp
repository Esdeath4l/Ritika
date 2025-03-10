#include<iostream>
using namespace std;
char b[3][3]={{'1','2','3'},{'4','5','6'},{'7',' 8','9'}};
void displayb()
{
	cout<<b[0][0]<<"|"<<b[0][1]<<"|"<<b[0][2]<<endl;
	cout<<"__________"<<endl;
	cout<<b[1][0]<<"|"<<b[1][1]<<"|"<<b[1][2]<<endl;
	cout<<"__________"<<endl;
	cout<<b[2][0]<<"|"<<b[2][1]<<"|"<<b[2][2]<<endl;
	cout<<"__________"<<endl;
}
void playerinput(char player)
{
	int m;
	cout<<"Player"<<player<<"enter you move(1-9)";
	cin>>m;
	switch(m)
	{
		case 1:
			b[0][0]=player;
			break;
		case 2:
			b[0][1]=player;
			break;
		case 3:
			b[0][2]=player;
			break;
		case 4:
			b[1][0]=player;
			break;
		case 5:
			b[1][1]=player;
			break;
		case 6:
			b[1][2]=player;
			break;
		case 7:
			b[2][0]=player;
			break;
		case 8:
			b[2][1]=player;
			break;
		case 9:
			b[2][2]=player;
			break;
		default:cout<<"INVALID MOVE"<<endl;playerinput(player);
	}
}
bool checkwin(char player)
{
	for(int i=0;i<3;i++)
	{
		if(b[i][0]==player&&b[i][1]==player&&b[i][2]==player)return true;
	}
	for(int i=0;i<3;i++)
	{
		if(b[0][i]==player&&b[1][i]==player&&b[2][i]==player)return true;
	}
	if(b[0][0]==player&&b[1][1]== player&&b[2][2]==player)return true;
	if(b[0][2]==player&&b[1][1]==player&&b[2][0]==player)return true;
	return false;
}
bool checkdraw()
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(b[i][j]!='X'&& b[i][j]!='O')
			return false;
		}
	}
	return true;
}
int main()
{
	char currentplayer='X';
	while(true)
	{
		displayb();
		playerinput(currentplayer);
		if(checkwin(currentplayer))
		{
			displayb();
			cout<<"player"<<currentplayer<<"wins!!"<<endl;
			break;
		}
		else if(checkdraw())
		{
			displayb();
			cout<<"its a draw..!!"<<endl;
			break;
		}
		currentplayer=(currentplayer=='X')?'O':'X';
		
		
		
		
		
	}
return 0;
}


