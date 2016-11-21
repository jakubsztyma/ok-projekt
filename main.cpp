#include<iostream>
#include "generator.hpp"
#include<list>
using namespace std;

int main()
{
    int proc = 1000;
    int processors = 10;
    list<int> times = createInstance(processors, proc);
    int result_time;

    result_time = greedy(processors,size,times);
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
