/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/DesktopScreenEffectsPref.prefPane/Contents/Resources/ScreenEffects.prefPane/Contents/MacOS/ScreenEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenEffects/SSAnimationWindowEffect.h>

@interface SSFadeWindowEffect : SSAnimationWindowEffect {

	double _initialAlpha;
	double _finalAlpha;
	char _restoreAlpha;

}

@property (assign) char restoreAlpha;              //@synthesize restoreAlpha=_restoreAlpha - In the implementation block
+(id)fadeWindow:(id)arg1 fromAlpha:(double)arg2 toAlpha:(double)arg3 duration:(double)arg4 ;
-(void)setRestoreAlpha:(char)arg1 ;
-(char)restoreAlpha;
-(void)done;
-(void)setValue:(float)arg1 ;
@end
