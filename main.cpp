#include <iostream>

#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

using namespace std;

int main(int argc, char* argv[]) {
   el::Configurations c;
	c.setToDefault();

   // Inline configure
	string conf = "*GLOBAL:\n";
	conf += "FORMAT = %datetime [%level] %msg\n";
	conf += " FILENAME = info.log\n";
	conf += "*DEBUG:\n";
	conf += "FORMAT = %datetime [%level] [%loc] %msg\n";
	conf += "FILENAME = debug.log\n";

	c.parseFromText(conf);
	el::Loggers::reconfigureLogger("default", c);

   // Testing
	LOG(DEBUG) << "Msg: DEBUG now" << endl;
	LOG(INFO) << "Msg: INFO now" << endl;

   return 0;
}