#include <stdio.h>
#include <math.h>
bool isPrime(int x){
    for (int i = 2; i < ceil(pow(x,0.5)); i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int primes_to_calc = 1000000;

    for (int i = 2; i < primes_to_calc; i++){
        if(isPrime(i)){
            printf("%i\n", i);
        }
    }
    return 0;
}