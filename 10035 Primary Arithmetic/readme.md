## Summary    
Count the number of carry operations for integers A,B.  

## Strategy  
Insert 0 in front of the number with fewer digits until both integers have the same number of digits.  
Calculate from the last digit and count if the sum>=10.  
**Pay attention to the output.**  
No carry **operation.**  
1 carry **operation.**  
N carry **operations.**    

## Technique  
`str.insert(start_pos,length,'char')`  
`(str[i]-'0')`  change from **ascII** to **int**  
  