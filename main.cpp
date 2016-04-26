#include <iostream>

using namespace std;

class Fraction
{
private:
    // bool is_set; //is set?
    int upper_part;
    int lower_part;
public:
    Fraction(int upper_part, int lower_part)
    {
        if (lower_part == 0)
        {
            cout << "denominator can be equal to zero" << endl;
        }
        this.upper_part = upper_part;
        this.lower_part = lower_part;
    }

    void

    // operation +
    // operation -
    // operation /
    // operation *
    // ==
    // to string?
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
