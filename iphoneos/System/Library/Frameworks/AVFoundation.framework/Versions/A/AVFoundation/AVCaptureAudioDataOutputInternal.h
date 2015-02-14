/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVCaptureAudioDataOutputSampleBufferDelegate;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureAudioSettings;

@interface AVCaptureAudioDataOutputInternal : NSObject {

	id<AVCaptureAudioDataOutputSampleBufferDelegate> delegate;
	dispatch_queue_sRef clientQueue;
	CFDictionaryRef splitterUnits;
	CFDictionaryRef mixerUnits;
	CFDictionaryRef audioConverterUnits;
	CFDictionaryRef audioToProcsUnits;
	CFDictionaryRef callbackData;
	AVCaptureAudioSettings* audioSettings;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

