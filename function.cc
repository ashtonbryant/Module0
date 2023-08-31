// file:
//
// system include files
//
#include "p01.h"

// function: 
//
// arguments:
//
// returns: 
//

void Lock::recursive(int digit){

  // loop across m
  //
  for(int i=0; i<m_d; i++){
    
    // evaluate position
    //
    if(digit == n_d){

      // loop and print vector 
      //
      for(int v = 0; v<(n_d-1); v++){

	// print
	//
	fprintf(stdout,"%d",v_d[v]);

	// exit loop
	//
      }

      // print m
      //
      fprintf(stdout,"%d\n",i);

      // exit if
      //
    }
  
    else{

      // save variable in internal vector
      //
      v_d[digit-1] = i;
    
      // recurse
      //
      recursive(digit+1);

      // exit else
      //
    }

    // exit for loop
    //
  }

  // return
  //
}

void arginter(float& num1,float& num2, char **& argv,int argc){

  // loops through each argument to find
  // m or n
  //
  // assigns the next argument to the corresponding variable
  //
  // m to num1
  // n to num2
  //

  // Check variables
  //

  bool mcheck = false;
  bool ncheck = false;
  
  for(int i = 1; i<argc; i++){
    
    // m check
    //

    if(strcmp(argv[i],"-m") == 0){
      num1 = atof(argv[i+1]);
      mcheck = true;
    }

    // n check
    //

    else if(strcmp(argv[i],"-n") == 0){
      num2 = atof(argv[i+1]);
      ncheck = true;
    }

  }

  // Check for No X or Y
  //

  if(mcheck == false || ncheck == false){
    fprintf(stdout,"No M or N number\n");
    exit(3);
  }
  
  // Exit function
  //
  
}

  
