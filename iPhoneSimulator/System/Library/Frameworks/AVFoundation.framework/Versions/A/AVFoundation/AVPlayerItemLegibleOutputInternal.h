/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVPlayerItemLegibleOutputDependencyFactory;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSArray, AVWeakReferencingDelegateStorage, AVWeakReference, NSString;

@interface AVPlayerItemLegibleOutputInternal : NSObject {

	id<AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
	NSArray* nativeRepresentationSubtypes;
	AVWeakReferencingDelegateStorage* delegateStorage;
	dispatch_queue_sRef ivarAccessQueue;
	AVWeakReference* weakReferenceToHost;
	char suppressesPlayerRendering;
	double advanceInterval;
	NSString* textStylingResolution;

}
@end

