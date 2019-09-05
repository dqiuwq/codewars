/*
 * Author: dqiuwq
 * Date: 6/9/2019
 */
#include <algorithm>
#include <cctype>

bool XO(const std::string& str)
{      
  // create tmp to store converted lc str
  std::string tmp = "";
  for (char c : str) tmp += std::tolower(c);
  // count no of repeated char
  int x = std::count(tmp.begin(), tmp.end(), 'x');
  int o = std::count(tmp.begin(), tmp.end(), 'o');
  // return result
  if (x == o) return true;
  else return false;
}