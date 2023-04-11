## Summary   
Kill the i-th prime person on the i-th round until there is only 1 survivor.  
## Strategy   
Use `iterator` to keep track of starting person of each round.  

In general, Josephus Problem can be written as $(f(n,m)+m)$ \% $(n+1)$  
<img width="540" alt="9450853f3b4efd7b32e21e8523bc" src="https://user-images.githubusercontent.com/71360064/231241375-34e6353d-6e02-4460-9eac-95eeb5c1ae3e.png">

<img width="540" alt="4f5a0674f05435e77f5c2f805ca1" src="https://user-images.githubusercontent.com/71360064/231238435-d2f6e9e7-7574-42e8-bdcf-e01d148924bc.png">

f(10,3)=(f(9,3)+3)%10  
f(9,3)=(f(8,3)+3)%9  
……  
f(2,3)=(f(1,3)+3)%2  
f(1,3)=0  

## Technique  
`vector<type>::iterator it=vec.begin()`  
`iterator` is a pointer, subtract `vec.begin()` from `it` if calculation is needed.  
Use `*it` to show the value of `it` in vector.
