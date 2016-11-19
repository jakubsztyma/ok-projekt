#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int greedy(int proc, int tasks,  list <int> time){

	int timer=0, i=0;
	time.sort();
	int proc_array[proc];
	for (i=0; i<proc; i++){
		proc_array[i] = time.front();
		time.pop_front();
		tasks -= 1; 
	}
	while ( tasks > 0 ){
		for (i=0; i<proc; i++){
			proc_array[i]-= 1;

			if (proc_array[i] == 0){
				proc_array[i] = time.front();
				time.pop_front();
				tasks-=1;	
			}
			
			if (tasks == 0)
				break;
				
		}
		timer+=1;
	
	}
	int max =0;
	for (i=0; i<proc ; i++){
		if (proc_array[i] > max)
			max = proc_array[i];
	}
	timer += max;
	return timer;
	
}
