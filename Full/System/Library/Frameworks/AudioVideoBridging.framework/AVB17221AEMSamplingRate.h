/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMObject.h>
#import <AudioVideoBridging/NSCopying.h>

@interface AVB17221AEMSamplingRate : AVB17221AEMObject <NSCopying> {

	unsigned samplingRate;

}

@property (assign) unsigned samplingRate; 
@property (assign) unsigned char pull; 
@property (assign) unsigned baseFrequency; 
@property (nonatomic,readonly) double frequency; 
@property (assign,nonatomic) unsigned char iidcVideoFrameRate; 
+(id)_IIDCStandardFrameRates;
+(id)_IIDCNTSCDownFrameRates;
+(id)keyPathsForValuesAffectingPull;
+(id)keyPathsForValuesAffectingBaseFrequency;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(void)setSamplingRate:(unsigned)arg1 ;
-(unsigned)samplingRate;
-(unsigned char)pull;
-(unsigned)baseFrequency;
-(char)isSupportedAudioSamplingRate;
-(unsigned char)iidcVideoFrameRate;
-(void)setPull:(unsigned char)arg1 ;
-(void)setBaseFrequency:(unsigned)arg1 ;
-(void)setIidcVideoFrameRate:(unsigned char)arg1 ;
-(char)isSupportedVideoSamplingRate;
-(id)plistRepresentation;
-(double)frequency;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
