/*
Given 2 int values, return true if one is negative and one is positive.
Except if the parameter "negative" is true,
then return true only if both are negative.
*/

#include <iostream>

bool posNeg(int a, int b, bool negative){
  if(a >= 0){
    if (b >= 0){
      return false;
    }else if(b < 0){
      if (negative == false){
        return true;
      }else if(negative == true){
        return false;
      }
    }
  }
  if(a < 0){
    if (b >= 0){
      if(negative == false){
        return true;
      }else if(negative == true){
        return false;
      }
    }else if(b < 0){
      if(negative == true){
        return true;
      }else if(negative == false){
        return false;
      }
    }
  }
}

int main(){
  std::cout<<posNeg(1, -1, false)<<'\n';
  std::cout<<posNeg(-1, 1, false)<<'\n';
  std::cout<<posNeg(-4, -5, true)<<'\n';
  std::cout<<posNeg(1, 1, true)<<'\n';
  std::cout<<posNeg(1, -2, true)<<'\n';
  return 0;
}
