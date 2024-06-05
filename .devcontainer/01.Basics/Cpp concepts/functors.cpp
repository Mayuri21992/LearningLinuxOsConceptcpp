/*A C++ functor (function object) is a class or struct object that can be called like a function.
It overloads the function-call operator () and allows us to use an object like a function.
*/
#include<iostream>
using namespace std;
class add {
public:
    int operator()(int a,int b){
        return a+b;
    }
};
class Greet{
public:
void operator()(){
    cout<<"hello functors learner"<<endl;}
};
int main(){
    Greet wish;
    add sum;
    cout<<sum(10,20)<<endl;
    wish();
    return 0;
}