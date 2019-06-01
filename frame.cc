#include <vector>
#include "frame.hh"

void crFrame(std::vector<Frame>& frame_list)
{
    Frame frame;
    
    for(int a = 0; a <= 50; a++)
    {
        std::vector<char> row;
        for(int b = 0; b <= 50; b++)
        {
            row.push_back(' ');
        }
        frame.data.push_back(row);
    }
    
    frame_list.push_back(frame);
}

bool mdFrame(Frame& frame, int xpos, int ypos, char ch)
{
    frame.data[xpos][ypos] = ch;
    
    return (frame.data[xpos][ypos] != ch) ? true : false;
}

void rmFrame(std::vector<Frame>& frame_list, int fpos)
{
    frame_list.erase(frame_list.begin() + (fpos - 1));
}