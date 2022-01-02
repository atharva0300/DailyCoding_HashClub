class Solution {
public:
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
unordered_map<string, int> mappings;
vector<string>result;
int minSum = INT_MAX;

    for (int i = 0; i < list1.size(); i++) {
        mappings.emplace(list1[i], i);
    }
    
    for (int i = 0; i < list2.size() && i <= minSum; i++) {
        auto it = mappings.find(list2[i]);
        if (it != mappings.end()) {
            int sum = i + it->second;
            if (minSum > sum) {
                result.clear();
                result.emplace_back(it->first);
                minSum = sum;
            } else if (minSum == sum) {
                result.emplace_back(it->first);
            }
        }
    }
    
    return result;
}
};
