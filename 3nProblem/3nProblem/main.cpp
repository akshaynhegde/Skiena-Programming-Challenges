#include <iostream>
#include <stdlib.h>
using namespace std;

bool isEven(unsigned long number);
int iterationsToreachOne(unsigned long number);

int main(int argc, char **argv) {   
    unsigned long x, y;
    
    if (argc > 2) {
      x = atol(argv[1]);
      y = atol(argv[2]);
    }
    
    if (x > y) {
      x = x ^ y;
      y = x ^ y;
      x = x ^ y;
    }
   
    int mostIterations = 0;
    for (int i=x;i <= y;i++) {
      int iterations = iterationsToreachOne(i);
    if (iterations > mostIterations)
      mostIterations = iterations;
  }
  
  cout << x << " " << y << " " <<  mostIterations;
  return 0;
}

int iterationsToreachOne(unsigned long number) {
     int count = 0;
      while (number != 1) {
	if (isEven(number)) {
	  //do n/2
	  number = number/2;
	}
      else {
	//do 3n+1
	number = 3*number+1;
      }
      count++;
    }
    return count+1;
}

bool isEven(unsigned long number) {
  if (!(number % 2))
    return true;
  else 
    return false;
}