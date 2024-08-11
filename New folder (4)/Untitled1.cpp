#include<iostream>
#include<string>
#include<vector>
struct task{
	std::string description;
	bool completed;
};
std::vector<task>tasks;
void addtk()
{
	task newtask;
	std::cout<<"enter task description:";
	std::cin.ignore();
	std::getline(std::cin,newtask.description);
	newtask.completed=false;
	tasks.push_back(newtask);
}
void viewtk()
{
	for(int i=0;i<tasks.size();i++)
	{
		std::cout<<(i+1)<<". "<<tasks[i].description;
		if(tasks[i].completed)
		{
			std::cout<<"(COMPLETED)";
		}
		else
		{
			std::cout<<"(PENDING)";
		}
		std::cout<<std::endl;
	}
}
void marktkascomp()
{
	int tasknum;
	std::cout<<"enter task no to mark as completed:";
	std::cin>>tasknum;
	if(tasknum>0&& tasknum<=tasks.size())
	{
		tasks[tasknum-1].completed=true;
	}
	else
	{
		std::cout<<"INVALID TASK NUMBER"<<std::endl;
	}
}
void rmtask()
{
	int tasknum;
	std::cout<<"Enter task no to remove:";
	std::cin>>tasknum;
	if(tasknum>0 && tasknum<=tasks.size()){
		tasks.erase(tasks.begin()+tasknum-1);
	}
	else
	{
		std::cout<<"INVALID TASK NUMBER"<<std::endl;
	}
}
int main()
{
	while(true){
		
		std::cout<<"TO DO LIST MANAGER"<<std::endl;
		std::cout<<"1.ADD TASK"<<std::endl;
		std::cout<<"2.VIEW TASK"<<std::endl;
		std::cout<<"3.MARK AS COMPLETED"<<std::endl;
		std::cout<<"4.REMOVE TASK"<<std::endl;
		std::cout<<"5.EXIT"<<std::endl;
		int ch;
		std::cout<<"enter your choice:"<<std::endl;
		std::cin>>ch;
		switch(ch)
		{
			case 1:
				addtk();
				break;
			case 2:
				viewtk();
				break;
			case 3:
				marktkascomp();
				break;
			case 4:
				rmtask();
				break;
			case 5:
				return 0;
			default:
				std::cout<<"INVALID CHOICE"<<std::endl;
		}
	}
	return 0;
}
