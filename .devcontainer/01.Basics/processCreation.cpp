#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;
//fork() is  system call used to create child process
int main(){
   pid_t Cpid=fork();
   cout<<"hellowordl"<<endl;
   if(Cpid == -1){
    perror("fork");
    exit(EXIT_FAILURE);
   }
   else if (Cpid>0)
   {
    /* code */
    wait(NULL);
    cout<<"parent process id printing "<<getpid()<<endl;
  
   }
   else{
    cout<<"child process id printing "<<getpid()<<endl;
   }
   return 0;
   
}