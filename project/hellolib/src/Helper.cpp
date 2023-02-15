// Copyright JOH 2022

// This class's header
#include "Helper.h"

// Includes from this project

// Includes from other non-standard projects

// STD Includes

using namespace std;

namespace JOH {

string toStr(vector<string> v) {
  if (v.empty()) return "[]";
  
  string ans = "[";
  for (auto& s: v)
    ans += s + ", ";
  
  ans.erase(ans.length() - 2);
  ans += "]";
  
  return ans;
}

string toStr(vector<int> v) {
  if (v.empty()) return "[]";
  
  string ans = "[";
  for (auto& s: v)
    ans += to_string(s) + ", ";
  
  ans.erase(ans.length() - 2);
  ans += "]";
  
  return ans;
}

}
