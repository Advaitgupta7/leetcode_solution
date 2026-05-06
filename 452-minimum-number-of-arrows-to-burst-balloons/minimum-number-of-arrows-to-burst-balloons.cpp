class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        if(points.size() == 0)
            return 0;

        // Sort according to ending point
        sort(points.begin(), points.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        int arrows = 1;

        long long end = points[0][1];

        for(int i = 1; i < points.size(); i++) {

            // Need new arrow
            if(points[i][0] > end) {
                arrows++;
                end = points[i][1];
            }
        }

        return arrows;
    }
};