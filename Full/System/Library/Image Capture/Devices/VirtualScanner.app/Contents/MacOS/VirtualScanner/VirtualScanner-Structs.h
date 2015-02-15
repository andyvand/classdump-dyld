/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Devices/VirtualScanner.app/Contents/MacOS/VirtualScanner
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __DADisk* DADiskRef;

typedef struct CGImage* CGImageRef;

typedef struct __DASession* DASessionRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct ICAObjectInfo {
	unsigned objectType;
	unsigned objectSubtype;
} ICAObjectInfo;

typedef struct ScannerObjectInfo {
	unsigned icaObject;
	unsigned long long reserved;
	ICAObjectInfo icaObjectInfo;
	unsigned uniqueID;
	unsigned long long uniqueIDFireWire;
	unsigned thumbnailSize;
	unsigned dataSize;
	unsigned dataWidth;
	unsigned dataHeight;
	unsigned char name[32];
	unsigned char creationDate[20];
	unsigned flags;
	char* privateData;
	unsigned tag;
} ScannerObjectInfo;
