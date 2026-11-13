//Proc22.
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
//Обчислення об'єму V та площі S
void CylinderVH(double r, double h, double& V, double& S) {
    V = PI * r * r * h;
    S = 2 * PI * r * (r + h);
}
int main() {
    for (int i = 1; i <= 3; ++i) {
        double r, h, V, S;
        cout << "Циліндр " << i << " — введіть радіус r та висоту h: ";
        cin >> r >> h;
        CylinderVH(r, h, V, S);
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
    for (int i = 1; i <= 3; ++i) {
        double x1, y1, x2, y2;
        cout << "Прямокутник " << i << " введіть x1, y1, x2, y2: ";
        cin >> x1 >> y1 >> x2 >> y2;     
        cout << "Площа S = " << RectS(x1, y1, x2, y2) << "\n\n";
    }
    return 0;
}

//Integer29.
#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cout << "Введіть цілі додатні числа A, B, C: ";
    cin >> A >> B >> C;
    // Кількість квадратів вздовж сторін A та B
    int countA = A / C;
    int countB = B / C;
    // Загальна кількість квадратів
    int totalSquares = countA * countB;
    // Площа незайнятої частини
    int freeArea = (A * B) - (totalSquares * C * C);
    cout << "Кількість квадратів: " << totalSquares << endl;
    cout << "Площа незайнятої частини: " << freeArea << endl;
    return 0;
}
