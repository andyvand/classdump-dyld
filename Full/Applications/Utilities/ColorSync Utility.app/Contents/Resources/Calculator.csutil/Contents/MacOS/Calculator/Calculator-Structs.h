/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/ColorSync Utility.app/Contents/Resources/Calculator.csutil/Contents/MacOS/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	float data[4];
} SCD_Struct_Co0;

typedef struct {
	unsigned short data[4];
} SCD_Struct_Co1;

typedef struct {
	unsigned char data[4];
} SCD_Struct_Co2;

typedef struct {
	SCD_Struct_Co0 bFloat;
	SCD_Struct_Co1 b16bit;
	SCD_Struct_Co2 b8bit;
} SCD_Struct_Co3;

typedef struct {
	int space;
	/*function pointer*/void* buffer;
} SCD_Struct_Co4;

typedef struct ColorSyncTransform* ColorSyncTransformRef;

typedef struct {
	int field1;
	/*function pointer*/void* field2;
} SCD_Struct_Co6;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGContext* CGContextRef;

typedef struct ColorSyncProfile* ColorSyncProfileRef;
