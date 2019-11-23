#include <ctime>
#include <cstdlib>
template<typename T>

class CreateTask
{
private:
	int number_of_processors;        // число процессоров, требуемых для выполнения задачи
	int number_of_tacts;       // число тактов, требуемое на выполнение задачи
public:
	CreateTask();          			// конструктор по умолчанию
	CreateTask(const CreateTask<T> &q); 		// конструктор копирования              	

	int NumberOfProcessors(int a);
	int NumberOfTacts(int a);
};

//РЕАЛИЗАЦИЯ МЕТОДОВ КЛАССА CreateTask

template<typename T>				// конструктор по умолчанию
CreateTask<T>::CreateTask()
{
	number_of_processors = 0;
	number_of_tacts = 0;
}

template<typename T>				// конструктор копирования
CreateTask<T>::CreateTask(const CreateTask &ct)
{
	number_of_processors = ct.number_of_processors;
	number_of_measures = ct.number_of_tacts;
}

template<typename T>
int CreateTask<T>::NumberOfProcessors(int a)
{
	srand(time(NULL));
	number_of_processors = rand() % a + 1; 				// генерируем число от 1 до a
	return number_of_processors;
}

template<typename T>
int CreateTask<T>::NumberOfTacts(int a)
{
	srand(time(NULL));
	number_of_measures = rand() % a + 1; 				// генерируем число от 1 до a
	return number_of_tacts;
}

template<typename T>
int CreateTask<T>::ReturnTacts()
{
	return number_of_tacts;
}

template<typename T>
int CreateTask<T>::ReturnProcessors()
{
	return number_of_processors;
}
