#include <iostream>
#include <string>
int substr(std::string str, std::string substr){
  int count = 0;
  int index = 0;
  for (index = 0; index < str.size(); index++){
    if (str[index] == substr[0]){
      if (str[index+1] == substr[1]){
        if (str[index+2] == substr[2]){
          count += 1;
        }
      }
    }
  }
  return count;
}

int main(){
  std::cout<<substr("heyheyhey", "hey")<<'\n';
  std::cout<<substr("helloellheyelloyellu", "ell")<<'\n';
  return 0;
}
