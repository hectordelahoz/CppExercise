#ifndef __STACK_H__
#define __STACK_H__

#include <ostream>
#include <iostream>
#include <stdlib.h>

using namespace std;

namespace datastructure{
namespace stack{

template <typename T>
class Stack{
  public:
    Stack();
    Stack(const T &);
    ~Stack();
    bool push(const T &);
    T getTop();
    T pop();
    unsigned int getSize();
    bool isEmpty();
  private:
    unsigned int size = 0;
    int lenght = 0;
    T *array = nullptr;
};


template<typename T>
Stack<T>::Stack(){
  lenght = 2;
  array = new T[lenght];
}

template<typename T>
Stack<T>::Stack(const T &value){
  lenght = 2;
  array = new T[lenght];
  array[size] = value;
  size = 1;
}

template<typename T>
Stack<T>::~Stack(){
  delete [] array;
}

template <typename T>
bool Stack<T>::isEmpty(){
  if(size)
    return false;
  return true;
}

template <typename T>
unsigned int Stack<T>::getSize(){
  return size;
}

template <typename T>
bool Stack<T>::push(const T &value){
  if(size == (lenght - 1)){
    T copyArray[lenght];
    for(int i =0; i < lenght; i ++){
      copyArray[i] = array[i];
    }
    delete [] array;
    lenght = size*2;
    array = new T[lenght];
    for(int i =0; i < lenght/2; i ++){
      array[i] = copyArray[i];
    }
  }
  if (!array)
    return false;

  array[size] = value;
  ++size;
  return true;
}

template <typename T>
T Stack<T>::pop(){
  if(!size)
    return NULL;
  T top = array[size -1];
  --size;
  return top;
}

template <typename T>
T Stack<T>::getTop(){
  if(!size)
    return NULL;

  return array[size-1];
}

}
}
#endif
