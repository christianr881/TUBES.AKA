procedure bubblesort(A : list of sortable items)
    n := lenght(A)
    repeat
        swapped := false
        for i := to n-1 inclusive do 
            /* if this pair is out of order
*/
            if A[i-1] > A[i] then
                /* swap them and remember
something changed */
                swap(A[i-1], A[i])
                swapped := true
            end if
        end for 
    until not swapped
endprocedure