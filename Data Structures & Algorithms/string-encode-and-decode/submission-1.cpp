class Solution {
public:

    string encode(vector<string>& strs) {
        string out = "";
        for (const auto str : strs){
            int size = str.size();
            string prefix = to_string(size) + "#";
            out.append(prefix);
            out.append(str);
        }
        // cout << out << endl;
        return out;
    }

    vector<string> decode(string s) {
        cout << string(s) << endl;
        vector<string> out; 

        for (int i=0; i<s.size();) {
            string prefixStr = "";
            while (s[i] != '#'){
                prefixStr += s[i];
                i++;
            }
            cout << "Prefix string after while loop: " << prefixStr << endl;
            i++; //iterate over '#'
            int prefix = stoi(prefixStr);
            // i+=2;
            cout << "prefix: " << prefix << endl;;
            string msg;
            for (int j=i; j<i+prefix; j++){
                msg += s[j];
            }
            out.push_back(msg);
            i += prefix;


        }
        return out;
    }
};
