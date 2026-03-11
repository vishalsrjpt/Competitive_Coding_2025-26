class Solution {
public:
  int minSubarray(vector<int> &nums, int p) {
    int n = nums.size();
    long long totalSum = 0;
    for (int x : nums)
      totalSum += x;
    if (totalSum % p == 0)
      return 0;
    int ans = n;
    for (int i = 0; i < n; i++) {
      long long subSum = 0;
      for (int j = i; j < n; j++) {
        subSum += nums[j];
        if ((totalSum - subSum) % p == 0) {
          ans = min(ans, j - i + 1);
        }
      }
    }
    return ans == n ? -1 : ans;
  }
};
