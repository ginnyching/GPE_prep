## Summary    
Generate the N terms of a sequence from a given codification of the sequence.  
$$ S=\left[ n \right] \text{i.e.} S_{i}=n  \forall_{i} \in  \Bbb{N}.$$  
$$ V=\left[m+S\right] \text{i.e.} V_{i}=\begin{cases} m, & i=1 \\ V_{i-1}+S_{i-1}, & i>1 \end{cases} $$  
$$ V=\left[m*S\right] \text{i.e.} V_{i}=\begin{cases} m \ast S_{i}, & i=1 \\ V_{i-1} \ast S_{i}, & i>1 \end{cases} $$    

## Strategy    
Find the last occurrence of **[** which is followed by the original $S$.  



## Technique  
