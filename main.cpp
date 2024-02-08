#include <iostream>
#include <cmath>
#define SIZZE 10000000
#ifdef TYPE_FLOAT
using T = float;
#else
using T = double;
#endif

int main(){
    T* array ;
    array = (T*)malloc(SIZZE*sizeof(T));
    const T period = 2 * M_PI;

    T step =  period / SIZZE;
    for (size_t i = 1; i <= SIZZE; i++)
    {
        array[i-1] = std::sin(i*step);
    }
    T sum = 0 ; 
    for (size_t i = 0; i < SIZZE; i++)
    {
        sum+=array[i];
    }
    std::cout << sum;
    
    return 0;
}
