#include "entity.h"

Entity::Entity(std::string name, int id): m_name(name), m_id(id)
{
    m_pythIdentifier = m_name + std::to_string(m_id);
    if(!DataLoader::instance.data[name].wasInitiated) DataLoader::instance.initEntityClass(m_name);

    //create coresponding python object
    PyRun_SimpleString((m_pythIdentifier + " = " + name + "()\n").c_str());
}

Entity::~Entity()
{
    //delete coresponding python object
    PyRun_SimpleString(("del " + m_pythIdentifier + "\n").c_str());
}

void Entity::update()
{
    PyRun_SimpleString((m_pythIdentifier + ".update()\n").c_str());
}

void Entity::onDeath()
{
    PyRun_SimpleString((m_pythIdentifier + ".onDeath()\n").c_str());
}

void Entity::onSpawn()
{
    PyRun_SimpleString((m_pythIdentifier + ".onSpawn()\n").c_str());
}

void Entity::onCollision(std::string other)
{
    PyRun_SimpleString((m_pythIdentifier + ".onCollision(" + other + ")\n").c_str());
}

