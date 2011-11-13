/*
 * Compile: g++ -g -lcln fak.cpp -o fak
 */
#include <cln/integer.h>//for mathematical operations on arbitrarily long integers
#include <cln/integer_io.h>//for input/output of long integers
#include <iostream>

cln::cl_I fakultaet(int i) {
  if(i == 1) return 1;
  return fakultaet(i - 1) * i;
}
 
int main( ) {
  int n = 100;
  cln::cl_I product = fakultaet(n) ;
  std::cout << "The result of " << n << "! is " << product << " !\n" ;
  return 0 ;
}