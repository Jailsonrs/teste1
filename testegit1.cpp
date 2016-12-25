#include <cstdio>
#include <iostream>
 using namespace std;


int main(){
  /*APRENDENDO PONTEIROS */

  int num1 = 2;
  int* pnum1 = NULL;
  pnum1 = &num1;
  
  cout << pnum1 << endl;
  cout << *pnum1 << endl;
  
  
 
  return 0;
}
