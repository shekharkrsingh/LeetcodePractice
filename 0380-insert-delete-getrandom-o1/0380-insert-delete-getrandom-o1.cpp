#include <cstdlib>
#include <unordered_set>

using namespace std;

class RandomizedSet {
    unordered_set<int> nums;

public:
    RandomizedSet() {}

    bool insert(int val) { return nums.insert(val).second; }

    bool remove(int val) { return nums.erase(val) > 0; }

    int getRandom() {
        if (nums.empty()) {
            return -1;
        }
        auto it = nums.begin();
        advance(it, rand() % nums.size());
        return *it;
    }
};
