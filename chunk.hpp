#ifndef __H_chunk__
#define __H_chunk__

#include <string>

class ChunkManager
{
    ChunkManager();
    ~ChunkManager();
    void shiftGrid(int, int, int);
};

class Chunk
{
public:
    Chunk() {}
    ~Chunk();
    int currentAge;
    void save(int, int, int);
    void load(int, int, int);
    void age(int);


};

std::string createChunkFilePath(int, int , int);

#endif
