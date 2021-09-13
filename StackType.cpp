// Implementation file for linked StackType
#include "StackType.h"


template <class T>
StackType<T>::StackType()	// Class constructor.
{
  topPtr = nullptr;
}

template<class T>
StackType<T>::~StackType() {

}

template<class T>
bool StackType<T>::IsFull() const {
    return false;
}

template<class T>
bool StackType<T>::IsEmpty() const {
    return false;
}

template<class T>
void StackType<T>::Push(T item) {

}

template<class T>
void StackType<T>::Pop() {

}

template<class T>
T StackType<T>::Top() {
    return nullptr;
}


//
//template <class T>
//void StackType<T>::Push(T newItem)
//// Adds newItem to the top of the stack.
//// Stack is bounded by size of memory.
//// Pre:  Stack has been initialized.
//// Post: If stack is full, FullStack exception is thrown;
////       else newItem is at the top of the stack.
//{
//	if (IsFull())
//		throw FullStack();
//  else
//  {
//    NodeType* location;
//    location = new NodeType;
//    location->info = newItem;
//    location->next = topPtr;
//    topPtr = location;
//  }
//}
//
//template <class T>
//void StackType<T>::Pop()
//// Removes top item from Stack and returns it in item.
//// Pre:  Stack has been initialized.
//// Post: If stack is empty, EmptyStack exception is thrown;
////       else top element has been removed.
//{
//  if (IsEmpty())
//    throw EmptyStack();
//  else
//  {
//    NodeType* tempPtr;
//    tempPtr = topPtr;
//    topPtr = topPtr->next;
//    delete tempPtr;
//  }
//}
//
//template <class T>
//T StackType<T>::Top()
//// Returns a copy of the top item in the stack.
//// Pre:  Stack has been initialized.
//// Post: If stack is empty, EmptyStack exception is thrown;
////       else a copy of the top element is returned.
//{
//  if (IsEmpty())
//    throw EmptyStack();
//  else
//    return topPtr->info;
//}
//

//
//template <class T>
//bool StackType<T>::IsFull() const
//// Returns true if there is no room for another T
////  on the free store; false otherwise.
//{
//  NodeType* location;
//  try
//  {
//    location = new NodeType;
//    delete location;
//    return false;
//  }
//  catch(std::bad_alloc exception)
//  {
//    return true;
//  }
//}
//
//template <class T>
//StackType<T>::~StackType()
//// Post: stack is empty; all items have been deallocated.
//{
//  NodeType* tempPtr;
//
//  while (topPtr != NULL)
//  {
//    tempPtr = topPtr;
//    topPtr = topPtr->next;
//    delete tempPtr;
//  }
//}
//
//template <class T>
//bool StackType<T>::IsEmpty() const
//{
//  return (topPtr == NULL);
//}