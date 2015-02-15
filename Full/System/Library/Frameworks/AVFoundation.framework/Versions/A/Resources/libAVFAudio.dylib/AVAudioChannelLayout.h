/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVAudioChannelLayout : NSObject {

	unsigned _layoutTag;
	AudioChannelLayout* _layout;
	void* _reserved;

}

@property (nonatomic,readonly) unsigned layoutTag; 
@property (nonatomic,readonly) const AudioChannelLayout* layout; 
@property (nonatomic,readonly) unsigned channelCount; 
+(unsigned long long)audioChannelLayoutSize:(id)arg1 ;
+(id)layoutWithLayoutTag:(unsigned)arg1 ;
+(id)layoutWithLayout:(const AudioChannelLayout*)arg1 ;
-(unsigned)channelCount;
-(id)initWithLayout:(const AudioChannelLayout*)arg1 ;
-(unsigned)layoutTag;
-(id)initWithLayoutTag:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(const AudioChannelLayout*)layout;
@end

