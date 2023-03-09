## Summary    
Generate the N terms of a sequence from a given codification of the sequence.  
```math
\begin{align*}
&S=\left[n\right]\quad \text{i.e.}\quad S_{i}=n\quad\forall_{i}\in \Bbb{N} \newline \\
&V=\left[m+S\right]\quad \text{i.e.}\quad V_{i}=\begin{cases} m, & i=1 \\ V_{i-1}+S_{i-1}, & i>1 \end{cases} \newline \\  
&V=\left[m*S\right]\quad \text{i.e.}\quad V_{i}=\begin{cases} m \ast S_{1}, & i=1 \\ V_{i-1} \ast S_{i}, & i>1 \end{cases}  
\end{align*}
```
## Strategy    
Find the last occurrence of **"["** which is followed by the original $S$.  
Deal with the input string backward and case **+** and **$\ast$** seperately.  

## Technique    
`str.find_first_of`/`str.find_last_of`, `stoi(str,nullptr,base)`, `str.insert(position, size, value)`, `str.empty()` from `<string>`   

---  

### difference between **find** functions.    
if the key="cat"  
- `str.find`/ `str.rfind`    
Find the exact same string as "cat".  
- `str.find_first_of`/`str.find_last_of`  
Find the first/last id of **any** item in "cat"  
- `str.find_first_not_of`/`str.find_last_not_of`  
Find the first/last id of item that is **not** **any** of "cat".  
