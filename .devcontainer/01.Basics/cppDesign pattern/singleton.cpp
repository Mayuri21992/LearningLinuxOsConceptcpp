#include<iostream>
#include<fstream>
using namespace std;
//creating singleton design pattern
class Logger{
    int ID;
    string name;
    static Logger* instancePtr;
    Logger(){}
    public:
    static Logger* getInstance(){           
            return instancePtr;
            }
void setdata(){
    cin>>ID>>name;
}
void getdata(){
    cout<<ID<<endl<<name<<endl;
}
};
Logger *Logger::instancePtr=new Logger();
int main(){ 
    Logger* obj=Logger :: getInstance();
    obj->setdata();
    obj->getdata();
    return 0;
}