/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface VCRulesBandwidthList : NSObject {

	NSMutableArray* _bandwidthList;

}
-(void)setBandwidthList:(id)arg1 ;
-(id)bandwidthWithLowerThreshold:(int)arg1 upperThreshold:(int)arg2 ;
-(id)bandwidthList;
-(id)addBandwidthLowerThreshold:(int)arg1 upperThreshold:(int)arg2 ;
-(void)addRuleWithBandwidthLowerThreshold:(int)arg1 upperThreshold:(int)arg2 nParticipants:(int)arg3 width:(int)arg4 height:(int)arg5 fps:(int)arg6 type:(id)arg7 ;
-(id)imageSizeForBandwidth:(int)arg1 nParticipants:(int)arg2 type:(id)arg3 ;
-(void)addRuleWithBandwidthLowerThreshold:(int)arg1 upperThreshold:(int)arg2 nParticipants:(int)arg3 width:(int)arg4 height:(int)arg5 fps:(int)arg6 conferenceType:(int)arg7 ;
-(id)imageSizeForBandwidth:(int)arg1 nParticipants:(int)arg2 conferenceType:(int)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

