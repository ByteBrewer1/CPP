// AUTHOR :: RAHUL MISTRY
// DATE   :: 20/03/2023


#include <bits/stdc++.h> 
int slotScore(string &original, string &guess)
{
    int n = original.size();
    int perfectHits = 0, pseudoHits = 0;0
    unordered_map<char, int> freq; // to keep the frequency of each color in original string

    // calculate perfect hits
    for(int i=0; i<n; i++){
        if(original[i] == guess[i]){ // if color at the same index matches
            perfectHits++;
        } else { // otherwise, update the frequency of the color in original string
            freq[original[i]]++;
        }
    }

    // calculate pseudo hits
    for(int i=0; i<n; i++){
        if(original[i] != guess[i] && freq[guess[i]] > 0){ // if color is not a perfect hit and exists in original string
            pseudoHits++;
            freq[guess[i]]--; // decrement the frequency of the color in original string
        }
    }

    int totalPoints = perfectHits*2 + pseudoHits;
    return totalPoints;
}
