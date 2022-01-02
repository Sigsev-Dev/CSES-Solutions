class Solution {
public:
    
	#pragma GCC optimize("02")
    
	static bool check(string& s){
        stack < char > paren;
        for(auto& c : s){
            if(c == '(') paren.push('(');
            else if(c == ')' && !paren.empty()) paren.pop();
            else return false;
        }
        return paren.empty();
    }
     
    vector < string > generateParenthesis(int n) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
        vector < string > ans;
        string s(n, '('), add(n, ')');
        s += add;
        do {
            if(check(s)) ans.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        return ans;
    }
};
