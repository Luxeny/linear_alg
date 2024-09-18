#include <iostream>
#include <math.h>

using namespace std;

// Определяет величину потока через стенки разной формы
int main() {
    
    float lambda, R1, t1, R2, t2, F, L;
    float Q1, Q2, Q3;

    lambda = 59.034;
    R1 = 0.252;
    t1 = 264.0;
    R2 = 0.293;
    t2 = 43.0;
    F = 0.53;
    L = 1.0;

    // Плоская форма
    Q1 = (((lambda * F) / (R2 - R1)) * (t1 - t2));
    
    // Цилиндрическая форма
    Q2 = (((2 * M_PI * lambda * L) / (log(R2/R1))) * (t1 - t2));
    
    // Шаровая форма
    Q3 = (((4 * M_PI * lambda) / ((1 / R1) - (1 / R2))) * (t1 - t2));
    
    cout << Q1 << "; " << Q2 << "; " << Q3 << endl;
    
    // Приблизительное округление
    cout.precision(6);
    cout.setf(ios::fixed);
    cout << Q1 << "; " << Q2 << "; " << Q3;

}
