#include "queue.h"
#include "createtask.h"

class CLUSTER
{
private:
	int tacts;
	int proc;							// кол-во процессоров
	vector<int> busy_proc;					// вектор, хранящий занят процессоры		
	int count_of_tasks;							//кол-во задач	
	int free_proc;							// кол-во свободных процессоров		
	int performed_tasks;							// кол-во выполненных задач
	int not_performed_tasks;							// кол-во невыполненных задач
public:
	CLUSTER();
	CLUSTER(const CLUSTER &cl);
	void performance();
	void performing_tacts();						// выполнение тактов


};

//РЕАЛИЗАЦИЯ МЕТОДОВ КЛАССА CLUSTER

CLUSTER::CLUSTER(int _proc)	
{
	if (proc <= 0)
		throw "Error with processor";
	proc = _proc;
	free_proc = 0;
	count_of_tasks = 0;
	performed_tasks = 0;
	not_performed_tasks = 0;
}

CLUSTER::CLUSTER(const CLUSTER &cl)
{
	tacts = cl.tacts;
	proc = cl.proc;
	free_proc = cl.free_proc;
	count_of_tasks = cl.count_of_tasks;
	performed_tasks = cl.performed_tasks;
	not_performed_tasks = cl.not_performed_tasks;
	busy_proc = cl.busy_proc;
}

void CLUSTER::performing_tacts(int tacts)
{
	Queue queue;
	for (int i = 0; i < tacts; i++)
	{
		CreateTask cr;
		queue.push(cr);
		cr.NumberOfTacts;
		cr.NumberOfProcessors;

		while (!queue.is_empty)
		{
			CreateTask cr;
			if (free_proc >= cr.ReturnProcessors)
			{
				for (i = 0; i < cr.ReturnProcessors; i++)
					busy_proc.pushback(i);
				queue.pop();
				free_proc = free_proc - cr.ReturnProcessors(proc);
			}
			else
			{
				break;
			}

		}
	}
}

void CLUSTER::performance()
{

}
