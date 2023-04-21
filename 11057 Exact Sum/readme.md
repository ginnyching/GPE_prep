## Summary  
Find 2 integer from given numbers which their sum is exactly the same as **m** and has the minimum price difference.   

## Strategy  
Use `vector` to store the price and sort by acsending orders.  
Find the exact sum using for loop and store the prices and price difference in another `vector`.  
Sort by difference and print the price with minimum price difference.  

## Technique  
`struct`  
`sort(vec.begin(),vec.end(),cmp)`  