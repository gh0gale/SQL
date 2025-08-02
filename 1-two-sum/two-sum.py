class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i, num in enumerate(nums):
            num2 = target - num
            if num2 in dict:
                return [dict[num2],i]
            dict[num] = i
        return []
        