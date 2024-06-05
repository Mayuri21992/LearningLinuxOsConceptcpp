/*function pointer holds address of function 
function ponter syntax and function syntax is same just infront of fptr * is there
fptr holds address of function
then fptr will call the function with arguments if there
it can point multiple function if syntax is same or matching
*/
#include<iostream>
using namespace std;
int addInteger(int a,int b){
    return a+b;
}
int Multiply(int a,int b)
{
    return a*b;
}
int main(){
    int (*fptr)(int ,int);
    fptr=addInteger;
    int result=fptr(2,55);
    cout<<result<<endl;
    fptr=Multiply;
    result=fptr(10,20);
    cout<<result<<endl;
    return 0;

}