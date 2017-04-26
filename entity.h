#ifndef __ENTITY_H__
#define __ENTITY_H__
#include <python2.7/Python.h>
#include <string>
#include "game"

class Entity
{
	Entity(string);
	~Entity();
	public:
	string m_name, m_pythIdentifier;
	int m_id;
	void update();
	void onDeath();
	void onCollision();
	string getTexture();
}

#endif
