//#include <stdafx.h>
//# include <iostream>
//
//#clTabCtrl include <process.h>
//# include <conio.h>
//#include <stdafx.h> // for windows only

#include <iostream>
//# include <process.h>
#include <unistd.h>
//# include <conio.h>
#include <cstdio>
#include <curses.h>
//#define getch()
using namespace std;

int display_menu();  // function prototype

// This program compiles and runs.
// BUT YOU MUST UNDERSTAND - YOU now have to complete it for it to work for program 1.

// Modify to add functions if needed, add existing functions if needed, and be sure it checks for overflow and underflow..!!

// Modify to use the test cases given

class QUEUE   // queue class definition - you complete it.
{
  private:
//      string arr[10];
//      string front, rear;
//      int size;

public:
      string arr[10];
      int front;
      int rear;
      int size;
    
 QUEUE()  // constructor
     {
        front=0;
        rear=0;
        size=10;
     }
//     void display();
     void enqueue(string inVal);
     void dequeue();
     string head();
     string end();
};

//void QUEUE :: display()
//{
// cout<<endl;
// if(front!=0 && rear!=0)
// {
//    string i=front;
//    cout<<"arr["<<i<<"] :"<<arr[i]<<endl;
//    while(i!=rear)
//    {
//     i=(i % size)+1;
//     cout<<"arr["<<i<<"] :"<<arr[i]<<endl;
//    }
// }
// else
// {
//    cout<<"Queue is empty"<<endl;
// }
//// getch();
//}
string QUEUE::head() {
    return arr[front];
}

string QUEUE::end(){
    return arr[rear];
}

void QUEUE :: enqueue(string inVal)
{
 cout<<endl;
 if(front==0 && rear==0)
 {
//  cout<<"Enter Number to enqueue at Position arr["<<rear+1<<"] :";
  arr[1] = inVal;
  rear=1;
  front=1;
 }
 else
 {
  int next=(rear % size)+1;
  if(next==front)
  {
   cout<<"Queue is Full ...";
//   getch();
  }
  else
  {
//   cout<<"Enter Number to enqueue at Position arr["<<next<<"] :";
   arr[next] =  inVal;
   rear=next;
  }
 }
}

void  QUEUE :: dequeue()
{
 cout<<endl;
 if( (rear == 0) && (front == 0) )
 {
   cout<<"Queue is empty ...";
//   getch();
   return;
 }
 if(rear==front)
 {
  rear=0;
  front=0;
 }
 else
 {
  front=(front % size)+1;
 }
}

int main()
{
// QUEUE Q1;
 
    QUEUE myQ;   //( Use default constructor to initialize front and end to zero. )
  
    cout<< myQ.size << endl;  // number of elements in queue
   
    myQ.dequeue();   //  Try to deqeue when the queue is empty. Should catch UNDERFLOW
    myQ.enqueue("Fred");
    myQ.enqueue("Liv");
    myQ.enqueue("Julie");
    myQ.enqueue("Rich");
    myQ.enqueue("William");
    myQ.enqueue("Olo");
    myQ.enqueue("Xi");
    myQ.enqueue("Chu");
    myQ.enqueue("Annie");
    myQ.enqueue("Carlos");
    myQ.enqueue("Tuyet");
    myQ.enqueue("Sue");
    myQ.enqueue("Penny");  // Add 1 to many, should catch OVERFLOW
    cout<< myQ.head() << endl;  // index value
    cout<< myQ.end() << endl;   // index value
//    cout<< myQ.size() << endl;   // number of elements in queue
//    cout << myQ.dequeue() << endl;
//    cout << myQ.dequeue() << endl;
//    cout << myQ.dequeue() << endl;;
//    myQ.enqueue("Olive");
//    myQ.enqueue("Jim");
//    cout << myQ.dequeue() << endl;
//    cout << myQ.dequeue() << endl;
//    cout<< myQ.front() << endl;  // index value
//    cout<< myQ.end() << endl;   // index value
//    cout<< myQ.size() << endl;   // number of elements in queue

// while(1)
// {
//  switch(display_menu())
//  {
//    case 1: Q1.enqueue();
//        break;
//    case 2: Q1.dequeue();
//        break;
//    case 3: Q1.display();
//        break;
//    case 4: exit(1); // end switch
//  }
// }
}

//int display_menu()
//{
// int choice = 0;
// system("cls"); // only works on Window OS
// cout << endl;
// cout << "| 1 | : Enqueue element"<<endl;
// cout << "| 2 | : Delete element"<<endl;
// cout << "| 3 | : Display"<<endl;
// cout << "| 4 | : Exit"<<endl;
// cout << "Enter your Choice :";
// cin >> choice;
// return choice;
// }

