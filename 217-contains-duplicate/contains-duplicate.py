class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        l=set()
        for i in nums:
            if l and i in l:
                return True
            l.add(i)
        return False