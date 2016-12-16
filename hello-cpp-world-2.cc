#include <iostream>
#include "time.h"
#include <stdlib.h>

int run_1st();
int lotto_1st;
    


int main() {
    srand(time(NULL));
  int x;
    for(int i=0;i<6;i++){
        
  x=run_1st();
  std::cout << x;
}

}
int run_1st()
{ 
    
 int randomNumber1 = rand() % 10;
    
    return randomNumber1;
}

//tesssssssssss