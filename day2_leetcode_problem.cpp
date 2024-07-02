// 1637. Widest Vertical Area Between Two Points Containing No Points


// Given n points on a 2D plane where points[i] = [xi, yi], Return the widest vertical area between two points such that no points are inside the area.

// A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The widest vertical area is the one with the maximum width.

// Note that points on the edge of a vertical area are not considered included in the area.




// Input: points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
// Output: 3
 

// Constraints:

// n == points.length
// 2 <= n <= 105
// points[i].length == 2
// 0 <= xi, yi <= 109





class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        sort(p.begin(),p.end());

        int maxi=INT_MIN;
        for(int i=1;i<p.size();i++)
        {
          maxi=max(maxi,p[i][0]-p[i-1][0]);
        }
        return maxi;
    }
};