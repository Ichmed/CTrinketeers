#include <iostream>

class Chunk
{
	int lastAge;
	
	void load(String s)
	{
		//Check if Chunk exists on disk
		//If yes load the chunk and apply aging
		//Else Create New Chunk
	}
	
	void age(int currentAge)
	{
		//Calcuate age distance
		//Change Geography
		//Age exisitng entities
		//Create new entities
		//Set lastAge = currentAge
	}
	
	void unload(String s)
	{
		//Save Chunk to disk
		//Call destructor
	}
	
	String createFileName(int x, int y, int z)
	{
		//Creates the name of a FILE containing the chunk data at X/Y/Z
	}
}
