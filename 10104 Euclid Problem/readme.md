## Summary  
Find the gcd **D** for integers A and B, and the smallest pair of **(X,Y)** that satisfies AX+BY=D.  

## Strategy  
From **Bézout's lemma** it shows that (X,Y) can be found recursively.  
![image](https://user-images.githubusercontent.com/71360064/232981195-1dac6600-c9d5-4a77-9fc4-b4a6b27e6fae.png)  
Derivation:  
$gcd(A,B)=gcd(A–B∗\lfloor\frac{A}{B}\rfloor,B)$  

## Technique  
Recursive function calling.  
