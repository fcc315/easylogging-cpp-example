# easylogging-cpp-example
This repo provides an example for using easylogging++ when needs to log different level message into multiple files.  
The example is using inline configuration instead of using another configure file.

# Configuration
Windows  
easyloggingpp-9.97.0  
gcc 12.1.0  

# Code 
Add one line "#define ELPP_NO_DEFAULT_LOG_FILE" in easylogging++.h. The default log file will not be generated. Only user defined log files will be created. 

# To compile (command line)
```powershell
g++ -o main.exe main.cpp easylogging++.cc
./main.exe
```

# Reference
[1] https://github.com/amrayn/easyloggingpp  
[2] https://open.spotify.com/track/2lXqwlG8za1sWKgHRwEiEC?si=863d6c9825ce4b6c
