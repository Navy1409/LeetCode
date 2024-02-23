class Solution {
public:
     int findCheapestPrice(int n, std::vector<std::vector<int>>& flights, int src, int dst, int k) {
        std::vector<int> distance(n, std::numeric_limits<int>::max());
        distance[src] = 0;

        for (int i = 0; i <= k; ++i) {
            std::vector<int> temp(distance);
            for (const auto& flight : flights) {
                int u = flight[0], v = flight[1], w = flight[2];
                if (distance[u] != std::numeric_limits<int>::max() && distance[u] + w < temp[v]) {
                    temp[v] = distance[u] + w;
                }
            }
            distance = temp;
        }

        return (distance[dst] == std::numeric_limits<int>::max()) ? -1 : distance[dst];
    }
};