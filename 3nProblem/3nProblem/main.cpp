#include <iostream>
#include <stdlib.h>
using namespace std;

bool isEven(int number);
int iterationsToreachOne(int number);

int main(int argc, char **argv) {   
    int x, y;
    
    if (argc > 2) {
      x = atoi(argv[1]);
      y = atoi(argv[2]);
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

int iterationsToreachOne(int number) {
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

bool isEven(int number) {
  if (!(number % 2))
    return true;
  else 
    return false;
}