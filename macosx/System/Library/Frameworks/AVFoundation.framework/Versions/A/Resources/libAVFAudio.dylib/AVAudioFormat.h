/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class AVAudioChannelLayout, NSDictionary;

@interface AVAudioFormat : NSObject {

	AudioStreamBasicDescription _asbd;
	AVAudioChannelLayout* _layout;
	unsigned long long _commonFormat;
	void* _reserved;

}

@property (getter=isStandard,nonatomic,readonly) char standard; 
@property (nonatomic,readonly) unsigned long long commonFormat; 
@property (nonatomic,readonly) unsigned channelCount; 
@property (nonatomic,readonly) double sampleRate; 
@property (getter=isInterleaved,nonatomic,readonly) char interleaved; 
@property (nonatomic,readonly) const AudioStreamBasicDescription* streamDescription; 
@property (nonatomic,readonly) AVAudioChannelLayout * channelLayout; 
@property (nonatomic,readonly) NSDictionary * settings; 
+(id)settingsFromASBD:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
-(NSDictionary *)settings;
-(double)sampleRate;
-(id)initWithSettings:(id)arg1 ;
-(const AudioStreamBasicDescription*)streamDescription;
-(char)isInterleaved;
-(unsigned)channelCount;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 ;
-(id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned)arg2 ;
-(id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2 ;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned)arg3 interleaved:(char)arg4 ;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(char)arg3 channelLayout:(id)arg4 ;
-(char)isStandard;
-(unsigned long long)commonFormat;
-(AVAudioChannelLayout *)channelLayout;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

