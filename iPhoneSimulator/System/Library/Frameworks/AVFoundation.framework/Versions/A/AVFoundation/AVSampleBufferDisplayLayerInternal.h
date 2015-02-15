/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class CALayer, NSError, NSString, AVMediaDataRequester, AVWeakReference;

@interface AVSampleBufferDisplayLayerInternal : NSObject {

	CALayer* contentLayer;
	OpaqueFigVideoQueueRef videoQueue;
	char outputObscured;
	long long status;
	NSError* error;
	NSString* videoGravity;
	CGSize presentationSize;
	CGRect bounds;
	char isRequestingMediaData;
	AVMediaDataRequester* mediaDataRequester;
	char aboveHighWaterLevel;
	dispatch_queue_sRef serialQueue;
	AVWeakReference* weakReferenceToSelf;
	AVWeakReference* weakReferenceToSynchronizer;
	char addedToSynchronizer;
	char controlTimebaseSetByUserIsInUse;
	OpaqueCMTimebaseRef controlTimebaseSetByUser;
	OpaqueCMTimebaseRef readOnlyVideoQueueTimebase;
	OpaqueCMTimebaseRef readOnlyRenderingTimebase;

}
@end

