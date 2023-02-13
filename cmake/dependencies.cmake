# MIT License 
# Copyright (c) 2018-Today Michele Adduci <adduci@tutanota.com>
#
# Dependencies

# Required for Testing
if(BUILD_TESTING)
  find_package(doctest REQUIRED)
endif()

find_package(GTest REQUIRED)

# Optional Dependency, doesn't trigger error if missing
find_package(OpenSSL)