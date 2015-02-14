/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV3;

typedef struct {
	SCD_Struct_AV3 start;
	SCD_Struct_AV3 duration;
} SCD_Struct_AV4;

typedef struct {
	unsigned playerView_playerItemTimeForNormalizedTime : 1;
	unsigned playerView_userInterfaceTimeForPlayerItemTime : 1;
	unsigned playerView_playerItemTimeForUserInterfaceTime : 1;
} SCD_Struct_AV5;

typedef struct {
	double top;
	double right;
	double bottom;
	double left;
} SCD_Struct_AV6;

typedef struct _NSZone* NSZoneRef;

typedef struct CGContext* CGContextRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

