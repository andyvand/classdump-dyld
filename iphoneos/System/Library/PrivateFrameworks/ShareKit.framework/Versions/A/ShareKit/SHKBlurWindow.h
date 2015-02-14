/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <ShareKit/SHKBorderlessEffectWindow.h>

@class CALayer;

@interface SHKBlurWindow : SHKBorderlessEffectWindow {

	CALayer* blurLayer;
	char animatesTransitions;
	unsigned long long _serviceMask;

}

@property (assign) CGRect blurFrame; 
@property (assign) char animatesTransitions; 
@property (assign) unsigned long long serviceMask;              //@synthesize serviceMask=_serviceMask - In the implementation block
-(void)setServiceMask:(unsigned long long)arg1 ;
-(unsigned long long)serviceMask;
-(id)initWithFrame:(CGRect)arg1 noSourceWindow:(char)arg2 ;
-(void)setBlurFrame:(CGRect)arg1 ;
-(void)animateBlurLayerToFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 ;
-(void)startBlurWithServiceScreenFrame:(CGRect)arg1 initialLayerTransform:(CGAffineTransform)arg2 ;
-(void)continueBlurWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(char)arg2 ;
-(void)continueBlurWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(char)arg2 currentMediaTime:(double)arg3 ;
-(void)startTransitionOut;
-(void)setAnimatesTransitions:(char)arg1 ;
-(CGRect)blurFrame;
-(char)animatesTransitions;
@end

