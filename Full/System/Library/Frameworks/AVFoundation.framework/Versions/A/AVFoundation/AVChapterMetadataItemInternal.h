/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSLocale, NSMutableArray;

@interface AVChapterMetadataItemInternal : NSObject {

	AVWeakReference* weakReference;
	const OpaqueFigAssetRef figAsset;
	long long chapterGroupIndex;
	long long chapterIndex;
	NSString* chapterType;
	NSLocale* locale;
	NSString* chapterDataType;
	id<NSObject><NSCopying> value;
	SCD_Struct_CM5 time;
	SCD_Struct_CM5 duration;
	long long valueStatus;
	int valueErrorCode;
	NSMutableArray* completions;
	dispatch_queue_sRef readWriteQueue;

}
@end

