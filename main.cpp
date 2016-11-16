#include<iostream>
#include "generator.hpp"
#include<list>
using namespace std;

int main()
{
    int size;
    list<int> times = createInstance(5, &size);
    
    cout<<times.size()<<endl;
    for(int i=0; i<size; i++){
       cout<<times.front()<<endl;
       times.pop_front();
    }
    
	return 0;
}
