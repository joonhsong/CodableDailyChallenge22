class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        keep = {}
        for i in nums:
            if i not in keep:
                keep[i] = 0
            keep[i] += 1
        if max(keep.values())==1:
            return False
        return True
