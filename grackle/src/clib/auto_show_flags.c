#include <stdio.h>
void auto_show_flags(FILE *fp) {
   fprintf (fp,"\n");
   fprintf (fp,"Usage: which [options] [--] COMMAND [...]\n");
   fprintf (fp,"Write the full path of COMMAND(s) to standard output.\n");
   fprintf (fp,"\n");
   fprintf (fp,"  --version, -[vV] Print version and exit successfully.\n");
   fprintf (fp,"  --help,          Print this help and exit successfully.\n");
   fprintf (fp,"  --skip-dot       Skip directories in PATH that start with a dot.\n");
   fprintf (fp,"  --skip-tilde     Skip directories in PATH that start with a tilde.\n");
   fprintf (fp,"  --show-dot       Don't expand a dot to current directory in output.\n");
   fprintf (fp,"  --show-tilde     Output a tilde for HOME directory for non-root.\n");
   fprintf (fp,"  --tty-only       Stop processing options on the right if not on tty.\n");
   fprintf (fp,"  --all, -a        Print all matches in PATH, not just the first\n");
   fprintf (fp,"  --read-alias, -i Read list of aliases from stdin.\n");
   fprintf (fp,"  --skip-alias     Ignore option --read-alias; don't read stdin.\n");
   fprintf (fp,"  --read-functions Read shell functions from stdin.\n");
   fprintf (fp,"  --skip-functions Ignore option --read-functions; don't read stdin.\n");
   fprintf (fp,"\n");
   fprintf (fp,"Recommended use is to write the output of (alias; declare -f) to standard\n");
   fprintf (fp,"input, so that which can show aliases and shell functions. See which(1) for\n");
   fprintf (fp,"examples.\n");
   fprintf (fp,"\n");
   fprintf (fp,"If the options --read-alias and/or --read-functions are specified then the\n");
   fprintf (fp,"output can be a full alias or function definition, optionally followed by\n");
   fprintf (fp,"the full path of each command used inside of those.\n");
   fprintf (fp,"\n");
   fprintf (fp,"Report bugs to <which-bugs@gnu.org>.\n");
   fprintf (fp,"CPP = \n");
   fprintf (fp,"CC  = /opt/apps/compilers/gcc/5.4.0/intel64/bin/gcc\n");
   fprintf (fp,"CXX = /opt/apps/compilers/gcc/5.4.0/intel64/bin/g++\n");
   fprintf (fp,"FC  = /opt/apps/compilers/gcc/5.4.0/intel64/bin/gfortran\n");
   fprintf (fp,"F90 = /opt/apps/compilers/gcc/5.4.0/intel64/bin/gfortran\n");
   fprintf (fp,"LD  = /opt/apps/compilers/gcc/5.4.0/intel64/bin/gcc\n");
   fprintf (fp,"LIBTOOL = /opt/flight-direct/embedded/bin/libtool\n");
   fprintf (fp,"\n");
   fprintf (fp,"DEFINES = -DLINUX -DH5_USE_16_API -fPIC  -DCONFIG_BFLOAT_8\n");
   fprintf (fp,"\n");
   fprintf (fp,"INCLUDES = -I/opt/apps/libs/hdf5-mpi/1.6.2/gcc-4.4.7+openmpi-1.6.5/include     -I.\n");
   fprintf (fp,"\n");
   fprintf (fp,"CPPFLAGS = -P -traditional\n");
   fprintf (fp,"CFLAGS   =  -O2\n");
   fprintf (fp,"CXXFLAGS =  -O2\n");
   fprintf (fp,"FFLAGS   = -fno-second-underscore -ffixed-line-length-132 -O2\n");
   fprintf (fp,"F90FLAGS = -fno-second-underscore -O2\n");
   fprintf (fp,"LDFLAGS  = \n");
   fprintf (fp,"\n");
   fprintf (fp,"LIBS     = -L/opt/apps/libs/hdf5-mpi/1.6.2/gcc-4.4.7+openmpi-1.6.5/lib -lhdf5 -lz  -lgfortran \n");
   fprintf (fp,"\n");
}
