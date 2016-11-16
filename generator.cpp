#include<list>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include "generator.hpp"
using namespace std;

list<int> createInstance(int processors, int* size)
{
    list<int> times;
	srand(time(NULL));
	int width = 100;
	int maxLength = 50;

	for(int i=0; i<processors; i++){
		int cLength = 0;
		while(true){
			int next = rand() % maxLength;
			if(cLength + next <= width){
				times.push_back(next);
				cLength += next;
			}
			else{
				times.push_back(width - cLength);
				break;
			}
		}
	}
    
    *size = times.size();
    return times;
    
    /* Converting to list.
    int* r = new int[times.size()];
    
    for(int i=0; i<*size; i++){
        cout<<times.front()<<endl;
        r[i] = times.front();
        times.pop_front();
    }
    
	return r;*/
}
