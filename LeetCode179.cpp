class Solution {
public:
    static bool compare(string &x, string &y) {
        string a = x+y;
        string b = y+x;

        return a > b;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> vc;

        for( auto x : nums) {
            vc.push_back(to_string(x));
        }

        sort(vc.begin(),vc.end(),compare);
        string ans = "";

        for(auto x : vc) {
            ans += x;
        }

        while(ans[0] == '0' and ans.size() > 1) {
            ans.erase(ans.begin());
        }

        return ans;
    }
};
