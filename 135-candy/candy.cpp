class Solution {
public:
    int candy(vector<int>& ratings, int cnt = 0) {
        int size = ratings.size();
        vector<int> arr(size, 1);

        for (int i = 1; i < size; i++) 
            if (ratings[i] > ratings[i - 1])
                arr[i] = arr[i - 1] + 1;
        
        for (int i = size - 1; i > 0; i--) {
            if (ratings[i - 1] > ratings[i])
                arr[i - 1] = max(arr[i] + 1, arr[i - 1]);
            cnt += arr[i - 1];
        }
        return cnt + arr[size - 1];
    }
};