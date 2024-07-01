/* 方法1暴力 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = 0;j<i;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return {j,i};
                }
            }
        }

        return {};
        
    }
};

//方法二哈希表法
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> heap;
        /* 哈希表方法
        用哈希表第一次扫描,如果target-nums[i]在哈希表中,返回
        否则,将数据存入哈希表中 */
        for(int i = 0;i<nums.size();i++)
        {
            int t = target-nums[i];
            if(heap.count(t))
            {
                return {i,heap[target-nums[i]]};
            }
            heap[nums[i]] = i;
        }

        return {};
        
    }
};