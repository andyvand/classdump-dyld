/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureVideoDataOutput, AVCaptureConnection;

@interface AVCaptureVideoDataOutputCallbackData : NSObject {

	AVCaptureVideoDataOutput* _output;
	AVCaptureConnection* _connection;
	opaqueCMBufferQueueRef _bufferQueue;

}
+(id)callbackDataWithOutput:(id)arg1 connection:(id)arg2 ;
-(id)output;
-(id)initWithOutput:(id)arg1 connection:(id)arg2 ;
-(opaqueCMBufferQueueRef)bufferQueue;
-(id)connection;
-(void)finalize;
-(void)dealloc;
@end

