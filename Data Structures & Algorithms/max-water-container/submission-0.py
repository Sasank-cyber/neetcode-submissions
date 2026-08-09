class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l = 0
        r = len(heights)-1
        wat = []
        while(l < r):
            water = min(heights[r],heights[l]) * (r-l)
            if(min(heights[l],heights[r]) == heights[l]):
                l = l + 1
            else:
                r = r-1
            wat.append(water)
        return max(wat)
        