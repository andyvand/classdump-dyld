/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVKit/AVKit-Structs.h>
@interface AVAudioExtractor : NSObject {

	unsigned long long _numberOfChannels;

}

@property (nonatomic,readonly) unsigned long long numberOfChannels;              //@synthesize numberOfChannels=_numberOfChannels - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV3 duration; 
-(id)initWithNumberOfChannels:(unsigned long long)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(unsigned long long)numberOfChannels;
-(id)init;
-(SCD_Struct_AV3)duration;
@end

