// Copyright JOH 2022

// This class's header
#include "Helper.h"

// Includes from this project

// Includes from other non-standard projects

// STD Includes

using namespace std;

namespace JOH {

string Helper::toStr(vector<string> v) {
  string ans = "[";
  for (auto& s: v)
    ans += s + ", ";
  
  ans.erase(ans.length() - 2);
  ans += "]";
  
  return ans;
}


string Helper::toStr(vector<int> v) {
  string ans = "[";
  for (auto& s: v)
    ans += to_string(s) + ", ";
  
  ans.erase(ans.length() - 2);
  ans += "]";
  
  return ans;
}

}
