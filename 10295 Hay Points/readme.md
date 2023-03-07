## Summary  
Give a Hay Points dictionary of multiple pairs of a word and a dollar value.   
Add up the corresponding value of the appearances of the words in dictionary as salary in the following discriptions.  
The discriptions are terminated by a single line of period.   
Retun the salary for each discription.  

##  Strategy    
- method_1  
Using `vector<pair<string,int>>` to store the dictionary.  
Read in the discriptions line by line and store the complete discription.  
Find the salary by counting the appearances of each word in the dictionary.  
- method_2  
Using `map<string,int>` to store the dictionary.  
Read in the discriptions word by word and sum up the salary at the same time.  

## Technique    
- method_1  
`vector<pair<>>` from \<vector\>  
`str.find()`, `str.compare()`, and `str.erase()` from \<string\>  
- method_2  
`map<>` from \<map\>  
