/**
* This is an example animation written for ta8.
* If anything, this is made for analyzing.
* Use with caution.
*
*			~ vortex
*/

// -- INCLUDE -- //
#include <vector>
#include "anim.hh"
#include "frame.hh"
// -- INCLUDE -- //

std::vector<Frame> cmdexec()
{
    std::vector<Frame> frames;
    
    for(int i = 0; i <= 50; i++)
        crFrame(frames);
    
    for(int i = 0; i <= 49; i++)
    {    
        mdFrame(frames[0], i, 0, '@');
        mdFrame(frames[0], 49, i, '@');
        mdFrame(frames[0], i, 49, '@');
        mdFrame(frames[0], 0, i, '@');
    }
    
    mdFrame(frames[0], 25, 25, 'h');
    mdFrame(frames[0], 26, 25, 'e');
    mdFrame(frames[0], 27, 25, 'y');
    
    
    return frames;    
}