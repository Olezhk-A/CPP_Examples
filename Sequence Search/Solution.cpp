#include <iostream>
#define ERROR() {\
            cout << "[error]" << endl;\
            return 0;\
        }
#define COMPARE() if(maxLen < currLen)\
            {\
                maxLen = currLen;\
                pos = currPos - currLen;\
            }
#define GET(elem) if(!(cin >> elem)) ERROR()
#define CYCLE while(--N){\
        GET(curr)\
        if(curr < prev){\
            COMPARE()\
            currLen = -1;\
        }\
        currPos++;\
        currLen++;\
        prev = curr;\
        }
#define INPUT int N;\
double prev, curr;\
cin >> prev;\
N = prev;\
if(prev != N || N < 2)\
    ERROR()\
GET(prev)\
int currLen = 0, currPos = 1, maxLen = 0, pos;

using namespace std;
int main()
{
    INPUT
    CYCLE
    COMPARE()
    maxLen != 0 ? cout << maxLen+1 << ' ' << pos << endl : cout << 0 << endl;
    return 0;
}