# gaussSeidel
Implementation of Gauss Seidel approximation to solve a system of equations with 3 variables

**Input :**  
5 -1 1 10  
2 4 0 12  
1 1 5 -1  

**Output :**  
2.555556  
1.722222  
-1.055556  

**Explanation**

This is to take Jacobi’s Method one step further. Where the better solution is x = (x1, x2, … , xn), if x1(k+1) is a better approximation to the value of x1 than x1(k) is, then it would better that we have found the new value x1(k+1) to use it (rather than the old value that isx1(k)) in finding x2(k+1), … , xn(k+1). So x1(k+1) is found as in Jacobi’s Method, but in finding x2(k+1), instead of using the old value of x1(k) and old values of x3(k),…, xn(k), we then use the new value x1(k+1) and the old values x3(k), … , xn(k), and similarly for finding x3(k+1), … , xn(k+1). This process to find the solution of the given linear equation is called the Gauss-Seidel Method

The Gauss–Seidel method is an iterative technique for solving a square system of n (n=3) linear equations with unknown x.

![1369](https://user-images.githubusercontent.com/96608251/178092526-6d36820a-6fec-4dcf-a048-4e629d019f47.png)
