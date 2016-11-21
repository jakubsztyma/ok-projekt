#include<iostream>
#include "generator.hpp"
#include<list>
using namespace std;

int main()
{
    int processors = 10;
    int proc = 1000;
    int optimum = 20000;
    int maxLength = 100;
    
    list<int> times = createInstance(processors, proc, optimum, maxLength);
    int result_time;

    result_time = greedy(processors,proc,times);
    cout << "ilosc procesow " << endl ;
    cout<<times.size()<<endl;
    cout << endl << "kolejne czasy procesow ";
    list<int>::iterator it;

    for( it=times.begin(); it!=times.end(); ++it ){
        cout<<(*it) << ' ';

    }

    cout << endl << "potrzeba " << result_time << " jednostek czasu";
	return 0;
}
