
#include <iostream>
using namespace std;

int main()
{
    int a=10; //stored in stack
    int *p=new int(); //new is used to allocate memory in the heap
    *p=10;
    delete(p); //deallocate memory
    p=new int[4];
    delete[]p;
    p=NULL; //to avoid memory leak
    return 0;
}
