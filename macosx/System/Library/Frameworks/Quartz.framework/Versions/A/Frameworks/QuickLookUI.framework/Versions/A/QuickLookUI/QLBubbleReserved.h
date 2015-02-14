/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLBubbleDelegate;
#import <QuickLookUI/QuickLookUI-Structs.h>
@class NSView, QLBubbleWindowController, NSWindow, QLControlsController, NSArray, QLBubbleAnimator, NSString, QLAnimationWindowEffect, QLFrameDebugWindow;

@interface QLBubbleReserved : NSObject {

	NSView* contentView;
	QLBubbleWindowController* windowController;
	NSWindow* parentWindow;
	QLControlsController* controlsController;
	NSArray* controls;
	QLBubbleAnimator* animator;
	id<QLBubbleDelegate> delegate;
	int animationType;
	NSString* appearanceName;
	CGRect sourceFrame;
	CGRect animationSourceFrame;
	CGRect animationContentFrame;
	unsigned long long preferredEdge;
	unsigned long long usedEdge;
	char savedVisible;
	long long windowLevel;
	CGPoint aimPoint;
	char forcePreferredEdge;
	char forceTitleBar;
	char forceNoArrow;
	char preventsActivation;
	char skipAnimationInvoke;
	char skipAlphaDuringOpenAnimation;
	char ignoreItemFrameWhenResizing;
	char neverResize;
	char mouseDownCanMoveBubble;
	char bubbleWasManuallyMoved;
	unsigned long long controlAlignment;
	/*^block*/id activateMonitorBlock;
	id eventMonitor;
	char open;
	char closing;
	QLAnimationWindowEffect* effect;
	QLFrameDebugWindow* debugFrameWindow;

}
-(void)finalize;
-(void)dealloc;
@end

