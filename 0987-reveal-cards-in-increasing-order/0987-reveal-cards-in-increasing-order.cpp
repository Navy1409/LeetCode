


class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& q) {
        sort(q.begin(), q.end());
        int n = q.size();
        vector<int> v(n);
        deque<int> indices;
        
        // Prepare a deque with initial indices
        for (int i = 0; i < n; ++i) 
            indices.push_back(i);
        
        // Assign cards to the revealed deck
        for (int card : q) {
            v[indices.front()] = card; // Assign card to the next revealed position
            indices.pop_front(); // Remove the used index
            
            if (!indices.empty()) { // Move the next available index to the end
                indices.push_back(indices.front());
                indices.pop_front();
            }
        }
        
        return v;
    }
};