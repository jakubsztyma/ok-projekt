#include<iostream>
#include "generator.hpp"
#include<list>
using namespace std;

int main()
{
	list<int> times;
	cout<<createInstance(5, times)<<endl;
	return 0;
}
