/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) char enable; 
@property (assign,nonatomic) float level; 
@property (nonatomic,readonly) AVAudioUnitEQFilterParameters * filterParameters; 
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(AVAudioUnitEQFilterParameters *)filterParameters;
-(void)loadFactoryReverbPreset:(long long)arg1 ;
-(void)setEnable:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(float)level;
-(void)setLevel:(float)arg1 ;
-(char)enable;
@end

