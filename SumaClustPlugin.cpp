#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SumaClustPlugin.h"

void SumaClustPlugin::input(std::string file) {
 inputfile = file;
}

void SumaClustPlugin::run() {}

void SumaClustPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "sumaclust";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += " > ";
myCommand += outputfile;
myCommand += " 2>&1";
 system(myCommand.c_str());
}

PluginProxy<SumaClustPlugin> SumaClustPluginProxy = PluginProxy<SumaClustPlugin>("SumaClust", PluginManager::getInstance());
