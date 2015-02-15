/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, VCRulesBandwidthList;

@interface VCRulesCPU : NSObject {

	NSString* _cpuType;
	int _nProcessors;
	int _frequency;
	VCRulesBandwidthList* _bandwidthList;

}
-(void)setBandwidthList:(id)arg1 ;
-(id)bandwidthList;
-(void)addRuleWithBandwidthLowerThreshold:(int)arg1 upperThreshold:(int)arg2 nParticipants:(int)arg3 width:(int)arg4 height:(int)arg5 fps:(int)arg6 type:(id)arg7 ;
-(id)imageSizeForBandwidth:(int)arg1 nParticipants:(int)arg2 type:(id)arg3 ;
-(void)addRuleWithBandwidthLowerThreshold:(int)arg1 upperThreshold:(int)arg2 nParticipants:(int)arg3 width:(int)arg4 height:(int)arg5 fps:(int)arg6 conferenceType:(int)arg7 ;
-(id)imageSizeForBandwidth:(int)arg1 nParticipants:(int)arg2 conferenceType:(int)arg3 ;
-(id)initWithCPUType:(id)arg1 nProcessors:(int)arg2 frequency:(int)arg3 ;
-(long long)compareCPU:(id)arg1 ;
-(id)cpuType;
-(int)nProcessors;
-(int)frequency;
-(void)setCPUType:(id)arg1 ;
-(void)setNProcessors:(int)arg1 ;
-(void)setFrequency:(int)arg1 ;
-(void)dealloc;
-(id)description;
@end

