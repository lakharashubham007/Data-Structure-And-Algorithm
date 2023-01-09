function countSubStr(str,n)
{
    let m = 0; // Count of 1's in input string

    // Traverse input string and count of 1's in it
    for (let i = 0; i < n; i++)
    {
        if (str[i] == '1')
            m++;
    }

    // Return count of possible pairs among m 1's
    return  Math.floor(m*(m - 1) / 2);
}

// Driver program to test the above function
let str = "1111";
let n = str.length;
console.log(countSubStr(str, n));