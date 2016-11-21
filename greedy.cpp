#include <list>
#include <algorithm>
#include <iostream>
#include "generator.hpp"
#include <fstream>

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



list <int> file_to_list(){
    ifstream input_file;
    input_file.open("instancja.txt");
    list <int> instancja;
    int processors, proc, czas;
    input_file >>  processors;
    input_file >> proc ;
    instancja.push_back(processors);
    instancja.push_back(proc);
    while (1){
        input_file >> czas ;
        if (czas != '\0'){
            instancja.push_back(czas);

        }
        else
            break;

    }
    return instancja;


}




