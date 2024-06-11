/*Oops Concept
1.Abstraction:Hiding essential details by using private access specifier whichever data types or 
  functions  
2.Encapsulation:binding data and procedure is encapsulation
3.Inheritance:copy of  parent details in child
4.Polymorphism:one name many forms or meaning is polymorphism
*/
//for bulding this concept first we need class so lets start
#include<iostream>
#include<fstream>
using namespace std;
static string PInfo="PersonDetails.txt";
static string SInfo="StudentDetails.txt";
class Person{
    string Name;
    string address;
    ofstream pInfoptr;

    void storePersondetails()
    {
        pInfoptr.open(PInfo,ios::app);
        if(!pInfoptr){
            cout<<"file not created"<<endl;
        }
        else {
        cout<<"File created and data got written to file";    
        pInfoptr<<Name<<"  "<<address<<"\n";
        pInfoptr.close();
        }  
    }
    public:void Setdetails(){
        cin>>Name;
        cin>>address;
    }
    void Getdetails(){
        cout<<"Details of "<<Name<<" "<<address<<endl;
        storePersondetails();
    }
    
};
//student class inherirating properties of person
class Student:public Person{
     int rollNum;
     void storePersondetails()
    {
        sInfoptr.open(SInfo,ios::app);
        string RNUM=to_string(rollNum);
        if(!sInfoptr){
            cout<<"file not created"<<endl;
        }
        else {
        cout<<"File created and data got written to file";    
        sInfoptr<<Name<<"  "<<address<<"  "<<RNUM"\n";
        sInfoptr.close();
        }  
    }
    public: void Setdetails();
    {
        cin>>Name;
        cin>>address;
        cin>>rollNum;
    }
    void Getdetails(){
        cout<<Name<<address<<rollnum<<endl;
    }


}
int main(){
    class Person Pobj;
    Pobj.Setdetails();
    Pobj.Getdetails();
    return 0;
}