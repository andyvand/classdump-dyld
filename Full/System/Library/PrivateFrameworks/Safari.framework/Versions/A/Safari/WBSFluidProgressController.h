/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressRocketEffectDelegate;
@class NSImage, NSTimer;

@interface WBSFluidProgressController : NSObject {

	NSImage* _windowSnapshotA;
	NSImage* _windowSnapshotB;
	char _useWindowSnapshotBNextTime;
	NSTimer* _snapshotTimer;
	id<WBSFluidProgressControllerDelegate> _delegate;
	id<WBSFluidProgressControllerWindowDelegate> _windowDelegate;
	id<WBSFluidProgressRocketEffectDelegate> _rocketTestDelegate;

}

@property (__weak) id<WBSFluidProgressControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;              //@synthesize windowDelegate=_windowDelegate - In the implementation block
@property (__weak) id<WBSFluidProgressRocketEffectDelegate> rocketTestDelegate;              //@synthesize rocketTestDelegate=_rocketTestDelegate - In the implementation block
-(void)startFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)finishFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)startRocketEffectWithProgressStateSource:(id)arg1 ;
-(void)cancelFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(char)arg2 ;
-(void)setWindowDelegate:(id<WBSFluidProgressControllerWindowDelegate>)arg1 ;
-(void)setRocketTestDelegate:(id<WBSFluidProgressRocketEffectDelegate>)arg1 ;
-(void)frontmostTabDidChange;
-(void)animationStepCompleted:(id)arg1 ;
-(void)_stopSnapshotSafariWindowTimer;
-(void)_snapshotSafariWindow:(id)arg1 ;
-(void)_updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(id<WBSFluidProgressControllerWindowDelegate>)windowDelegate;
-(id<WBSFluidProgressRocketEffectDelegate>)rocketTestDelegate;
-(void)setDelegate:(id<WBSFluidProgressControllerDelegate>)arg1 ;
-(id<WBSFluidProgressControllerDelegate>)delegate;
@end
