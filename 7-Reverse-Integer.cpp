/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321 

click to show spoilers.
*/
class Solution {
public:
    int reverse(int x) {
        int divise=1;long long target=0;long long temp=1;
        while(x/divise>=10||x/divise<=-10)
        divise*=10;
        while(divise>=1||divise<=-1)
        {
            target+=(x/divise)*temp;
            x=x%divise;
            divise/=10;
            temp*=10;
        }
         return (target<INT_MIN || target>INT_MAX) ? 0 : target;
    }
};
