#include <iostream>
#include <string>
int main(){
  std::string s = "hello";
  std::cout<<s.size();
  std::cout<<'\n';
  std::cout<<s.substr(0,1)<<'\n';
  std::cout<<s.substr(1,1)<<'\n';
  std::cout<<s[1]<<'\n';

  return 0;
}
