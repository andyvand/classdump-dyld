/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVStreamDataParserOutputHandling;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSError, AVAsset, NSMutableArray, NSMutableData, NSMutableDictionary;

@interface AVStreamDataParserInternal : NSObject {

	id<AVStreamDataParserOutputHandling> _delegate;
	long long _status;
	NSError* _error;
	AVAsset* _asset;
	NSMutableArray* _trackIDsNotProvidingMedia;
	OpaqueFigManifoldRef _figManifold;
	unsigned long long _typeIdOfInitialFigManifold;
	NSMutableData* _accumulatedInitializationData;
	char _encounteredStreamDiscontinuity;
	NSMutableDictionary* _trackDecryptorsByTrackID;
	NSMutableDictionary* _trackKeyRequestInitializationDataByTrackID;
	NSMutableDictionary* _tracksBecomingReadyByTrackID;
	NSMutableArray* _samplesBeforeReady;
	unsigned long long _samplesBeforeReadyTotalSize;
	SCD_Struct_CM5 _samplesBeforeReadyTotalDuration;

}
@end

