/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol Endpointer <NSObject>
@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
@optional
-(char)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2;
-(char)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2;

@required
-(void)setEndpointMode:(int)arg1;
-(void)setStartWaitTime:(double)arg1;
-(void)setInterspeechWaitTime:(double)arg1;
-(void)setEndWaitTime:(double)arg1;
-(int)getStatus:(AudioQueueBuffer*)arg1;
-(int)endpointMode;
-(double)startWaitTime;
-(double)interspeechWaitTime;
-(double)endWaitTime;
-(void)reset;

@end

