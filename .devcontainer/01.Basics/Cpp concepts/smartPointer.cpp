/*Smart pointer which is used for memory management
1. unique_ptr is like eg. if p1 is unique pointer which holds address of object another ponter can not
point to same object after freeing p1 we can pont that object with pointer
2. shared_ptr is exactly opposite of unique_ptr multiple pointer can point with referce count
3. weak_ptr also can point to object with multiple pointer without referce count
*/
#include<iostream>
#include<memory>
using namespace std;
class student{
string name;
int rollNum;
public:
void getdata(){
    cin>>name;
    cin>>rollNum;
}
void printdata(){
    cout<<name<<endl;
    cout<<rollNum<<endl;
}
};
int main(){
  /*  unique_ptr<student> objPtr(new student);
    unique_ptr<student>autoSptr;
    objPtr->getdata();
    objPtr->printdata();
    autoSptr=move(objPtr);
    autoSptr->printdata();*/
    shared_ptr<student>sharedSptr1(new student),sharedSptr2,sharedpsptr3;
    sharedSptr1->getdata();
    sharedSptr2=sharedSptr1;
    sharedpsptr3=sharedSptr1;
    sharedSptr1->printdata();
    sharedSptr2->printdata();
    sharedpsptr3->printdata();
    cout<<sharedSptr1.use_count()<<endl;
    return 0;
}