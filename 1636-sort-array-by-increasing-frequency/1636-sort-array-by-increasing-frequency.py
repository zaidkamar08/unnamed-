class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        count=Counter(nums);
        def Custom_sort(n):
             return (count[n],-n);

       
        nums.sort(key=Custom_sort);
        return nums;
        