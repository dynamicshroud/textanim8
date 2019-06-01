#include <vector>
#include <thread>
#include <chrono>
#include <ncurses.h>
#include "frame.hh"
#include "anim.hh"

void initRender()
{
    initscr();
    noecho();
    cbreak();
}

void renderFrame(Frame& frame)
{
    clear();
    for(int row = 0; row <= 50; row++)
        for(int col = 0; col <= 50; col++)
        {
            mvaddch(row, col, frame.data[col][row]);
        }
    std::this_thread::sleep_for(std::chrono::seconds(1));    
    refresh();
}

int main(int argc, char** argv)
{

    initscr();
    noecho();
    cbreak();
        
    std::vector<Frame> _frames = cmdexec();
    
    for(auto f: _frames)
        renderFrame(f);
    getch();
    endwin();
        
    return 0;
}