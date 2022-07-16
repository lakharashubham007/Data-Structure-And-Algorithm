function reverseNum(n) {
    let rev_num = 0;//take a variable
    while(n > 0)//condition
        {
            rev_num = rev_num * 10 + n % 10;
            n = Math.floor(n / 10);
        }
        return rev_num;
}

// NOTE: Please do not modify this function
    let n = 1231;
    let result = reverseNum(n);
    console.log(result);