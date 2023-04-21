## Summary  
Count how many times each finger is pressed within a song. 

## Strategy  
Use `vector<pair<int,bool>>` to store {press_cnt,status}, status=1->button pressed by last node.  
If the button was not pressed but is pressed now, update press_cnt and status=1.  
If the button was pressed but released now, status=0.  
**Use `getline` instead of `cin`** for the possible empty song.  

## Technique    
`cin.ignore()`  
`vector<pair<int,bool>>`  