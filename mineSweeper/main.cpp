#include <iostream>
using namespace std;

enum squareType { aMine=-1, notAMine=0 };

int main() {
    
  //get the number of line and columns
  int rows, columns;
  cin >> rows >> columns;
  cin.ignore(256,'\n');//ignore all characters until the next new line.

  if (rows > 0 && columns > 0) {
    //construct the 2D array from the field
    int field[rows][columns];
    
    string line;
    
    int i=0,j=0;
    for(i = 0; i < rows; i++) {
      getline(cin,line);
      for(j = 0; j < line.length(); j++) {
	//read chars in the line
	if (j == columns) break;
	char aChar = line[j];
	if(aChar == '*') {
	  //a mine
	  field[i][j] = aMine;
	}
	else if(aChar == '.') {
	  //not a mine
	  field[i][j] = notAMine;
	}
      }
    }
    
	//iterate through the array
      char mineField[rows][columns];
      
      for(int i=0 ; i<rows; i++) {
	for(int j=0 ; j< columns ;j++) {
	  cout<<field[i][j]<<endl;
	    if(field[i][j] == aMine) {
	      //update all non mine square that affect
	      int x = i;
	      int y = j;
	      
	      x = i-1;
	      y = j-1;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }

	      x = i-1;
	      y = j;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }
	      
	      x = i-1;
	      y = j+1;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }
	      
	      x = i;
	      y = j-1;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }
	      
	      x = i;
	      y = j+1;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }
	      
	      x = i+1;
	      y = j-1;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }
	      
	      x = i+1;
	      y = j;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }
	      
	      x = i+1;
	      y = j+1;
	      if(x >= 0 && y >= 0 && x < rows && y < columns) {
		    if(field[x][y] != aMine){
			field[x][y] += 1;
		  }
	      }
	    }
	 }
      }
      
       for(int i=0 ; i<rows; i++) {
	for(int j=0 ; j< columns ;j++) {
	  cout << field[i][j]<<endl;
	}
     }
    }
  return 0;
}