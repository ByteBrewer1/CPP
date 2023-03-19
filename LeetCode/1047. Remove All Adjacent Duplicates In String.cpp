// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

class Solution {
    public:
        string removeDuplicates(string s) {
                string temp="";
                for(int i=0;i<s.length();i++)
                {
                    if(temp.empty())
                    {
                        temp.push_back(s[i]);
                    }
                    
                    else{
                        if(s[i]==temp[temp.size()-1])
                            {
                                temp.pop_back();
                            }
                        else{
                            temp.push_back(s[i]);
                        }
                    }
                }
        return temp;
        }
    };