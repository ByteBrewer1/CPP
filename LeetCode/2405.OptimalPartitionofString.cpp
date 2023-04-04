class Solution
{
public:
    int partitionString(string s)
    {
        map<char, int> m;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            if (m[s[i]] > 1)
                m.clear(), i--, count++;
        }
        return count + 1;
    }
};