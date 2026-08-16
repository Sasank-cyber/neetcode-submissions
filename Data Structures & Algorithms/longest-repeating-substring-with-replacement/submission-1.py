class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = {}
        l = 0
        r = 0
        final = 0
        # windows = 0
        while(r<len(s)):
            # window = (r - l) + 1
            count[s[r]] = 1 + count.get(s[r], 0)
            if(((r-l+1)-max(count.values())) <= k):
                final = max((r-l+1), final)
            
            else:
                count[s[l]] -= 1
                l+=1
            
            r+=1
        

        return final
                