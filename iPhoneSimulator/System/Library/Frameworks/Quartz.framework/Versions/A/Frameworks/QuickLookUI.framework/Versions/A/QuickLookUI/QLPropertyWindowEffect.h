/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QLAnimationWindowEffect.h>

@class NSString;

@interface QLPropertyWindowEffect : QLAnimationWindowEffect {

	float _fromValue;
	float _toValue;
	NSString* _property;

}
+(id)changeProperty:(id)arg1 forWindow:(id)arg2 from:(float)arg3 to:(float)arg4 duration:(double)arg5 ;
-(void)dealloc;
-(void)setValue:(float)arg1 ;
@end

