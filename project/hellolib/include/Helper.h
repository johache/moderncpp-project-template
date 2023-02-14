// Copyright JOH 2023

#ifndef __JOH_HELPER_H__
#define __JOH_HELPER_H__

// Includes from this project

// Includes from other non-standard projects

// STD Includes
#include <string>
#include <vector>

namespace JOH {

  class Helper {
    
  public:
    static std::string toStr(std::vector<std::string> v);
    static std::string toStr(std::vector<int> v);
    
  private:

  };
}

#endif /* __JOH_HELPER_H__ */
