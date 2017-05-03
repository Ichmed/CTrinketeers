#ifndef DATALOADER_H
#define DATALOADER_H
#include <string>
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>

class DataContainer
{
    class Value
    {
        std::string m_name;
        std::string m_type;
    public:
        Value(std::string name, std::string type) : m_name(name), m_type(type){}
    };

public:

    bool wasInitiated = false;
    void addValue(std::string val);
    std::string pythCode;
    std::vector<Value> values;
};

class EntityDataContainer : public DataContainer
{
};

class DataLoader
{
public:
    static DataLoader instance;
    DataLoader();
    std::unordered_map<std::string, DataContainer> data;
    void init();
    void loadDataFromFile(std::string);
    void initEntityClass(std::string);
};



#endif // DATALOADER_H
