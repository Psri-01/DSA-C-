1000 = 8 on right shift 0100 = 4 in binary (/2)
  similarly left shift is *2

// Get bit of a digit
  // n=0101 1<<i=0100 so 0101 & 0100 = 0100 -> if n & (1<<i)!=0 then bit is 1
  
#include <iostream>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}
int main()
{
    cout<<getBit(5,2)<<endl;
    return 0;
}

// Set bit of a digit
// n=0101 1<<i=0100 so 0101 | 0100 = 0111 -> if n | (1<<i) then bit is 1

#include <iostream>
using namespace std;
int setBit(int n, int pos)
{
    return (n | (1<<pos));
}
int main()
{
    cout<<setBit(5,1)<<endl;
    return 0;
}

// Clear bit of a digit
// n=0101 1<<i=0100 so ~0100 = 1011 -> 0101 & 1011 = 0001

#include <iostream>
using namespace std;
int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}
int main()
{
    cout<<clearBit(5,2)<<endl;
    return 0;
}

//Update bit
//i.e. clear bit and then sit bit
/* n = 0101
Suppose we need to update bit at position i=1 to 1
1<<i = 0010
~0010 = 1101
0101 & 1101 = 0101
1<<i = 0010
0101 | 0010 = 0111*/

#include <iostream>
using namespace std;
int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}
int updateBit(int n, int pos, int value)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main()
{
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}
