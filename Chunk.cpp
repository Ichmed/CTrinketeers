#include <iostream>
#include <string>
#include "chunk.hpp"
using namespace std;

/*class ChunkManager
{
	int range;
	
        Chunk chunks[3][3][3];
	
	void shiftGrid(int x, int y, int z)
	{		
	}
	
	Chunk loadChunk(int x, int y, int z)
	{
                Chunk c();
                c.load(x, y, z);
	}
	
        void unloadChunk(Chunk &c, int x, int y, int z)
	{
                c->Chunk::save(x, y, z);
		delete c;
	}
};*/

void Chunk::load(int x, int y, int z)
{
        //Check if Chunk exists on disk
        FILE * data = fopen(createChunkFilePath(x, y, z).c_str(), "r+");
        //If yes load the chunk and apply aging
        if(data)
        {
                //load data
        }
        //Else Create New Chunk
        fclose(data);
}
	
void Chunk::age(int currentAge)
{
        //Calcuate age distance
        //Change Geography
        //Age exisitng entities
        //Create new entities
        //Set lastAge = currentAge
}
		
void Chunk::save(int x, int y, int z)
{
}


string createChunkFilePath(int x, int y, int z)
{
        //Creates the name of a FILE containing the chunk data at X/Y/Z
        string path ("./data/") /*+= Game.getCurrentGame().getName()*/;
        path += to_string(x) += "x";
        path += to_string(y) += "x";
        path += to_string(z) += ".ctc";
        return path;
}
