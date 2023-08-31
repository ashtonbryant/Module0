// file: lecture_09/example.h
//

// make sure definitions are only made once
//
#ifndef ISIP_EXAMPLE
#define ISIP_EXAMPLE

// system include files
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// DEFINE A FUNCTION. MUST BE THE SAME AS IN THE FUNCTION FILE
//
void arginter(float& num1,float& num2, char **& argv,int argc);

// class definition 
//
class Lock{

public:

  // variables
  //
  int m_d;
  int n_d;
  int * v_d;
  
  // constructor 
  // 
  Lock(int marg,int narg){
    
    // set internal variables
    //
    m_d = int(marg);
    n_d = int(narg);

    // create vector to store numbers
    //
    v_d = new int[n_d];

    // print
    //
    //fprintf(stdout,"constructor finished\n");

    // exit constructor
    //
  }

  // deconstructor 
  //
  ~Lock(){

    // clean up
    //
    m_d = 0;
    n_d = 0;

    delete [] v_d;

    // deconstructor finished
    //
    //fprintf(stdout,"object destroyed :)\n");

    // exit deconstructor
    //
  }

  // methods
  //
  void recursive(int digit);
  
};


// end of include file
//
#endif

