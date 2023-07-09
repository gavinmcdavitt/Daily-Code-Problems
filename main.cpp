#include <iostream>
#include <cstdlib>
#include "helpful.h"
using namespace std;

int main()
{
helpful h(170);
//h.printArray();
h.mergeSort(0,h.getSize() -1);
h.printArray();
cout<<"**************************************"<<endl;
h.RemoveAllNegatives();
h.printArray();
    cout<<"**************************************"<<endl;
cout<<h.findLowestNum();
    return 0;
}
