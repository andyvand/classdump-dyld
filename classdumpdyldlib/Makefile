PRODUCT_DIR=`echo $PWD`
NAME=classdump-dyld
MAKEFILE_SOURCE=pb_makefiles
OS=MACOS
PLATFORM_OS=iPhoneSimulator
TARGET=iPhoneSimulator
SDKROOT=iPhoneSimulator8.1
MAKEFILEPATH=/Applications/Xcode.app/Contents/Developer/Makefiles
OTHER_CFLAGS=-Oz -Os -ObjC++
MAKEFILEDIR=$(MAKEFILEPATH)/$(MAKEFILE_SOURCE)
include $(MAKEFILEPATH)/$(MAKEFILE_SOURCE)/platform-variables.make
RANLIB=ranlib
AR=ar
ARCHS=-arch i386 -arch x86_64
 CC=gcc
CXX=g++
LD=g++

LIBRARY_NAME = libclassdumpdyld

all: $(LIBRARY_NAME).a $(LIBRARY_NAME)

$(LIBRARY_NAME): classdumpdyldlib.o
	$(CXX) $(ARCHS) $(OTHER_CFLAGS) -o $@ $^ -framework Foundation -u _libmain -e _libmain

$(LIBRARY_NAME).a: classdumpdyldlib.o
	$(AR) cru $@ $^
	$(RANLIB) $@

classdumpdyldlib.o: classdumpdyldlib.mm
	$(CXX) $(ARCHS) $(OTHER_CFLAGS) -DLIBMAIN -o $@ -c $<

%.mm: %.xm
	cp -f $^ $@

%.o: %.mm
	$(CXX) $(ARCHS) $(OTHER_CFLAGS) -DLIBMAIN -o $@ -c $<

libclassdumpdyld_FILES = classdumpdyldlib.mm
libclassdumpdyld_LDFLAGS = -lsubstrate

include $(MAKEFILEDIR)/library.make
