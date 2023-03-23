int getKthLargestElement(vector<int> &list, int k) {
    // Sort the list in descending order
    sort(list.begin(), list.end(), greater<int>());
    
    // Return the kth element
    return list[k-1];
}
