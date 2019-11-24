#include "cluster.h"
#include <iostream>
#include <string>

#define MAXsizeQ  100

using namespace std;

int main()
{
	int number_of_processors;

	int tacts;

	cout << " Enter count of processors " << endl;
	cin >> number_of_processors;
	cout << endl;

	cout << "Enter count of tacts" << endl;
	cin >> tacts;
	cout << endl;

	CLUSTER cluster;
	cluster.start(tacts, number_of_processors);
	cluster.statistics();
}