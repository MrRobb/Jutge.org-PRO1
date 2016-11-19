#include <iostream>

using namespace std;

int sum_of_digits(int n,int sum = 0){
  if (n <= 0) return sum;
  else {
    sum += n%10;
    return sum_of_digits(n/10,sum);
  }
}

bool is_prime(int n, int i = 2){
  if (n <= 1) return false;
  else if(i*i < n){
    if(n%i == 0) return false;
    else return is_prime(n,i+1);
  }
  return true;
}

bool is_perfect_prime(int n){
  if (n == n%10){
    return (is_prime(n));
  } else if (is_prime(n)){
    return is_perfect_prime(sum_of_digits(n));
  } else {
    return false;
  }
}

int main() {

}