## Summary   
Kill the i-th prime person on the i-th round until there is only 1 survivor.  
## Strategy   
Use `iterator` to keep track of starting person of each round.  
## Technique  
`vector<type>::iterator it=vec.begin()`  
`iterator` is a pointer, subtract `vec.begin()` from `it` if calculation is needed.  
Use `*it` to show the value of `it` in vector.