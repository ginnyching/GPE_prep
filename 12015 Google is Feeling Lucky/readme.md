## Summary  
Given 10 web pages and their relevance for each case, find the web pages with most relevance and output by order.  

## Strategy  
Use `vector<pair<string,int>>` to store web pages and relevance.  

## Technique  
`max=*max_element(it begin,it end,compare)` find the max element in vector.    
`max.first`=web page, `max.second`=relevance.  