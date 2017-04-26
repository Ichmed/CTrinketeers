#include "entity.hpp"

Entity::Entity(string name): m_name(name)
{
	id = Game.getId();
	m_pythIdentifier = m_name + m_id;
	Database.createEntity(name, id);
}

Entity::~Entity()
{
	PyRun_SimpleString("del " + name + id);
}

Entity::update()
{
	PyRun_SimpleString(m_pythIdentifier + ".update()");
}

