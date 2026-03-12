class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mincap = INT_MAX;
        int index = -1;

        for(int i =0; i<capacity.size() ; i++){
            if(capacity[i] >= itemSize && mincap > capacity[i]){
                mincap = capacity[i];
                index = i;
            }
        }

        return index;
    }
};