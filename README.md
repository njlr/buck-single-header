# buck-single-header

This is a demonstration of how [Buck build](https://buckbuild.com) can be used to generate a "single-include" header file for C++. Unlike other solutions, Buck will ensure that the file is always up-to-date, and use hashing to prevent unnecessary rebuilds. 

Read [more on Hackernoon](https://hackernoon.com/generating-a-single-include-c-header-file-using-buck-827f20be3f9d). 


## Build Instructions

```
buck run :demo
```
