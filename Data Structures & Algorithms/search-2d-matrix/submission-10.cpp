class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int cols = matrix[0].size();

        int len = cols*n;

        int l=0,r=len-1;
        int m = (l+r)/2;

        while(l<=r){
            m = (l+r)/2;
            if(matrix[m/cols][m%cols] < target){l=m+1;}
            else if(matrix[m/cols][m%cols] > target){r = m-1;}
            else{return true;}
        }
        return false;
    }
};
