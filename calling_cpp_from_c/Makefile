main_c: main.c my_smart_lib
	gcc main.c -o main_c -L. -lmysmartlib -Wl,-R.

main_cpp: main.cpp my_smart_class.h my_smart_class.cpp
	g++ main.cpp my_smart_class.cpp -o main_cpp

my_smart_lib: my_smart_wrapper.h my_smart_wrapper.cpp my_smart_class.h my_smart_class.cpp
	g++ -c my_smart_class.cpp my_smart_wrapper.cpp -fPIC
	g++ -shared my_smart_class.o my_smart_wrapper.o -o libmysmartlib.so -lstdc++

clean:
	rm *.a *.o *.so