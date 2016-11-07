#include<list>
#include<stdlib.h>
#include<time.h>

int createInstance(int processors, list<int> times)
{
	srand(time(NULL));
	list<int> lista;
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
	return times.length();
}
