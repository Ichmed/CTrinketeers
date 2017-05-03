#include "dataloader.h"

using namespace std;

void DataContainer::addValue(std::string val)
{
    int i = val.find_first_of(" ");

}

DataLoader DataLoader::instance;

DataLoader::DataLoader()
{
}

void DataLoader::loadDataFromFile(string path)
{
    ifstream file;
    file.open(path.c_str());

    DataContainer *container;
    std::string name;

    std::string s;
    while(getline(file, s))
    {
        if(s.compare(0, 14, "define Entity "))
        {
            name = s.substr(14, string::npos);
            container = new EntityDataContainer();
        }
        else if(s.compare(0, 10, "important "))
            container->addValue(s.substr(10, string::npos));
        else if(s == "$pyth")
            container->pythCode += "class " + name + ":\n";
        else
            container->pythCode += " " + s;
    }

}

void DataLoader::initEntityClass(string name)
{
    /*string pythCode = "class " + name + ":\n";
    for(dataValue v : c.values)
    {
        pythCode += "   " + v.getName() + " = " + var.getValue() + "\n";
    }
    pythCode += c.pythCode;
    PyRun_SimpleString(pythCode);*/
}
