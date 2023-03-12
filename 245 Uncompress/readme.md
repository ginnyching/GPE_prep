## Summary  
Given an uncompressed file, turn it into compress file following certain rules.  

## Strategy  
Use `vector` to store the words.   
Becareful: If the word has occured before, **do not** erase its past occurrence in the vector.  

## Technique  
`vector.insert(position,value)`, `vector.erase(position)` from \<vector\>   

 
This code gets the identical output at udebug but somehow got WA on UVa.  
If anyone could find the problem, I would really appreciate it
