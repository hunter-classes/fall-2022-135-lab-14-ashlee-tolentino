/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab14

This program works with Template classes.
*/

#include <iostream>
#include "MyVector.h"

int main()
{
  MyVector<int> vect;
  std::cout << vect.size() << std::endl; // 0
  std::cout << vect.capacity() << std::endl; // 5

  vect.push_back(2);
  vect.push_back(4);
  vect.push_back(6);
  vect.push_back(8);
  vect.push_back(10);

  std::cout << vect.size() << std::endl; // 5

  vect.pop_back();
  std::cout << vect.size() << std::endl; // 4

  vect.pop_back(2);
  std::cout << vect.size() << std::endl; // 2

  std::cout << std::boolalpha << vect.empty() << std::endl; // false

  vect.clear();
  std::cout << std::boolalpha << vect.empty() << std::endl; // true

  std::cout << vect.size() << std::endl; // 0

  vect.push_back(9);
  vect.push_back(8);
  vect.push_back(7);
  vect.push_back(6);
  vect.push_back(5);
  vect.push_back(4);
  vect.push_back(3);

  std::cout << vect.size() << std::endl; // 7
  std::cout << vect.capacity() << std::endl; // 10

  vect[8] = 3;
  std::cout << vect[8] << std::endl; // 3
  
  return 0;
}
