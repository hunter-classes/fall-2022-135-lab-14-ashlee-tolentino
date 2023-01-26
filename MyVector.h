#pragma once

template <class T>
class MyVector{
private:
  int max_size;
  int current_size;
  T *array;

public:
  MyVector();
  int size();
  int capacity();
  bool empty();
  void push_back(T item);
  void pop_back(int n);
  void pop_back();
  void clear();
  T &operator[] (int i);
};

#include "MyVector.cxx"
