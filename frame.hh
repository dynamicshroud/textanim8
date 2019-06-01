#ifndef FRAME_HH
#define FRAME_HH

struct Frame
{
    std::vector< std::vector<char> > data;
};

void crFrame(std::vector<Frame>&);
bool mdFrame(Frame&, int, int, char);
void rmFrame(std::vector<Frame>&, int);

#endif