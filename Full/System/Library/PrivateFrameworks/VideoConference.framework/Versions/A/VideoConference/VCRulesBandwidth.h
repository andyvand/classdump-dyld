/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VCRulesImageSizeList;

@interface VCRulesBandwidth : NSObject {

	int _bandwidth;
	int _bandwidthLowerThreshold;
	int _bandwidthUpperThreshold;
	VCRulesImageSizeList* _H264Focus;
	VCRulesImageSizeList* _H264NonFocus;
	VCRulesImageSizeList* _H263;

}
-(int)bandwidth;
-(id)initWithBandwidthLowerThreshold:(int)arg1 upperThreshold:(int)arg2 ;
-(int)bandwidthLowerThreshold;
-(int)bandwidthUpperThreshold;
-(void)addRuleWithNParticipants:(int)arg1 width:(int)arg2 height:(int)arg3 fps:(int)arg4 type:(id)arg5 ;
-(id)imageSizeForNParticipants:(int)arg1 type:(id)arg2 ;
-(void)addRuleWithNParticipants:(int)arg1 width:(int)arg2 height:(int)arg3 fps:(int)arg4 conferenceType:(int)arg5 ;
-(id)imageSizeForNParticipants:(int)arg1 conferenceType:(int)arg2 ;
-(void)setBandwidthLowerThreshold:(int)arg1 ;
-(void)setBandwidthUpperThreshold:(int)arg1 ;
-(void)setH264Focus:(id)arg1 ;
-(void)setH264NonFocus:(id)arg1 ;
-(void)setH263:(id)arg1 ;
-(id)H264Focus;
-(id)H264NonFocus;
-(id)H263;
-(void)setBandwidth:(int)arg1 ;
-(void)dealloc;
-(id)description;
@end

