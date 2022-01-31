int countDistinctWayToClimbStair(long long n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    return countDistinctWayToClimbStair(n-1)+
        countDistinctWayToClimbStair(n-2);
}