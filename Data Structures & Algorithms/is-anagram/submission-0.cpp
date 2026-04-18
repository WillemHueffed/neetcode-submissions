class Solution {
public:

    struct mapCounter {
        int c1;
        int c2;
    };

    bool isAnagram(string s, string t) {
        std::unordered_map<char, mapCounter> m;

        for (auto &c : s){
            m[c].c1++;
        }
        for (auto &c : t){
            m[c].c2++;
        }
        for (const auto& [k, v] : m){
            if (v.c1 != v.c2) return false;
        }
        return true;
    }
};
