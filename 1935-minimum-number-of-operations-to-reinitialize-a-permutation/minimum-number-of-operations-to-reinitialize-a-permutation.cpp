class Solution {
public:
    int reinitializePermutation(int n) {
        
        vector<int> perm(n), original(n), arr(n);

        // Initial permutation
        for(int i = 0; i < n; i++) {
            perm[i] = i;
            original[i] = i;
        }

        int count = 0;

        while(true) {

            // Perform operation
            for(int i = 0; i < n; i++) {

                if(i % 2 == 0)
                    arr[i] = perm[i / 2];
                else
                    arr[i] = perm[n / 2 + (i - 1) / 2];
            }

            count++;

            // Update perm
            perm = arr;

            // Check if back to original
            if(perm == original)
                break;
        }

        return count;
    }
};