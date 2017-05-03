#ifndef __ENTITY_H__
#define __ENTITY_H__
#include <python2.7/Python.h>
#include <string>
#include "game.h"
#include "dataloader.h"

class Entity
{
public:
    Entity(std::string, int);
    ~Entity();
    std::string m_name;
    std::string m_pythIdentifier;
	int m_id;
	void update();
	void onDeath();
	void onCollision(std::string);
	void onSpawn();
    std::string getTexture();
};

#endif
