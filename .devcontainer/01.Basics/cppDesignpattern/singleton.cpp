#include<iostream>
#include<fstream>
using namespace std;
//creating singleton design pattern
static string fileName="loggerfile.txt";
class Logger{
    int ID;
   
    ofstream fileptr;
    
    string name;
    static Logger* instancePtr;
    Logger(){}
    public:
    static Logger* getInstance(){           
            return instancePtr;
            }
void setdata(){
    cin>>ID;
    cin>>name;
}
void writeIntoLogger(){
    fileptr.open(fileName,ios::app);
    string IDstring=to_string(ID);
    if(!fileptr){
           cout<<" Error while creating the file "<<endl;          
    }
    else {
        cout<<"File created and data got written to file";    
        fileptr<<IDstring<<name<<"\n";
        fileptr.close();                   
    }

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
    obj->writeIntoLogger();
    
    return 0;
}