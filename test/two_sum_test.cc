#include "two_sum.h"

TEST(S, Demo) {
  Solution s;
  EXPECT_EQ(s.twoSum(vector<int>({2,7,11,15}), 9), vector<int>({0, 1}));
  EXPECT_EQ(s.twoSum(vector<int>({3,2,4}), 6), vector<int>({1, 2}));
  EXPECT_EQ(s.twoSum(vector<int>({3,3}), 6), vector<int>({0, 1}));
}