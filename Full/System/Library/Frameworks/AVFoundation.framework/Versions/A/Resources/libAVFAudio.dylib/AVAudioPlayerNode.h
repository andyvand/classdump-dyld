/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/AVAudioNode.h>
#import <libAVFAudio.dylib/AVAudioMixing.h>

@class NSString;

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(void)playAtTime:(id)arg1 ;
-(void)didAttachToEngine:(id)arg1 ;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scheduleBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scheduleFile:(id)arg1 atTime:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned)arg3 atTime:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)prepareWithFrameCount:(unsigned)arg1 ;
-(id)nodeTimeForPlayerTime:(id)arg1 ;
-(id)playerTimeForNodeTime:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)play;
-(char)isPlaying;
-(void)pause;
@end
