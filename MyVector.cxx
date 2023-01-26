/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab14

This program works with Template classes.
*/

#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(){
    array = new T[5];
    current_size = 0;
    max_size = 5;
}

template <class T>
int MyVector<T>::size(){
    return current_size;
}

template <class T>
int MyVector<T>::capacity(){
    return max_size;
}

template <class T>
bool MyVector<T>::empty(){
    if (current_size == 0){
        return true;
    }
    else {
        return false;
    }
}

template <class T>
void MyVector<T>::push_back(T item){
    if (current_size < max_size){
        array[current_size] = item;
        current_size++;
    }
    else {
      T *array2 = new T[max_size * 2]; //reallocate
      for (int i = 0; i < current_size; i++){
	array2[i] = array[i];
      }
      array2[current_size] = item;
      current_size++;
      max_size = max_size * 2;
      delete[] array;
      array = array2;
      delete[] array2;
      array2 = nullptr;
    }
}

template <class T>
void MyVector<T>::pop_back(int n){
    for (int i = current_size; i > current_size - n; i--){
        array[i - 1] = 0;
    }
    current_size = current_size - n;
}

template <class T>
void MyVector<T>::pop_back(){
    array[current_size - 1] = 0;
    current_size = current_size - 1;
}

template <class T>
void MyVector<T>::clear(){
    array = new T[5];
    current_size = 0;
    max_size = 5;
}

template <class T>
T &MyVector<T>::operator[] (int i){
    return array[i];
}
