//Proc22.
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
// Процедура обчислення об'єму V та площі S
void CylinderVH(double r, double h, double& V, double& S) {
    V = PI * r * r * h;
    S = 2 * PI * r * (r + h);
}
int main() {
    // Підставлені значення радіусів (r) та висот (h)
    double r[3] = {2, 4, 6};
    double h[3] = {5, 7, 9};
    for (int i = 0; i < 3; ++i) {
        double V, S;
        CylinderVH(r[i], h[i], V, S); 
        cout << "Циліндр " << i + 1 << " (r = " << r[i] << ", h = " << h[i] << "):" << endl;
        cout << "Об'єм V = " << V << ", Площа S = " << S << "\n\n";
    }
    return 0;
}

//Proc31
#include <iostream>
#include <cmath>
using namespace std;
// Функція обчислення площі прямокутника
double RectS(double x1, double y1, double x2, double y2) {
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    return width * height;
}
int main() {
    // Підставлені координати вершин (x1, y1, x2, y2)
    double coords[3][4] = {
        {1, 2, 5, 6},
        {2, 3, 8, 9},
        {1, 1, 7, 4}
    };
    for (int i = 0; i < 3; ++i) {
        double x1 = coords[i][0];
        double y1 = coords[i][1];
        double x2 = coords[i][2];
        double y2 = coords[i][3];
        cout << "Прямокутник " << i + 1 << " (" << x1 << ", " << y1 << ") та (" << x2 << ", " << y2 << "):" << endl;
        cout << "Площа S = " << RectS(x1, y1, x2, y2) << "\n\n";
    }
    return 0;
}

//Integer29.
#include <iostream>
using namespace std;
int main() {
    int A = 8;
    int B = 7;
    int C = 3;
    // Кількість квадратів вздовж сторін A та B
    int countA = A / C;
    int countB = B / C;
    // Загальна кількість квадратів
    int totalSquares = countA * countB;
    // Площа незайнятої частини
    int freeArea = (A * B) - (totalSquares * C * C);
    cout << "Дано: A = " << A << ", B = " << B << ", C = " << C << endl;
    cout << "Кількість квадратів: " << totalSquares << endl;
    cout << "Площа незайнятої частини: " << freeArea << endl;
    return 0;
}
