#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(const vector<int>& nums) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        currentSum = currentSum + nums[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << maxSubArray(nums) << '\n';
    return 0;
}
