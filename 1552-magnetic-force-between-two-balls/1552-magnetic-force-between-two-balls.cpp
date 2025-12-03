class Solution {
public:
    bool isPossible(int mid, int n, int k, vector<int>& stalls) {
        int coord = stalls[0];
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (stalls[i] - coord >= mid) {
                coord = stalls[i];
                cnt++;
            }
        }
        return cnt >= k;
    }

    int maxDistance(vector<int>& stalls, int k) {
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls.back() - stalls[0];
        int res = -1;
        while (low <= high) {
            int mid = (low + high) >> 1;
            if (isPossible(mid, n, k, stalls)) {
                res = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
};