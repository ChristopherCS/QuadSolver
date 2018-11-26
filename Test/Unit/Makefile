## Makefile for all Unit tests
#
## Currently we have the Unit tests for the following methods:
### mySquareRoot() <- mySquareRoot.c :  t1.c
###
##
#

SRC= ../../SRC
SUBDIR= mySquareRoot VerifyInput VerifySolver

#Do all make files for all Unit tests
tests: 
	for dir in $(SUBDIR); do \
		$(MAKE) -C $$dir; \
	done

#Run all the unit tests
runTest:
	for dir in $(SUBDIR); do \
		cd $$dir && ./t1 && cd ..; \
done

#Run clean on all sub-directories
cleanall:
	for dir in $(SUBDIR); do \
		$(MAKE) clean -C $$dir; \
	done



## Dependencies for the Object files used on Unit testing
# Most, if not all should be within the individual make files