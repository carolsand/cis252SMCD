#include <iostream>
using namespace std;

template <class T>
class queue
{
private:
	int head;   // variable to store the head index
	int tail;	// variable to store the tail index
	int count;  // variable to store the number of free rooms/spots
	int maxSize = 12;  // the size of the array
	T queueArray[12];  // the array as a queue

public:
	// default constructor to initialize member variables
	queue()
	{
		maxSize = 12;
		head = maxSize - 1;
		tail = maxSize;
		count = 0;
		queueArray[0] = { -1 };
	}

	// function to return the amount of elements in the queue
	int size()
	{
		return count;
	}

	// function will return true if the queue is empty, otherwise false
	bool isEmpty()
	{
		if (count == 0)
			return true;
		else
			return false;
	}

	// function will return true if the queue is full, otherwise false
	bool isFull()
	{
		if (count == maxSize)
			return true;
		else
			return false;
	}

	// function to add a new data in the queue
	void enqueue(T data)
	{
		if (!isFull())
		{
			if (tail == 0)
				tail = maxSize - 1;
			else
				tail--;
			queueArray[tail] = data;
			count++;
		}
		else
		{
			cout << "WARNING - QUEUE OVERFLOW." << endl;
			cout << "A validation was made to avoid queue overflow." << endl;
			cout << "The value has not been enqueued. The queue is full." << endl;
		}

	}

	// function to remove one element (head) of the queue
	T dequeue()
	{
		T result;
		if (!isEmpty())
		{
			result = queueArray[head];
			queueArray[head] = -1;
			if (head == 0)
				head = maxSize - 1;
			else
				head--;
			count--;
			return result;
		}
		/*else
		{
			return -1;
		}*/
	}

	// function to print out the head element
	T front()
	{
		if (!isEmpty())
			return queueArray[head];
		/*else 
			return 0;*/
	}

	// function to print out the tail element
	T end()
	{
		if (!isEmpty())
			return queueArray[tail];
		/*else
			return -1;*/
	}

};

int main()
{
	cout << " - Program Name: Prog3CircularArrayTemplate - Date: 02/29/2020" << endl;
	// STEP 2 - DECLARE THE CLASS
	queue<string> myQstring;
	queue<int> myQ2int;
	queue<double> myQ3double;
	queue<char> myQ4char;

	// STEP 3 - USING IT WITH DOT NOTATION   -    STRING
	cout << myQstring.size() << endl;
	//myQ.dequeue();   // showind queue underflow with validation
	myQstring.enqueue("Fred");
	myQstring.enqueue("Liv");
	myQstring.enqueue("Julie");
	myQstring.enqueue("William");
	myQstring.enqueue("Olo");
	myQstring.enqueue("Xi");
	myQstring.enqueue("Chu");
	myQstring.enqueue("Annie");
	myQstring.enqueue("Carlos");
	myQstring.enqueue("Tuyet");
	myQstring.enqueue("Sue");
	myQstring.enqueue("Penny");
	cout << myQstring.front() << endl;  // index value
	cout << myQstring.end() << endl;   // index value
	cout << myQstring.size() << endl;   // number of elements in queue
	cout << myQstring.dequeue() << endl;
	cout << myQstring.dequeue() << endl;
	cout << myQstring.dequeue() << endl;;
	myQstring.enqueue("Olive");
	myQstring.enqueue("Jim");
	cout << myQstring.dequeue() << endl;
	cout << myQstring.dequeue() << endl;
	cout << myQstring.front() << endl;  // index value
	cout << myQstring.end() << endl;   // index value
	cout << myQstring.size() << endl;   // number of elements in queue
	cout << endl;

	// --------------------------------------------------------------------------------------------------------
	// STEP 3.2 - USING IT WITH DOT NOTATION     -     INTEGER
	cout << "The size is: " << myQ2int.size() << endl;
	//myQ.dequeue();   // showind queue underflow with validation
	myQ2int.enqueue(1);
	myQ2int.enqueue(2);
	myQ2int.enqueue(3);
	myQ2int.enqueue(4);
	myQ2int.enqueue(5);
	myQ2int.enqueue(6);
	myQ2int.enqueue(7);
	myQ2int.enqueue(8);
	myQ2int.enqueue(9);
	myQ2int.enqueue(10);
	myQ2int.enqueue(11);
	myQ2int.enqueue(12);
	cout << "The front is: " << myQ2int.front() << endl;  // index value
	cout << "The end is: " << myQ2int.end() << endl;   // index value
	cout << "The size is: " << myQ2int.size() << endl;   // number of elements in queue
	cout << "The item: " << myQ2int.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ2int.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ2int.dequeue() << " has been removed." << endl;
	myQ2int.enqueue(20);
	myQ2int.enqueue(30);
	cout << "The item: " << myQ2int.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ2int.dequeue() << " has been removed." << endl;
	cout << "The front is: " << myQ2int.front() << endl;  // index value
	cout << "The end is: " << myQ2int.end() << endl;   // index value
	cout << "The size is: " << myQ2int.size() << endl;   // number of elements in queue
	cout << endl;

	// --------------------------------------------------------------------------------------------------------
	// STEP 3.3 - USING IT WITH DOT NOTATION     -     DOUBLE
	cout << "The size is: " << myQ3double.size() << endl;
	//myQ.dequeue();   // showind queue underflow with validation
	myQ3double.enqueue(1.1);
	myQ3double.enqueue(2.2);
	myQ3double.enqueue(3.3);
	myQ3double.enqueue(4.4);
	myQ3double.enqueue(5.5);
	myQ3double.enqueue(6.6);
	myQ3double.enqueue(7.7);
	myQ3double.enqueue(8.8);
	myQ3double.enqueue(9.9);
	myQ3double.enqueue(10.0);
	myQ3double.enqueue(11.01);
	myQ3double.enqueue(12.02);
	cout << "The front is: " << myQ3double.front() << endl;  // index value
	cout << "The end is: " << myQ3double.end() << endl;   // index value
	cout << "The size is: " << myQ3double.size() << endl;   // number of elements in queue
	cout << "The item: " << myQ3double.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ3double.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ3double.dequeue() << " has been removed." << endl;
	myQ3double.enqueue(20.22);
	myQ3double.enqueue(30.33);
	cout << "The item: " << myQ3double.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ3double.dequeue() << " has been removed." << endl;
	cout << "The front is: " << myQ3double.front() << endl;  // index value
	cout << "The end is: " << myQ3double.end() << endl;   // index value
	cout << "The size is: " << myQ3double.size() << endl;   // number of elements in queue
	cout << endl;

	// --------------------------------------------------------------------------------------------------------
	// STEP 3.3 - USING IT WITH DOT NOTATION     -     CHAR
	cout << "The size is: " << myQ4char.size() << endl;
	//myQ.dequeue();   // showind queue underflow with validation
	myQ4char.enqueue('a');
	myQ4char.enqueue('b');
	myQ4char.enqueue('c');
	myQ4char.enqueue('d');
	myQ4char.enqueue('e');
	myQ4char.enqueue('f');
	myQ4char.enqueue('g');
	myQ4char.enqueue('h');
	myQ4char.enqueue('i');
	myQ4char.enqueue('j');
	myQ4char.enqueue('k');
	myQ4char.enqueue('l');
	cout << "The front is: " << myQ4char.front() << endl;  // index value
	cout << "The end is: " << myQ4char.end() << endl;   // index value
	cout << "The size is: " << myQ4char.size() << endl;   // number of elements in queue
	cout << "The item: " << myQ4char.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ4char.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ4char.dequeue() << " has been removed." << endl;
	myQ4char.enqueue('p');
	myQ4char.enqueue('q');
	cout << "The item: " << myQ4char.dequeue() << " has been removed." << endl;
	cout << "The item: " << myQ4char.dequeue() << " has been removed." << endl;
	cout << "The front is: " << myQ4char.front() << endl;  // index value
	cout << "The end is: " << myQ4char.end() << endl;   // index value
	cout << "The size is: " << myQ4char.size() << endl;   // number of elements in queue
	cout << endl;
}