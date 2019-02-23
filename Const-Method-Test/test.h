#pragma once

#include <iostream>

using namespace std;

class Dummy {

    private:
        int val;

    public:

        Dummy() {
            val = 1;
        }

        void ChangeVal(Dummy& d, int x) const {
            d.SetVal(x);
        }

        void SetVal(int val) {
            this->val = val;
        }

        int GetVal() { return val; }
};