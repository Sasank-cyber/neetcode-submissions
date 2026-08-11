class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0;
        int r = h.size()-1;
        int l_max = 0;
        int r_max = 0;
        int water_trapped = 0;
        while(l < r){
            l_max = max(l_max,h[l]);
            r_max = max(r_max,h[r]);
            if(l_max <= r_max){
                int water_trap = l_max - h[l];
                water_trapped += max(0, water_trap);
                l++;
            }
            else{
                int water_trap = r_max - h[r];
                water_trapped += max(0, water_trap);
                r--;
                
            }
    }
    return water_trapped;
        
    }
};
