#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol53;
using namespace std;

/*takeaways
  - use DP to achieve O(n)
*/

int Solution::maxSubArray(vector<int> &nums)
{
  int n = nums.size();
  /* max sum up to nums[i]
     - {...nums[i]}
  */
  auto sum = vector<int>(n);
  sum[0] = nums[0];

  for (auto i = 1; i < n; i++)
  {
    /* If sum[i-1] is negative, it will reduce the sum.
       You will be better off by starting a new subarray
       with nums[i] being the very first element
    */
    sum[i] = max(sum[i - 1] + nums[i], nums[i]);
  }
  /* as the sum will go up and down so
     you need to find the max one among
     them
  */
  return *max_element(sum.begin(), sum.end());
}
