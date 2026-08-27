class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int ans=0;int n = people.size();
        int left=0,right=n-1;

        while(left<=right){
            int sum = people[left]+people[right];

            if(sum <= limit){left++;}
                right--;
                ans++;
        }
        return ans;
    }
};