#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Yeh helper function hai jo do sorted arrays se kth smallest element dhoondta hai
    int findKthElement(vector<int>& nums1, int i, vector<int>& nums2, int j, int k) {
        // Agar nums1 khatam ho gaya to directly nums2 ka answer
        if (i >= nums1.size()) return nums2[j + k - 1];
        // Agar nums2 khatam ho gaya to directly nums1 ka answer
        if (j >= nums2.size()) return nums1[i + k - 1];
        // Agar k == 1, matlab bas ek chhota element chahiye, to dono ka min le lo
        if (k == 1) return min(nums1[i], nums2[j]);

        // Half-half divide karte hain
        int midA = INT_MAX;
        int midB = INT_MAX;

        // nums1 se k/2th element lena agar exist karta ho
        if (i + k/2 - 1 < nums1.size()) {
            midA = nums1[i + k/2 - 1];
        }
        // nums2 se k/2th element lena agar exist karta ho
        if (j + k/2 - 1 < nums2.size()) {
            midB = nums2[j + k/2 - 1];
        }

        // Jo chhota hai uske k/2 elements skip kar do
        if (midA < midB) {
            return findKthElement(nums1, i + k/2, nums2, j, k - k/2);
        } else {
            return findKthElement(nums1, i, nums2, j + k/2, k - k/2);
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();

        if (total % 2 == 1) {
            // Odd length → middle ek hi hota hai
            return findKthElement(nums1, 0, nums2, 0, total/2 + 1);
        } else {
            // Even length → do middle hote hain, dono ka average lena hai
            int left = findKthElement(nums1, 0, nums2, 0, total/2);
            int right = findKthElement(nums1, 0, nums2, 0, total/2 + 1);
            return (left + right) / 2.0;
        }
    }
};

 

