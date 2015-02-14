/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, MediaUIValueTiming, NSError, NSLocale;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_Me1;

typedef struct CGImage* CGImageRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct {
	double volume;
	CGSize contentDimensions;
	double contentDuration;
	NSArray* contentChapters;
	MediaUIValueTiming* timing;
	NSError* error;
	double contentFrameRate;
	double minimumPlaybackRate;
	double maximumPlaybackRate;
	double minimumSeekableTime;
	double maximumSeekableTime;
	char displaysClosedCaptions;
	char displaysSubtitles;
	NSLocale* audioLocale;
	NSLocale* subtitleLocale;
	NSArray* contentAudioLocales;
	NSArray* contentSubtitleLocales;
	unsigned contentHasClosedCaptions : 1;
} SCD_Struct_Me5;

