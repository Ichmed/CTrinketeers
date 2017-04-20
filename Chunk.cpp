#include <iostream>

class ChunkManager
{
	int range;
	
	Chunk[][][] chunks;
	
	void shiftGrid(int x, int y, int z)
	{		
	}
	
	Chunk loadChunk(int x, int y, int z)
	{
		Chunk c = new Chunk();
		c.load(x, y, z);
	}
	
	void unloadChunk(Chunk c, int x, int y, int z)
	{
		c.save(x, y, z);
		delete c;
	}
}

class Chunk
{
	int lastAge;
	
	void load(int x, int y, int z)
	{
		//Check if Chunk exists on disk
		FILE * data = fopen(createFileName(x, y, z), "r+");
		//If yes load the chunk and apply aging
		if(data)
		{
			//load data
		}			
		//Else Create New Chunk
		fclose(data);
	}
	
	void age(int currentAge)
	{
		//Calcuate age distance
		//Change Geography
		//Age exisitng entities
		//Create new entities
		//Set lastAge = currentAge
	}
		
	void save(int x, int y, int z)
	{
	}
	
	String createFileName(int x, int y, int z)
	{
		//Creates the name of a FILE containing the chunk data at X/Y/Z
		String path = "./data/" += Game.getCurrentGame().getName() += "/";
		path += string::to_string(x) += "x";		
		path += string::to_string(y) += "x";
		path += string::to_string(z) += ".ctc";
		return path;
	}
}
