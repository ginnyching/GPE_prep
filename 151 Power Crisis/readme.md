## Summary  
Due to power shortage, elextricity in areas of the country will be turned down every **m** counts.  
Starting from the area labeled as **1**, find the smallest **m** that for which area **13** is the last area being turned down.  

## Strategy  
Since it always starts with **1**, the problem can be seem as a **Josephus problem**.  
Current area: 2,3,4,5,6,7,8,9,10,11,12,**13**,14...N  
Equivalent as: 0,1,2,3,4,5,6,7,8,9,10,**11**,12...N-2  
Therefore, the problem of finding the smallest **m** that makes **13** the last remaining in **N-1** areas.  
Can be seen as finding the samllest **m** that makes **11** the last remaining in **N-1**  
=> **f(N-1,m)=11**  
From the picture below, **f(10,3)** we can see that after first operation and reordering, the remaining problem is equivalent to **(f(9,3)+3)%10**.  
Eventually, we will find that **f(N,m)=(f(N-1,m)+m)%N**, calling it recusively and we can get the last remaining f(N-1,m).  
 <img width="540" alt="9450853f3b4efd7b32e21e8523bc" src="https://user-images.githubusercontent.com/71360064/231338984-586933a2-cd45-47e6-9307-5cca504ad01b.png">  
<img width="540" alt="4f5a0674f05435e77f5c2f805ca1" src="https://user-images.githubusercontent.com/71360064/231339006-d8eba7d3-e032-420e-9ae5-a1b4e617471d.png">  
pictures from https://www.readfog.com/a/1634186784902582272[https://www.readfog.com/a/1634186784902582272]  
## Technique  
none  
