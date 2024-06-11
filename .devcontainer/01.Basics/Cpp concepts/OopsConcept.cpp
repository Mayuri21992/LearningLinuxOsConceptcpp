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
  public:
    string Name;
    string address;
    ofstream pInfoptr;

    virtual void storedetails()
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
    public:
    virtual void Setdetails(){
        cin>>Name;
        cin>>address;
    }
    virtual void Getdetails(){
        cout<<"Details of "<<Name<<" "<<address<<endl;
        storedetails();
    }
    
};
//student class inherirating properties of person
class Student:public Person{
     int rollNum;
     ofstream sInfoptr;
     void storedetails()
    {
        sInfoptr.open(SInfo,ios::app);
        string RNUM=to_string(rollNum);
        if(!sInfoptr){
            cout<<"file not created"<<endl;
        }
        else {
        cout<<"File created and data got written to file";    
        sInfoptr<<Name<<"  "<<address<<"  "<<RNUM<<"\n";
        sInfoptr.close();
        }  
    }
    public: void Setdetails()
    {
        cin>>Name;
        cin>>address;
        cin>>rollNum;
    }
    void Getdetails(){
        cout<<Name<<address<<rollNum<<endl;
        storedetails();
    }
};
int main(){
    /*Person Pobj;
    Pobj.Setdetails();
    Pobj.Getdetails();
    */
    Student Sobj;
    Sobj.Setdetails();
    Sobj.Getdetails();
    return 0;
}