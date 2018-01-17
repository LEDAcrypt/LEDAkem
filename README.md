# LEDAkem (Low dEnsity coDe-bAsed key encapsulation mechanism) 

The following repository contains the most up-to date implementation of the
LEDAkem cryptosystem ([website](https://www.ledacrypt.org/LEDAkem)) according to 
the following directory structure:

## Reference_Implementation

A reference implementation of the LEDAkem. 
The reference implementation library does not provide a main() function, and is 
intended to be compiled and linked to a binary. 
The required NIST API is present in KEM/include/api.h
The included makefile creates a statically linkable library.
for the chosen security level and value of the N0 parameters.
The available security levels match NIST categories, it is thus possible to 
compile the library, e.g., for category 1 and N0=2 as:

`SL=1 N0=2 make`


## Additional_Implementations

This directory contains boilerplate code to allow an implementor to generate
a new set of KAT inputs and outputs (KAT_generation directory), and 
a small boilerplate performing synthetic performance benchmarks of the
KEM (Benchmarking directory).

In both cases, the makefile will generate a binary for each combination of
security category and number of circulant blocks N0 simply running

`make`

The KAT_generation also contains a script which allows the generation of fresh
KAT for all the (security category, N0) pairs, named katgen.sh. Running the 
script with no parameters from the KAT_generation directory will call all the 
compiled binaries and generate the KATs.

## KAT

A set of responses to the Known Answer Tests, as obtained with the code present
in Additional_Implementations/KAT_generation


## LICENSE.txt

The file containing the public domain license condition for the portion of the 
codebase which was authored by the submitter and implementors.

The code which was not directly authored by the submitters and implementors
is the one relative to AES and SHA3: the included implementations were released
by the respective authors under public domain, and the submitters and 
implementors hereby re-license the present copy under public domain.
