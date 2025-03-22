#include "Rotate.h"

int main() {
    int rows = 3, cols = 2;
    Rotate rv(rows, cols, 100);

    cout << "Original matrix:\n";
    rv.PrintDisplay();

    rv.Rotate90();
    cout << "Matrix after 90 degree rotation:\n";
    rv.PrintDisplay();

    rv.Rotate180();
    cout << "Matrix after 180 degree rotation:\n";
    rv.PrintDisplay();

    return 0;
}
