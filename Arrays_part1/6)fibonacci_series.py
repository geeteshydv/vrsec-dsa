Solution 1-:
Steps-:
1)using recusrion 
2)adding previous two values is current values.

int nthFibonacci(int n)
{
        if(n==1 || n==0)
        return n;
        return nthFibonacci(n-1)+nthFibonacci(n-2);
}


Solution 2-:
Steps-:

CPP Code-:
int mod=1000000007;
int nthFibonacci(int n)
{
        if(n==0 || n==1) return n;
        int a=0;
        int b=1;
        int c;
        for(int i=2;i<=n;i++)
        {
            c=(a+b)%mod;
            a=b;
            b=c;
        }
        return c;
}

Python Code-:
class Solution:
    def nthFibonacci(self, n: int) -> int:
        mod = 1000000007  # Define the modulus
        if n == 0:
            return 0
        elif n == 1:
            return 1
        
        a, b = 0, 1  # Initialize the first two Fibonacci numbers
        
        for _ in range(2, n + 1):
            c = (a + b) % mod  # Calculate the next Fibonacci number
            a = b  # Update a to the last Fibonacci number
            b = c  # Update b to the current Fibonacci number
        
        return b  # Return the n-th Fibonacci number


Solution 3-:
Steps-:

Code-:
int mod=1000000007;
int nthFibonacci(int n)
{
       int f[n+1];
       f[0]=0;
       f[1]=1;
       for(int i=2;i<=n;i++)
       {
           f[i]=(f[i-1]+f[i-2])%mod;
       }
       return f[n];
}


Python Code-:
class Solution:
    def nthFibonacci(self, n: int) -> int:
        mod = 10**9 + 7  # Define the modulus
        if n == 0:
            return 0
        elif n == 1:
            return 1
        
        f = [0] * (n + 1)  # Create a list to store Fibonacci numbers
        f[0] = 0
        f[1] = 1
        
        for i in range(2, n + 1):
            f[i] = (f[i - 1] + f[i - 2]) % mod  # Compute Fibonacci with modulus

        return f[n]