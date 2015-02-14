/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSAnimation.h>

@class QLAnimationWindowEffect;

@interface QLWindowAnimation : NSAnimation {

	QLAnimationWindowEffect* _windowEffect;

}

@property (readonly) QLAnimationWindowEffect * windowEffect; 
-(void)discardWindowEffect;
-(QLAnimationWindowEffect *)windowEffect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentProgress:(float)arg1 ;
-(float)currentValue;
@end

