all: flt dbl
flt:
	g++ -o floatarr main.cpp -DTYPE_FLOAT
dbl:
	g++ -o doublearr main.cpp