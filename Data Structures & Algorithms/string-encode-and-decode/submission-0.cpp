
class Solution {
public:
    string encode(vector<string>& strs) {
        string result = "";

        for (string& s : strs) {
            result += to_string(s.size()) + "#" + s;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find the separator
            while (s[j] != '#') {
                j++;
            }

            // Get length of the next string
            int length = stoi(s.substr(i, j - i));

            // Extract the original string
            result.push_back(s.substr(j + 1, length));

            // Move to the next encoded string
            i = j + 1 + length;
        }

        return result;
    }
};
