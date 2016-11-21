#include<list>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include <fstream>
#include "generator.hpp"
using namespace std;

list<int> createInstance(int processors, int proc, int optimum, int maxLength)
{
    list<int> times;
	srand(time(NULL));
	fstream plik("instancja", ios::cout);

	for(int i=0; i<processors; i++){
		int cLength = 0;
		while(true){
			int next = rand() % maxLength;
			if(cLength + next <= optimum){
				times.push_back(next);
				cLength += next;
			}
			else{
				times.push_back(optimum - cLength);
				break;
			}
		}
	}
	
	plik<< processors<< endl;
	plik<< proc<< endl;
	int size = times.size();
	for(int i=0; i<size; i++){
		plik<< times.front()<<endl;
		times.pop_front();
	}
	
    return times;
}
