#include "postfix.h"
#include "stack.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	int size_of_queue;

	int number_of_processors;
	
	int tacts;

	cout << " " << endl;
	cin >> number_of_processors;
	cout << endl;
	
	cout << "Ââåäèòå íåîáõîäèìîå ÷èñëî òàêòîâ" << endl;
		cin >> Tacts;
		cout << endl;
		TCluster Work;
		Work.PreparationForWork(NumberProcessors, SizeQueue, Tacts);
		Work.GetStatistics();
		cout << "Æåëàåòå âûéòè èç ïðîãðàììû?" << endl;
		cout << "Åñëè äà - 0, åñëè íåò - 1." << endl;
		cin >> exit;
	return 0;
}