import importlib.util
spec = importlib.util.spec_from_file_location("pygrackle", "/mnt/lustre/cjessop/Sciama/grackle/3.1.1/src/src/python")
foo = importlib.util.module_from_spec(spec)
spec.loader.exec_module(foo)
foo.MyClass()
