## Summary  
Count the frequency of each character and print the ones with prime number appearances.  

## Strategy  
Construct `vector` containing prime numbers smaller than 2002.  
Store each character and its frequency using `map`.  
Print the key in `map` whose value is in `vector`.  

## Technique  
`map.count(ch)` to find if the key is in `map` if the position **does not** matters.  
Use `m.find(ch) != m.end()` if you want to iterate to it.  
  
**There are no such  as `vector.find`!**  
Use `find(vec.begin(),vec.end(),value)!=vec.end()` for finding in vector.  