/*
Given co-ordinates of a source point(x1,y1), determine if it is possible to reach the destination point,
(x2,y2). From any point (x,y), only two types of moves are allowed: (x+y,y) or (x,y+x). Return true if
it is possible else false...
*/

/*
Ip: (2,10)->(26,12)
Op: true
Exp: (2,10)->(2,12)->(14,12)->(26,12) is a valid path
*/

#include<bits/stdc++.h>
using namespace std;

bool isReachable(int sx, int sy, int dx, int dy) {
    // base case
    if(sx>dx || sy>dy)
        return false;
    if(sx==dx && sy==dy)
        return true;

    return (isReachable(sx+sy), sy, dx, dy) || isReachable(sx,(sy+sx), dx, dy);
}