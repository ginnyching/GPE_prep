## Summary  
Find the maximum bottles of Cola that you can drink with the given number you bought.  
Every 3 empty bottle can exchange for 1 bottle of Cola.  

## Strategy  
- method 1: Recursively find the number of bottle you can exchange for until there are less than 3 bottles.  
  - If there are 2 bottles left, you can borrow 1 empty bottle and exchange for another one.
  - If there is only 1 bottle left, it will be the last bottle you have.  
  Add up all the bottles you can have.
- method 2: Borrow 1 bottle for every 2 bottles of Cola.  
For each 2 Cola and 1 empty bottle, you can exchange for 1 new Cola which can be return back later.  