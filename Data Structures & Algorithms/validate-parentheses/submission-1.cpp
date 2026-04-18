class Solution {
   public:
    bool isValid(string s) {
        stack<char> pancakes;
        for (const auto& c : s) {
            if (c == '[') {
                pancakes.push('[');
            } else if (c == '{') {
                pancakes.push('{');
            } else if (c == '(') {
                pancakes.push('(');
            } else if (c == ')') {
                if (pancakes.size() == 0) return false;
                char cake = pancakes.top();
                if (cake != '(') return false;
                pancakes.pop();

            } else if (c == '}') {
                if (pancakes.size() == 0) return false;
                char cake = pancakes.top();
                if (cake != '{') return false;
                pancakes.pop();

            } else if (c == ']') {
                if (pancakes.size() == 0) return false;
                char cake = pancakes.top();
                if (cake != '[') return false;
                pancakes.pop();
            }
        }
        return pancakes.size() == 0;
    }
};
