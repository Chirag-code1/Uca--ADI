int nthFibonacciTerm(int n, int m){
    // Complete the given function
  int a=0, b=1, c;
  if(n == 0)
    return a % m;
  if(n == 1)
    return b % m;
  for(int i=2; i<=n; i++){
    c = (a+b)%m;
   	a = b;
    b = c;
  }
  return c;
}
