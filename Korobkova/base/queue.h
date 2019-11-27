#ifndef __queue_H__
#define __queue_H__
#include <iostream>
#define MAXsizeQ  100

template<typename T>
class Queue
{
private:
	T* queuePtr;     // указатель на очередь
	int size;        // макс количество элементов в очереди
	int start;       // начало очереди
	int finish;      // конец очереди
	int count;       // количество элементов в очереди
public:
	Queue(int _size);          			// конструктор по умолчанию
	Queue(const Queue<T>& q); 		// конструктор копирования
	~Queue();                		// деструктор

	bool is_full();
	bool is_empty();
	void push(T newElem); 		// добавить элемент в очередь
	T pop(); 				// удалить элемент из очереди
};

//РЕАЛИЗАЦИЯ МЕТОДОВ КЛАССА QUEUE

template<typename T>				// конструктор по умолчанию
Queue<T>::Queue(int _size)
{
	if (_size < 0 || _size > MAXsizeQ)
		throw "Error with size";
	size = _size;
	start = 0;
	finish = 0;
	count = 0;
	queuePtr = new T[size];
}

template<typename T>				// конструктор копирования
Queue<T>::Queue(const Queue& q)
{
	size = q.size;
	start = q.start;
	finish = q.finish;
	count = q.count;
	queuePtr = new T[size];
	for (int i = 0; i < size; i++)
		queuePtr[i] = q.queuePtr[i]; // копируем очередь
}

template<typename T>			// деструктор
Queue<T>::~Queue()
{
	delete[] queuePtr;
}

template<typename T>
bool Queue<T>::is_full()
{
	if (count == size)
		return true;
	else return false;
}

template<typename T>
bool Queue<T>::is_empty()
{
	if (count == 0)
		return true;
	else return false;
}

template<typename T>						// положить элемент в очередь
void Queue<T>::push(T newElem)
{
	// проверяем, ести ли свободное место в очереди
	if (count == size)
		throw "очередь полна\n";
	finish = (finish + 1) % size;
	queuePtr[finish] = newElem;
	count++;
}

template<typename T>					//убрать элемент из очереди
T Queue<T>::pop() //
{

	if (count == 0)
		throw "Очередь пуста\n";
	count--;
	int tmp = (size - count + finish) % size;
	return queuePtr[tmp];
}

#endif

