#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol53;

/*
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
]
*/

tuple<vector<int>, int>
testFixture1()
{
  auto input = vector<int>{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  return make_tuple(input, 6);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.maxSubArray(get<0>(f)) << endl;
}

main()
{
  test1();
  return 0;
}