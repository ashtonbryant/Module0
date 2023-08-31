// file: 
//

// local include files
//

#include "p01.h"

// method: main
//
// main program starts here
//

int main(int argc, char** argv) {
  
  // Variables 
  //
  float m;
  float n;

  // command line 
  //
  arginter(m, n, argv, argc);	
	
  // exit if m or n > 4
  //
  if(m > 4 || n > 4){

      // Print and exit
      //	
      fprintf(stdout,"m or n is greater than 4\n");
      exit(1);			 
	
  }
						

  // declare class
  //
  Lock lock(m,n);
  
  // call function
  //
  lock.recursive(1);
  
  // exit gracefully
  //
  
  return 0;
}


