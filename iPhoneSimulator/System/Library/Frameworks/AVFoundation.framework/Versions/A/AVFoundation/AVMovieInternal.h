/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSData, NSString, NSDictionary, AVAssetInspectorLoader, NSArray;

@interface AVMovieInternal : NSObject {

	NSURL* URL;
	NSData* data;
	NSString* fileType;
	NSDictionary* initializationOptions;
	AVAssetInspectorLoader* loader;
	NSArray* tracks;
	long long makeTracksArrayOnce;
	unsigned long long referenceRestrictions;
	char shouldPrepareToOptimizeForExclusivePlayback;

}
@end

