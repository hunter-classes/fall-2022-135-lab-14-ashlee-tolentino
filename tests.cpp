#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"
#include <iostream>

MyVector<int> vect;

TEST_CASE("Size"){
  CHECK(vect.size() == 0);
}

TEST_CASE("Capacity"){
  CHECK(vect.capacity() == 5);
}

TEST_CASE("Push Back"){
  vect.push_back(10);
  vect.push_back(8);
  vect.push_back(20);
  CHECK(vect[0] == 10);
  CHECK(vect[1] == 8);
  CHECK(vect[2] == 20);
}

TEST_CASE("Increasing Capacity"){
  vect.push_back(1);
  vect.push_back(11);
  vect.push_back(6);
  CHECK(vect.size() == 6);
  CHECK(vect.capacity() == 10);
}

TEST_CASE("Pop Back"){
  vect.pop_back(4);
  CHECK(vect.size() == 2);
  vect.pop_back(1);
  CHECK(vect.size() == 1);
}

TEST_CASE("Empty"){
  CHECK(vect.empty() == false);
  vect.clear();
  CHECK(vect.empty() == true);
}

TEST_CASE("Overloading"){
  vect[8] = 22;
  vect[2] = 31;
  vect[4] = 5;
  CHECK(vect[8] == 22);
  CHECK(vect[2] == 31);
  CHECK(vect[4] == 5);
}
