
class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        bool alice = true;

        while (stones > 0) {
            if (n < stones) {
                return !alice;
            }

            n -= stones;
            alice = !alice;
            stones--;
        }

        return !alice;
    }
};
