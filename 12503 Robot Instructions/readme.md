## Summary  
Predict the final position of the robot after given unstructions.  

## Strategy  
Use  `str.length()` to separate "LEFT", "RIGHT", and "SAME AS".  

## Technique  
`str.substr()`, `str.find_last_of()` from \<string\>  
`cin.ignore()` before `getline(cin,str)` to avoid counting EOF.  
