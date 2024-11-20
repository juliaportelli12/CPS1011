//The difference between the stack frame usage of the iterative and recursive implementations of the factorial lies in how memory is allocated and used for function calls
//The iterative version is more stack-efficient and should be preferred in situations where 'n' can be large. 
//The recursive version is prone to stack overflow for large 'n'.

#include <stdio.h>

long fib_iter(int n){
    if (n==0) return 0;
    if (n==1) return 1;

    long prev2 = 0;
    long prev1 = 1;
    long current = 0;

    for(int i=2; i<=n; i++){
        current = prev1+prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}