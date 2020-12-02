lib_src_file = "./source/lanconv.cpp"
example_src_file = "./example/main.cpp"

lib_obj_file = "lanconv.o"
example_exec_file = "example.out"

all: build_lib build_example message

build_lib:
	@echo "compiling landb.cpp"
	@g++ -c $(lib_src_file)  -o $(lib_obj_file)
	@echo "done." 

build_example:
	@echo "testing: compiling main.cpp (example)"
	@g++ $(example_src_file) $(lib_obj_file) -o $(example_exec_file)
	@echo "done. (test the example by typing \"./example.out\")"

message:
	@echo "\nhint: You can statically link your program with lanconv by following this example:"
	@echo "\t $$ g++ yourfile.cpp $(lib_obj_file)"
