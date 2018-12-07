# Data Structures Using C

## Data Structure

**Data structures are used to store data in a computer in an organized form.**

In C language Different types of data structures are; Array, Stack, Queue, Linked List, Tree.

* Array: Array is collection of similar data type, you can insert and deleted element form array without follow any order.

* Stack: Stack work on the basis of Last-In-First-Out (LIFO). Last entered element removed first.

* Queue: Queue work on the basis of First-In-First-Out (FIFO). First entered element removed first.

* Linked List: Linked list is the collection of node, Here you can insert and delete data in any order.

* Tree: Stores data in a non linear form with one root node and sub nodes.

## Algorithm

An algorithm is a finite set instruction, which is written for solve any problem. Algorithm is not the complete code or program, it is just like a English language.

List of Algorithms and programs:

* Searching:

    * Linear Search

    * Binary Search

* Sorting:

    * Bubble Sort

    * Insertion Sort

    * Selection Sort


<hr>

# Details : A) Data Structures

## 1) Stack

A stack is an **Abstract Data Type (ADT)**, commonly used in most programming languages. It is named stack as it behaves like a real-world stack, for example – a deck of cards or a pile of plates, etc.

Stack Example
A real-world stack allows operations at one end only. For example, we can place or remove a card or plate from the top of the stack only. Likewise, Stack ADT allows all data operations at one end only. At any given time, we can only access the top element of a stack.

This feature makes it **LIFO** data structure. *LIFO stands for **Last-in-first-out**.* Here, the element which is placed (inserted or added) last, is accessed first. In stack terminology, insertion operation is called PUSH operation and removal operation is called POP operation.

### Basic Operations on Stack

Stack operations may involve initializing the stack, using it and then de-initializing it. Apart from these basic stuffs, a stack is used for the following two primary operations −

    **push()** : Adding new data to the stack

    **pop()** : Reomoving data from the stack

**1) PUSH**

The process of putting a new data element onto stack is known as a Push Operation. Push operation involves a series of steps −

Step 1 − Checks if the stack is full.

Step 2 − If the stack is full, produces an error and exit.

Step 3 − If the stack is not full, increments top to point next empty space.

Step 4 − Adds data element to the stack location, where top is pointing.

Step 5 − Returns success.

*If the linked list is used to implement the stack, then in step 3, we need to allocate space dynamically.*

**Algorithm for Stack Push Operation**

```c
begin procedure push: stack, data

   if stack is full
      return null
   endif
   
   top ← top + 1
   stack[top] ← data

end procedure
```

**2) POP**

Accessing the content while removing it from the stack, is known as a Pop Operation. In an array implementation of pop() operation, the data element is not actually removed, instead top is decremented to a lower position in the stack to point to the next value. But in linked-list implementation, pop() actually removes data element and deallocates memory space.

A Pop operation may involve the following steps −

Step 1 − Checks if the stack is empty.

Step 2 − If the stack is empty, produces an error and exit.

Step 3 − If the stack is not empty, accesses the data element at which top is pointing.

Step 4 − Decreases the value of top by 1.

Step 5 − Returns success.

**Algorithm for Pop Operation**
A simple algorithm for Pop operation can be derived as follows −

```c
begin procedure pop: stack

   if stack is empty
      return null
   endif
   
   data ← stack[top]
   top ← top - 1
   return data

end procedure
```

## QUEUE

Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.

Queue Example
A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops.

### Basic Operations on Queue

Queue operations may involve initializing or defining the queue, utilizing it, and then completely erasing it from the memory. Here we shall try to understand the basic operations associated with queues −

    **enqueue()** − add (store) an item to the queue.

    **dequeue()** − remove (access) an item from the queue.

**1)Enqueue Operation**

Queues maintain two data pointers, front and rear. Therefore, its operations are comparatively difficult to implement than that of stacks.

The following steps should be taken to enqueue (insert) data into a queue −

Step 1 − Check if the queue is full.

Step 2 − If the queue is full, produce overflow error and exit.

Step 3 − If the queue is not full, increment rear pointer to point the next empty space.

Step 4 − Add data element to the queue location, where the rear is pointing.

Step 5 − return success.

Insert Operation
Sometimes, we also check to see if a queue is initialized or not, to handle any unforeseen situations.

Algorithm for enqueue operation

```c
procedure enqueue(data)      
   
   if queue is full
      return overflow
   endif
   
   rear ← rear + 1
   queue[rear] ← data
   return true
   
end procedure
```

**2) Dequeue Operation**

Accessing data from the queue is a process of two tasks − access the data where front is pointing and remove the data after access. The following steps are taken to perform dequeue operation −

Step 1 − Check if the queue is empty.

Step 2 − If the queue is empty, produce underflow error and exit.

Step 3 − If the queue is not empty, access the data where front is pointing.

Step 4 − Increment front pointer to point to the next available data element.

Step 5 − Return success.

Remove Operation
Algorithm for dequeue operation

```c
procedure dequeue
   
   if queue is empty
      return underflow
   end if

   data = queue[front]
   front ← front + 1
   return true

end procedure
```

## Linked List

A linked list is a sequence of data structures, which are connected together via links.

Linked List is a sequence of links which contains items. Each link contains a connection to another link. Linked list is the second most-used data structure after array. Following are the important terms to understand the concept of Linked List.

Link − Each link of a linked list can store a data called an element.

Next − Each link of a linked list contains a link to the next link called Next.

LinkedList − A Linked List contains the connection link to the first link called First.


### Types of Linked List

Following are the various types of linked list.

**Simple Linked List** − Item navigation is forward only.

**Doubly Linked List** − Items can be navigated forward and backward.

**Circular Linked List** − Last item contains link of the first element as next and the first element has a link to the last element as previous.

### Basic Operations

Following are the basic operations supported by a list.

Insertion − Adds an element at the beginning of the list.

Deletion − Deletes an element at the beginning of the list.

Display − Displays the complete list.

Search − Searches an element using the given key.

Delete − Deletes an element using the given key.
