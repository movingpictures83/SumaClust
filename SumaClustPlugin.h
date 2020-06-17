#ifndef SUMACLUSTPLUGIN_H
#define SUMACLUSTPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class SumaClustPlugin : public Plugin
{
public: 
 std::string toString() {return "SumaClust";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
