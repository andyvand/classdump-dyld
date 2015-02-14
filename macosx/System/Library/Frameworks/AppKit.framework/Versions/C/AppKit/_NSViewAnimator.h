/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSObjectAnimator.h>

@interface _NSViewAnimator : _NSObjectAnimator
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setHidden:(char)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addSubview:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)superview;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)subviews;
-(void)replaceSubview:(id)arg1 with:(id)arg2 ;
-(void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)removeFromSuperviewWithoutNeedingDisplay;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(void)setFrameRotation:(double)arg1 ;
-(void)setAlphaValue:(double)arg1 ;
-(void)setShadow:(id)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
-(void)setBackgroundFilters:(id)arg1 ;
-(void)setContentFilters:(id)arg1 ;
-(char)_useCoreAnimationFrameChanges;
-(void)setFrameCenterRotation:(double)arg1 ;
-(CGPoint)frameOrigin;
-(CGSize)frameSize;
-(char)_useCoreAnimationFrameOriginChanges;
-(char)_shouldDoAnimation;
-(char)_isLayerBackedAtNotTheRootLayer;
-(char)_shouldDoLayerAnimation;
@end

