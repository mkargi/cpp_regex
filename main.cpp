#include <regex>
#include <algorithm>
#include <iostream>
#include <string>


// match[0] : whole match
// match[1] : first group
int main()
{
  // iterate and search 
  std::string s = "   fly me   to   the moon  ";
  std::regex re("(\\w+)[ ]*$");
  std::sregex_iterator next(s.begin(), s.end(), re);
  std::sregex_iterator end;
  
  while(next != end)        
  {
      std::smatch match = *next;
      std::cout << match[1].str() << std::endl;
      next++;
  } 

  // single match search
  std::string s2 = "   fly me   to   the moon  ";
  std::regex re2("(t\\w+)");
  std::smatch sm;
  if( std::regex_search(s2, sm, re2) )
  {
    std::cout << sm[1].str() << std::endl;
  } 
};