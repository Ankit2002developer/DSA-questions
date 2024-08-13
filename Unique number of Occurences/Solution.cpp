class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        // Create a map to store the number of occurrences of each number
        map<int, int> num_occurrences;
        
        // Iterate through the array and update the map
        for (int num : arr) {
            num_occurrences[num]++;
        }
        
        // Create a set to store the number of occurrences
        // A set will only allow unique values, so we can use it
        // to check if the number of occurrences is unique
        set<int> occurrences;
        
        // Iterate through the map and update the set
        for (auto it = num_occurrences.begin(); it != num_occurrences.end(); it++) {
            occurrences.insert(it->second);
        }
        
        // Return whether the set's size is the same as the map's size
        // If so, then the number of occurrences must be unique
        return occurrences.size() == num_occurrences.size();
    }
};
