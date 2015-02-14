/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVPlayerItemOutputPullDelegate;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference;

@interface AVPlayerItemVideoOutputInternal : NSObject {

	OpaqueCMTimebaseRef timebase;
	double currentRate;
	OpaqueFigVisualContextRef vc;
	AVWeakReference* playerItemWeakReference;
	OpaqueVTPixelBufferConformerRef pixelBufferConformer;
	id<AVPlayerItemOutputPullDelegate> delegate;
	dispatch_queue_sRef stateQueue;
	dispatch_queue_sRef delegateQueue;
	dispatch_source_sRef delegateWakeupSource;
	double advanceWakeUpInterval;
	char advanceWakeUpIntervalIsValid;
	SCD_Struct_CM5 wakeUpImageTime;
	char suppressesPlayerRendering;
	char shouldTagBuffersWithInfo;

}
@end

