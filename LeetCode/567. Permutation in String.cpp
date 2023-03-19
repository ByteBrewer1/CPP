// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

class Solution{
    private:
        bool checkEqual(int a[26], int b[26]){
            for(int i = 0; i < 26; i++){
                if(a[i] != b[i]){
                    return false;
                }
        }
        return true;
    }


    public:
    bool checkInclusion(string s1, string s2){
        // Mapping
        int count1[26] = {0};

        for(int i = 0; i < s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // traverse s2 with s1 size window

        int i=0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // running for first window
        while(i < windowSize && i < s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1, count2)){
            return true; 
        }

        // else

        while (i < s2.length())
        {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;
            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            i++;


            if(checkEqual(count1, count2)){
                return 1;
            }
        }
        return 0;
    }
        
};









// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         unordered_map< char, int >mp;    //Use hashmap to store the frequencies of all the characters present in string s1.
//         for(auto it : s1){
//             mp[it]++;
//         }
//         int count = mp.size();         //Use the count variable to see if all of the characters in the map have the same frequency, indicating that an anagram has been found.
//         int i = 0, j = 0;
//         int k = s1.size();             //Window Size
//         while(j < s2.size()){
//             if(mp.find(s2[j]) != mp.end()){      //If a character is found that already exists in the map, reduce its frequency by one.
//                 mp[s2[j]]--;
//                 if(mp[s2[j]] == 0){     //If the frequency of a specific character on the map is 0, it means that all occurrences of that character is found inside the current window size.
//                     count--;
//                 }
//             }
//             if(j-i+1 < k){
//                 j++;
//             }
//             else if(j-i+1 == k){
// 				if(count == 0){    //Anagram found 
// 					return true;  
// 				}
//                 if(mp.find(s2[i]) != mp.end()){  //Check if that character is present in the map while sliding the window, then increase its frequency by one, as we decreased its frequency when we first met it while crossing the window.
//                     mp[s2[i]]++;
//                     if(mp[s2[i]] == 1){
//                         count++;
//                     }
//                 }
//                 i++;
//                 j++;
//             }
//         }
//         return false;
//     }
// };