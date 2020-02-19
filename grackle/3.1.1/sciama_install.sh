#!/bin/bash

APPNAME="grackle"
APPVERSION="3.1.1"

echo -e '\n'
echo  '=============================================================================='
echo  ' compiling and installing '${APPNAME}' for '${_SCIAMA_SYS}' and '${_SCIAMA_PYTHON}
echo  '=============================================================================='

export CFLAGS=""

cd src
./configure
cd src/clib
mkdir -p /opt/apps/pkgs/${APPNAME}/${APPVERSION}/${_SCIAMA_SYS}/${_SCIAMA_PYTHON}
export PREFIX=/opt/apps/pkgs/${APPNAME}/${APPVERSION}/${_SCIAMA_SYS}/${_SCIAMA_PYTHON}; make machine-sciama
make clean && make && make install
if [ $? -ne 0 ]; then
    echo -e '\n'
    echo '================================================='
    echo '------------------ ERROR ------------------------'
    echo '================================================='
    exit 1
fi
cd ../python
module load ${APPNAME}/${APPVERSION}
mkdir -p /opt/apps/pkgs/${APPNAME}/${APPVERSION}/${_SCIAMA_SYS}/${_SCIAMA_PYTHON}/lib/python${_SCIAMA_PYVERSION}/site-packages
PYTHONPATH=/opt/apps/pkgs/${APPNAME}/${APPVERSION}/${_SCIAMA_SYS}/${_SCIAMA_PYTHON}/lib/python${_SCIAMA_PYVERSION}/site-packages/:${PYTHONPATH} python setup.py install --prefix=/opt/apps/pkgs/${APPNAME}/${APPVERSION}/${_SCIAMA_SYS}/${_SCIAMA_PYTHON}
if [ $? -ne 0 ]; then
    echo -e '\n'
    echo '================================================='
    echo '------------------ ERROR ------------------------'
    echo '================================================='
    exit 1
fi
make clean
module list -t > /opt/apps/pkgs/${APPNAME}/${APPVERSION}/${_SCIAMA_SYS}/${_SCIAMA_PYTHON}/MODULES 2>&1
echo -e '\n'
echo '================================================================='
echo '----------------- SUCCESS ---------------------------------------'
echo 'module compiled and installed in '${_SCIAMA_SYS}/${_SCIAMA_PYTHON}
echo '================================================================='
