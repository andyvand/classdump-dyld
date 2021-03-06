/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <AppKit/NSView.h>
#import <Shortcut/SCTAnimatable.h>

@class NSImage, CIImage, NSShadow;

@interface SCTHelpPointerView : NSView <SCTAnimatable> {

	CGRect mInitialBounds;
	NSImage* mRHSPointerImage;
	NSImage* mLHSPointerImage;
	CIImage* mRHSPointerCIImage;
	NSShadow* mShadow;
	CGRect mPreviousRect;
	char mIsRightHandSide;
	unsigned mCurrentMode;
	unsigned long long mControlTint;
	float mAnimationProgress;
	float mScale;

}
-(void)updateProgress:(float)arg1 ;
-(void)setIsOnRightHandSide:(char)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)animationShouldStart:(id)arg1 ;
-(char)isOpaque;
-(char)wantsDefaultClipping;
-(void)updateScale:(float)arg1 ;
@end

