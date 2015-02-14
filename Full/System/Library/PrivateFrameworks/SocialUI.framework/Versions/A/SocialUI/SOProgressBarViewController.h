/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSView, NSLayoutConstraint;

@interface SOProgressBarViewController : NSObject {

	char _iMessageable;
	NSView* _sendingView;
	NSView* _progressBarView;
	NSLayoutConstraint* _progressBarViewWidthConstraint;

}

@property (assign,setter=setiMessageable:,nonatomic) char iMessageable;              //@synthesize iMessageable=_iMessageable - In the implementation block
@property (retain) NSView * sendingView;                                             //@synthesize sendingView=_sendingView - In the implementation block
@property (retain) NSView * progressBarView;                                         //@synthesize progressBarView=_progressBarView - In the implementation block
@property (retain) NSLayoutConstraint * progressBarViewWidthConstraint;              //@synthesize progressBarViewWidthConstraint=_progressBarViewWidthConstraint - In the implementation block
-(void)finish;
-(NSView *)progressBarView;
-(void)_resetProgressBar;
-(void)_resetProgressBarColor;
-(void)_updateProgressBarConstraintWithMultiplier:(double)arg1 ;
-(NSView *)sendingView;
-(void)_finishSendingView;
-(char)iMessageable;
-(NSLayoutConstraint *)progressBarViewWidthConstraint;
-(void)setProgressBarViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_setupProgressBar;
-(void)_fadeOutSendingView;
-(void)_setupSendingView;
-(void)_finishProgressBar;
-(void)_setProgressValue:(double)arg1 oldProgress:(double)arg2 animate:(char)arg3 ;
-(double)_sendingViewWidth;
-(void)setProgressValue:(double)arg1 oldProgress:(double)arg2 sending:(unsigned long long)arg3 total:(unsigned long long)arg4 animate:(char)arg5 ;
-(void)setiMessageable:(char)arg1 ;
-(void)setSendingView:(NSView *)arg1 ;
-(void)setProgressBarView:(NSView *)arg1 ;
-(void)awakeFromNib;
-(void)setup;
@end

