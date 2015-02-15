/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {

	AVCaptureAudioChannelInternal* _internal;

}

@property (nonatomic,readonly) float averagePowerLevel; 
@property (nonatomic,readonly) float peakHoldLevel; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
-(void)_updateVolume:(float)arg1 ;
-(void)_updateEnabled:(char)arg1 ;
-(float)averagePowerLevel;
-(float)peakHoldLevel;
-(id)initWithConnection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setVolume:(float)arg1 ;
-(float)volume;
@end

