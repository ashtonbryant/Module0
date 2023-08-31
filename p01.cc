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


