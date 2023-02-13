#include <string>
#include <vector>

#include "hellolib.h"
#include "gtest/gtest.h"

using namespace hello;
using namespace std;

TEST(FactorialTest, HandlesZeroInput) {
  vector<string> v1 = {"eat","tea","tan","ate","nat","bat"};
  vector<string> v2 = {"eat","tea","tan","ate","nat","bat"};

  EXPECT_EQ(v1, v2);
}

int main(int argc, char **argv) {
 ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();

}
