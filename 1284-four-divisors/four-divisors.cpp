class Solution {
public:
    int getDivisorSum(int num){
        int i = 1;
        int sum = 0;
        int count = 0;
        while(i * i <= num){
            if(num%i ==0){
                sum +=i;
                count++;
                if(i != num/i){
                    sum += (num/i);
                    count++;
                }
            } 
            if(count > 4) return 0;
            i++;
        }
        return (count == 4) ? sum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += getDivisorSum(nums[i]);
        }
        return sum;
    }
};