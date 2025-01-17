/*
#include <iostream>
using namespace std;

void print(void *ptr, char type)
{
     //print 函数的参数 void *ptr 允许该函数接受任意类型的数据指针。这种设计使得 print 函数具有更高的通用性，可以处理不同类型的数据，而不需要为每种数据类型编写单独的函数。
     switch(type)
     {
     case 'i':
          cout << *((int*)ptr) << endl;
          break;
     case 'c':
          cout << *((char*)ptr) << endl;
     }
}
//void 指针
int main()
{
     int number = 5;
     char letter = 'a';
     print(&number, 'i');
     print(&letter, 'c');
     return 0;
} */
/*
#include <iostream>
using namespace std;

void MaxMin(const int array[], int size, int *max, int *min);

int main()
{
     int array[5];

     // 输入数组元素
     for(int i = 0; i < 5; i++)
     {
          cout << "Number " << i+1 << ": ";
          cin >> array[i];
     }

     // 初始化 min 和 max 为第一个元素
     int min = array[0];
     int max = array[0];

     // 调用函数查找最大值和最小值
     MaxMin(array, 5, &max, &min);

     // 输出结果
     cout << "Min: " << min << endl;
     cout << "Max: " << max << endl;

     return 0;
}

void MaxMin(const int array[], int size, int *max, int *min)
{
     for(int i = 1; i < size; i++) // 从第二个元素开始比较
     {
          if(array[i] > *max)
          {
               *max = array[i];
          }
          if(array[i] < *min)
          {
               *min = array[i];
          }
     }
} */

/*
#include <iostream>
using namespace std;

int main()
{
     int size;
     cout << "Size: ";
     cin >> size;
     int *myArray = new int[size];

     for(int i = 0; i < size; i++)
     {
          cin >> myArray[i];
     }

     delete[] myArray;

     return 0;
}   */
/*
#include <iostream>
using namespace std;

int main()
{
     int rows, cols;
     cout << "rows, cols";
     cin >> rows >> cols;

     int **table = new int*[rows];
     for(int i = 0; i < rows; i++)
     {
          table[i] = new int[cols];
     }

     delete [] table;
     return 0;
}
*/
//智能指针
//唯一指针 unique pointer
/*
#include <iostream>
#include <memory>
using namespace std;

int main()
{
     unique_ptr<int>unPtr1 = make_unique<int>(25);
     unique_ptr<int>unPtr2 = move(unPtr1);
     //unique_ptr<int>unPtr2 = unPtr1  不能共享。这种类型的指针不可以共享
     cout << unPtr1 << endl;
     cout << *unPtr1 << endl;
     cout << *unPtr2 << endl;
     return 0;
}
*/
/*
#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
   public:
     MyClass()
     {
          cout << "Constructor invoked" << endl;
     }
     ~MyClass()
     {
          cout << "Destructor invoked" << endl;
     }
};
int main()
{
     {
          shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
          cout << "Shared cout: " << shPtr1.use_count() << endl;
          {
               shared_ptr<MyClass>shPtr2 = shPtr1;
               cout << "Shared count: " << shPtr1.use_count() << endl;
          }
          cout << "Shared count: " << shPtr1.use_count() << endl;
     }



     return 0;
}
*/
//弱指针
/*
#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
   public:
     MyClass()
     {
          cout << "Constructor invoked" << endl;
     }
     ~MyClass()
     {
          cout << "Destructor invoked" << endl;
     }
};
int main()
{
     weak_ptr<int> wePtr1;
     {
          shared_ptr<int>shPtr1 = make_shared<int>(25);
          wePtr1 = shPtr1;
     }



     return 0;
}
 */

///函数指针
/*
#include <iostream>
#include <vector>
using namespace std;

bool ascendingCompare(int a, int b)
{
     return a < b;
}
bool descendingCompare(int a, int b)
{
     return a > b;
}
void customSort(vector<int> &numbersVector, bool(*compareFunPtr)(int, int))
{
     for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
     {
          int bestIndex = startIndex;

          for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
          {
               if(compareFunPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
               {
                    bestIndex = currentIndex;
               }

          }
          swap(numbersVector[startIndex], numbersVector[bestIndex]);
     }
}

void printNumbers(vector<int> &numbersVector)
{
     for(int i = 0; i < numbersVector.size(); i++)
     {
          cout << numbersVector[i] << " ";
     }
}

int main()
{
     vector<int>myNumbers = {2, 5, 1, 3, 6, 4};
     bool(*funcPtr)(int, int) = descendingCompare;
     customSort(myNumbers, funcPtr);
     printNumbers(myNumbers);
     return 0;
}    */
//链表
/*
#include <iostream>
using namespace std;

class Node
{
   public :
     int Value;
     Node * Next;
};
void prinList(Node *n)
{
     while(n != NULL)
     {
          cout << n -> Value << endl;
          n = n -> Next;
     }

}

int main()
{
     Node *head = new Node();
     Node *second = new Node();
     Node *third = new Node();

     head -> Value = 1;
     head -> Next = second;
     second -> Value = 2;
     second -> Next = third;
     third -> Value = 3;
     third -> Next = NULL;

     prinList(head);
     return 0;
}
*/
///链表插入节点
/*
#include <iostream>
using namespace std;

class Node
{
   public :
     int Value;
     Node * Next;
};
void prinList(Node *n)
{
     while(n != NULL)
     {
          cout << n -> Value << endl;
          n = n -> Next;
     }

}
voi d insertAtTheFront(Node **head, int newValue)
{
     Node *newNode = new Node();
     newNode -> Value = newValue;
     newNode -> Next = *head;
     *head = newNode;

}
void insertAtTheEnd(Node **head, int newValue)
{
     Node *newNode = new Node();
     newNode -> Value = newValue;
     newNode -> Next = NULL;
     if(*head == NULL)
     {
          *head = newNode;
          return;
     }
     Node *last = *head;
     while(last -> Next != NULL)
     {
          last = last -> Next;
     }

     last -> Next = newNode;
}
void insertAfter(Node *previous, int newValue)
{
     if(previous == NULL)
     {
          cout << "Previous can not be NULL";
          return;
     }
     Node *newNode = new Node();
     newNode -> Value = newValue;
     newNode -> Next = previous -> Next;
     previous -> Next = newNode;
}

int main()
{
     Node *head = new Node();
     Node *second = new Node();
     Node *third = new Node();

     head -> Value = 1;
     head -> Next = second;
     second -> Value = 2;
     second -> Next = third;
     third -> Value = 3;
     third -> Next = NULL;

     insertAtTheFront(&head, -1);
     insertAfter(head, -1);
     insertAtTheEnd(&head, 4);
     prinList(head);

     return 0;
}
*/
/*
///栈
#include <iostream>
#include <stack>
using namespace std;

void prinStackElements(stack<int> stack)
{
     while(!stack.empty())
     {
          cout << stack.top() << endl;
          stack.pop();
     }
}
int main()
{
     //empty, size, push, pop, top
     stack<int>numbersStack;
     numbersStack.push(1); //增加元素用
     numbersStack.push(2);
     numbersStack.push(3);
     //numbersStack.pop();     //删除元素用
     //numbersStack.pop();
     if(numbersStack.empty())
     {
          cout << "Stack is empty" << endl;
     }
     else
     {
          cout << "Stack is not empty" << endl;
     }
     cout << "Stack size is " << numbersStack.size() << endl;

     prinStackElements(numbersStack);
     return 0;
}  */
/*
#include <iostream>
#include <queue>
using namespace std;

void prinQueue(queue<int> queue)
{
     while(!queue.empty())
     {
          cout << queue.front() << " ";
          queue.pop();
     }
     cout << endl;
}
int main()
{
     queue<int> myQueue;
     myQueue.push(1);
     myQueue.push(2);
     myQueue.push(3);

     cout << "Size is " << myQueue.size() << endl;
     cout << "First element is " << myQueue.front() << endl;
     cout << "Last element is " << myQueue.back() << endl;
     cout << "My queue: " << endl;
     prinQueue(myQueue);
     return 0;
}  */
/*
#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main()
{

     //map<string, string> myDictionary;
     //myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
     //myDictionary.insert(pair<string, string>("orange", "die orange, die Apfelsine"));
     //myDictionary.insert(pair<string, string>("apple", "die Apfel"));
     //myDictionary.insert(pair<string, string>("banana", "die Banana"));

     //myDictionary["strawberry"] = "Die Erdbeere";
     //myDictionary.clear();
     //cout << myDictionary.size() << endl;
     //for(auto pair : myDictionary)
     //{
          //cout << pair.first << " - " << pair.second << endl;
     //}
     map<string, list<string>> pokedex;
     list<string> pikachuAttacks { "thunder shock", "tail whip", "quick attack"};
     list<string> charmanderAttacks { "flame thrower", "scary face"};
     list<string> chikoritaAttacks { "razor leaf", "poison powder"};

     pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
     pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
     pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

     for(auto pair : pokedex)
     {
          cout << pair.first;
          for(auto attack : pair.second)
          {
               cout << attack << ", ";
          }
          cout << endl;
     }

     return 0;
}   */
/*
#include <iostream>
using namespace std;

class Node
{
   public:
     int value;
     Node *next;
     Node *previous;

};

void printForward(Node *head)
{
     Node *traverser = head;
     while(traverser != nullptr)
     {
          cout << traverser -> value << endl;
          traverser = traverser -> next;
     }
}
void printBackward(Node *tail)
{
     Node *traverser = tail;
     while(traverser != nullptr)
     {
          cout << traverser -> value << endl;
          traverser = traverser -> previous;
     }
}
int main()
{
     Node *head;
     Node *tail;
     //add 1st node
     Node *node = new Node();
     node -> value = 4;
     node -> next = nullptr;
     node -> previous = nullptr;
     head = node;
     tail = node;
     //add 2st node
     node = new Node();
     node -> value = 5;
     node -> next = nullptr;
     node -> previous = tail;
     tail -> next = node;
     tail = node;

     node = new Node();
     node -> value = 6;
     node -> next = nullptr;
     node -> previous = tail;
     tail -> next = node;
     tail = node;

     printBackward(tail);

     return 0;
}   */
/*
#include <iostream>
using namespace std;

struct Node
{
     int data;
     Node *left;
     Node *right;
};

Node *createNode(int data)
{
     Node *newNode = new Node();
     newNode -> data = data;
     newNode -> left = newNode -> right = nullptr;
     return newNode;
}

int main()
{
     Node *root = createNode(1);
     root -> left = createNode(2);
     root -> right = createNode(3);
     root -> left -> left = createNode(4);
     root -> left -> right = createNode(5);
     root -> right -> left = createNode(6);
     root -> right -> right = createNode(7);
     root -> left -> right -> left = createNode(9);
     root -> right -> right -> left = createNode(15);

     return 0;
}
*/
///遍历
/*
#include <iostream>
using namespace std;

struct Node
{
     int data;
     Node *left;
     Node *right;
};

Node *createNode(int data)
{
     Node *newNode = new Node();
     newNode -> data = data;
     newNode -> left = newNode -> right = nullptr;
     return newNode;
}

void printTree(Node *root)
{
     if(root == nullptr) return;

     printTree(root -> left);
     cout << root -> data << endl;
     printTree(root -> right);

}
int main()
{
     Node *root = createNode(1);
     root -> left = createNode(2);
     root -> right = createNode(3);
     root -> left -> left = createNode(4);
     root -> left -> right = createNode(5);
     root -> right -> left = createNode(6);
     root -> right -> right = createNode(7);
     root -> left -> right -> left = createNode(9);
     root -> right -> right -> left = createNode(15);

     printTree(root);
     return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> numbers;
     numbers.push_back(0);

     for(int i = 1; i <= 10; i++)
     {
          numbers.push_back(i);
     } */
     /*
     for(auto it = numbers.begin(); it != numbers.end(); it++)
     {
          cout << *it << endl;
          cout << &it << endl;
          cout << &(*it) << endl;

     }
     auto it = numbers.begin();
     cout << *(it + 5);  */
     //numbers.insert(numbers.begin() + 5, 88)
     //numbers.erase(numbers.begin() + 5)
     //numbers.pop_back()
/*
     cout << "Size: " << numbers.size() << endl;
     cout << "Max size: " << numbers.max_size() << endl;
     cout << "Capacity: " << numbers.capacity() << endl;
     numbers.resize(5);
     cout << "Size: " << numbers.size() << endl;
     if(numbers.empty())
     {
          cout << "Vector is empty\n";
     }
     else
     {
          cout << "Vecotr is not empty\n";
     }
     cout << "Vector [0] is : " << numbers[0] << endl;
     cout << "Element at(0) is: " << numbers.at(0) << endl;
     cout << "Front: " << numbers.front() << endl;
     cout << "Back: " << numbers.back() << endl;
     numbers.clear();
     cout << "Size: " << numbers.size() << endl;




     return 0;
}    */

#include <iostream>
using namespace std;

class Student
{
   public:
     string Name;
     int Age;
     char Genfer;
     float ProgrammingGrade;

};

int main()
{
     int luckyNumbers[5] = {1, 3, 4, 13, 21};
     Student s1;
     s1.Name = "Saldina"
     return 0;
}




















