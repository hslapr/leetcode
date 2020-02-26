

int subtractProductAndSum(int n){
    int product, sum, cur;
    
    product = 1;
    sum = 0;

    while (n > 0){
        cur = n % 10;
        product *= cur;
        sum += cur;
        n /= 10;
    }

    return product - sum;
}

