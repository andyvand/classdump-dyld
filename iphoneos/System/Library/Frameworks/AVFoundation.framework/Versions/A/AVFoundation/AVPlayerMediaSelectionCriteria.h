/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVPlayerMediaSelectionCriteriaInternal, NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject {

	AVPlayerMediaSelectionCriteriaInternal* _criteria;

}

@property (nonatomic,readonly) NSArray * preferredLanguages; 
@property (nonatomic,readonly) NSArray * preferredMediaCharacteristics; 
-(id)figDictionary;
-(id)initWithFigDictionary:(id)arg1 ;
-(NSArray *)preferredMediaCharacteristics;
-(id)preferredMediaSubTypes;
-(id)precludedMediaSubTypes;
-(char)preferMultichannelAudio;
-(char)precludeMultichannelAudio;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(char)arg5 precludeMultichannelAudio:(char)arg6 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)preferredLanguages;
@end

