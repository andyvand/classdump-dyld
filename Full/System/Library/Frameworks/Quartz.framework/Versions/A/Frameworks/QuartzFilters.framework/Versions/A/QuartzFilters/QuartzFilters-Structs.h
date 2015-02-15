/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

typedef struct AssignComponentInfo {
	NSArray* aGrayNames;
	NSArray* aRGBNames;
	NSArray* aCMYKNames;
	int data[12];
	int object[12];
	long long profile[12];
	int cellIDX[4][5];
} AssignComponentInfo;

typedef struct DefaultComponentInfo {
	NSArray* dGrayNames;
	NSArray* dRGBNames;
	NSArray* dCMYKNames;
	int data[12];
	int object[12];
	long long profile[12];
	int cellIDX[4][5];
} DefaultComponentInfo;

typedef struct IntermediateComponentInfo {
	NSArray* midNames;
	int type[16];
	int data[16];
	int object[16];
	long long profile[16];
	int index[16][7];
	int cellIDX[4][5];
} IntermediateComponentInfo;

typedef struct TargetComponentInfo {
	NSArray* targetNames;
	int data[16];
	int object[16];
	long long profile[16];
	int cellIDX[4][5];
} TargetComponentInfo;

typedef struct RenderingIntentInfo {
	int data[16];
	int object[16];
	unsigned intent[16];
} RenderingIntentInfo;

typedef struct QFilterInfo {
	id filter;
	QuartzFilterOptions options;
	QuartzFilterOptionsInfo optionsInfo;
	id url;
	 NSURL;
	id comments;
	 NSString;
	id domains;
	 NSMutableDictionary;
	char readOnly;
	char usedObjectTypes[5];
	AssignComponentInfo assignInfo;
	DefaultComponentInfo defaultInfo;
	IntermediateComponentInfo intermInfo;
	TargetComponentInfo targetInfo;
	RenderingIntentInfo intentInfo;
	id dPDFXNames;
	 NSArray;
} QFilterInfo;

typedef struct _NSZone* NSZoneRef;

typedef struct CGContext* CGContextRef;

