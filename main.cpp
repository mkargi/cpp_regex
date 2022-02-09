#include <regex>
#include <algorithm>
#include <iostream>
#include <string>

int main()
{
  std::string s = "this is a regex test";

  std::regex re(R"(\w+)");
  std::sregex_iterator next(s.begin(), s.end(), re);
  std::sregex_iterator end;
  
  while(next != end)        
  {
      std::smatch match = *next;
      std::cout << match.str() << std::endl;
      next++;
  } 
};