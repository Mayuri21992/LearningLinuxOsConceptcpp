#include<iostream>
#include<sys/wait.h>
#include<unistd.h>
using namespace std;
int main()
{
    pid_t Cpid=fork();
    pid_t cpid=fork();
    if(Cpid>0 && cpid>0)
    {    wait(NULL);
         wait(NULL);
    
        cout<<"parent process terminated"<<endl;
       
    }
    else if (Cpid==0 && cpid>0){
        sleep(2);
         wait(NULL);
         
        cout<<"child 1 process terminated"<<endl;
    }
    else if(Cpid>0 && cpid==0){
        sleep(1);
         
        cout<<"child 2 process terminated"<<endl;
    }
    else{
        cout<<"Grand child terminated"<<endl;
    }
    
    return 0;
}