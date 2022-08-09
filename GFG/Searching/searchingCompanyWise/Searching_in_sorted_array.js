 
    function searchInSorted(arr, N, K)
    {
        //your code here
         let l = 0, r = N-1;
        // calculate mid
        let m = l + Math.floor((r-l) / 2);
    
        // binary search to find the element in sorted array
    	while (l <= r) { 
    	    // calculate mid on each iteration
    		m = l + Math.floor((r-l) / 2);
    
    		// Check if x is present at mid 
    		if (arr[m] == K) 
    			return 'ha bhai hai element available'; 
    
    		// If x greater, ignore left half 
    		if (arr[m] < K) 
    			l = m + 1; 
    
    		// If x is smaller, ignore right half 
    		else
    			r = m - 1; 
    	} 
    
    	// if we reach here, then element was 
    	// not present 
    	return -1; 
    }

    let arr = [ 1, 5, 9, 7, 3 ];
    let N = 5;
    let K = 9;

    let res = searchInSorted(arr , N , K);

    document.write(res);