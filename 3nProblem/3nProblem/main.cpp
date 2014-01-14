#include <iostream>
#include <stdlib.h>
using namespace std;

bool isEven(unsigned long number);
int iterationsToreachOne(unsigned long number);

int main() {   
    unsigned long x, y;
    
    while (cin >> x >> y) {
  
    bool swaped = false;
    if (x > y) {
      x = x ^ y;
      y = x ^ y;
      x = x ^ y;
      swaped = true;
    }
   
    int mostIterations = 0;
   
    for (int i=x;i <= y;i++) {
      int iterations = iterationsToreachOne(i);
    if (iterations > mostIterations)
      mostIterations = iterations;
  }
  
  if (swaped)
    cout << y <<' '<< x <<' '<<  mostIterations << endl;
  else
    cout << x <<' '<< y <<' '<<  mostIterations << endl;
    
  }
    
  return 0;
}

int iterationsToreachOne(unsigned long number) {
     int count = 1;
     
     if (!number)
       return 0;
       
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
    return count;
}

bool isEven(unsigned long number) {
  if (!(number % 2))
    return true;
  else 
    return false;
}