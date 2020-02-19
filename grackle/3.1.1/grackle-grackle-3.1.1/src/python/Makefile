build:
	DYLD_LIBRARY_PATH=$(LIBRARY_PATH) LD_LIBRARY_PATH=$(LIBRARY_PATH) CPLUS_INCLUDE_PATH=$(CPATH) C_INCLUDE_PATH=$(CPATH) python setup.py build_ext -i; python setup.py install --prefix=$(HOME)/.local
test: 
	DYLD_LIBRARY_PATH=$(LIBRARY_PATH) LD_LIBRARY_PATH=$(LIBRARY_PATH) CPLUS_INCLUDE_PATH=$(CPATH) C_INCLUDE_PATH=$(CPATH) py.test tests
clean:
	rm -f pygrackle/*.so pygrackle/*.c pygrackle/*.pyc pygrackle/utilities/*.pyc
	rm -rf pygrackle.egg_info

.PHONY: build test
