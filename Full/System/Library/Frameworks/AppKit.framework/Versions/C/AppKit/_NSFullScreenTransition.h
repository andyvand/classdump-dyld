/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSStatusItem, NSWindow, _NSFullScreenTransitionOverlayWindow, NSMutableArray, NSSet;

@interface _NSFullScreenTransition : NSObject {

	unsigned _transitionedWid;
	unsigned long long _spaceID;
	NSStatusItem* exitStatusItem;
	OpaqueHIPresentationInstanceRefRef _presentationInstance;
	NSWindow* fullScreenWindow;
	unsigned long long fullScreenPresentationOptions;
	unsigned long long _startingSpaceID;
	id _transitionedWindowBeforeContents;
	id _transitionedWindowAfterContents;
	CGRect _transitionedWindowBeforeSnapshotFrame;
	CGRect _shadowDeltaRect;
	_NSFullScreenTransitionOverlayWindow* _overlayWindow;
	NSMutableArray* _backgroundWindows;
	NSSet* _participatingWindowNums;
	NSSet* _dockAppointedAllSpaceWindowNumbers;
	long long _fullScreenState;
	char needsBackgroundWindowOrdering;
	char _suppressImplicitFullScreenForOtherWindows;
	char _hasCustomBackgroundColor;

}

@property (assign) unsigned transitionedWid;                                             //@synthesize transitionedWid=_transitionedWid - In the implementation block
@property (assign) unsigned long long spaceID;                                           //@synthesize spaceID=_spaceID - In the implementation block
@property (assign) unsigned long long startingSpaceID;                                   //@synthesize startingSpaceID=_startingSpaceID - In the implementation block
@property (assign) OpaqueHIPresentationInstanceRefRef presentationInstance;              //@synthesize presentationInstance=_presentationInstance - In the implementation block
@property (readonly) unsigned long long fullScreenPresentationOptions; 
@property (readonly) char suppressImplicitFullScreenForOtherWindows;                     //@synthesize suppressImplicitFullScreenForOtherWindows=_suppressImplicitFullScreenForOtherWindows - In the implementation block
+(void)initialize;
+(unsigned long long)defaultFullScreenPresentationOptions;
-(id)init;
-(void)dealloc;
-(id)screen;
-(void)displayChanged;
-(unsigned long long)fullScreenPresentationOptions;
-(OpaqueHIPresentationInstanceRefRef)presentationInstance;
-(long long)fullScreenState;
-(unsigned long long)spaceID;
-(id)fullScreenWindow;
-(char)suppressImplicitFullScreenForOtherWindows;
-(CGColorRef)backgroundColor;
-(void)exitFullScreenStatusItemClicked:(id)arg1 ;
-(char)_maybeAssignWindow:(id)arg1 ;
-(long long)shieldWindowNumber;
-(void)setTransitionedWindowFrame:(CGRect)arg1 ;
-(void)orderTransitionedWindowFront;
-(void)enterFullScreenTransitionFinished;
-(void)exitFullScreenTransitionFinished;
-(CGSize)transitionedWindowShadowOffset;
-(CGImageRef)_getWindowSnapshotImageForWindowIDs:(CFArrayRef)arg1 withShadow:(char)arg2 onSpace:(unsigned long long)arg3 ;
-(CGRect)transitionedWindowFrame;
-(CGRect)_updateShadowDeltaRect:(CGRect*)arg1 forFrame:(CGRect)arg2 basedOnImage:(CGImageRef)arg3 ;
-(void)setTransitionedWid:(unsigned)arg1 ;
-(void)setFullScreenState:(long long)arg1 ;
-(void)_makeAndUpdateOverlayWindowIfNeeded;
-(unsigned)transitionedWid;
-(void)_startFullScreenTransitionForCGWindow:(unsigned)arg1 targetFrame:(CGRect)arg2 duration:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_discardWindowSnapshots;
-(void)prepareWindowForExitTransition;
-(void)setSpaceID:(unsigned long long)arg1 ;
-(void)destroyExitFullScreenStatusItemIfNecessary;
-(void)setPresentationInstance:(OpaqueHIPresentationInstanceRefRef)arg1 ;
-(CFArrayRef)copyWindowNumbersForScreenShot;
-(void)_takeStartingWindowSnapshots:(CFArrayRef)arg1 withShadow:(char)arg2 onSpace:(unsigned long long)arg3 ;
-(void)_takeEndingWindowSnapshots:(CFArrayRef)arg1 withShadow:(char)arg2 onSpace:(unsigned long long)arg3 ;
-(id)_customColorForBackgroundWindow;
-(id)createContentViewWithFrame:(CGRect)arg1 customColor:(id)arg2 ;
-(id)createBackgroundWindowOnScreen:(id)arg1 ;
-(id)_createBackgroundWindows;
-(id)cocoaWindow;
-(void*)carbonWindow;
-(id)_getPossibleCustomWindowsForEnteringIntoFullScreen;
-(void)setStartingSpaceID:(unsigned long long)arg1 ;
-(unsigned long long)startingSpaceID;
-(void)captureCurrentBeforeScreenShotsIncludingShadow:(char)arg1 startingSpace:(unsigned long long)arg2 ;
-(void)makeAndSetupOverlayWindow;
-(void)swapOriginalWindowWithOverlayWindow;
-(void)setWindowToHaveFullScreenSize;
-(void)_setupToolbarWindowIfNeeded;
-(void)captureCurrentAfterScreenShotsIncludingShadow:(char)arg1 destinationSpace:(unsigned long long)arg2 ;
-(void)_performEnterFullScreenModeAnimating:(char)arg1 activating:(char)arg2 customWindows:(id)arg3 ;
-(id)_participatingWindowNumbersForTransition:(long long)arg1 animation:(char)arg2 customWindows:(id)arg3 ;
-(id)_maybeFilterParticipatingWindowNumbers:(id)arg1 byScreen:(id)arg2 ;
-(id)_createDockAppointedAllSpaceWindowNumsFromParticipatingWindowNumbers:(id)arg1 ;
-(void)_setOrClearAllSpaceBindings:(char)arg1 ;
-(void)_setFloatingWindowTag:(char)arg1 forWindowNumbers:(id)arg2 ;
-(void)setCarbonCGOrderingForTransitionedWindowEnabled:(char)arg1 ;
-(id)fullScreenTitle;
-(void)_rebindAndReleaseDockAppointedAllSpaceWindows;
-(void)_cleanupBackgroundWindows;
-(void)failedToEnterFullScreenWithAnimation:(char)arg1 whichIsKitAnimation:(char)arg2 ;
-(void)_associateWindowWithSpace;
-(void)setFullScreenWindow:(id)arg1 ;
-(void)makeExitFullScreenStatusItem;
-(void)_startWatchingForWindowsNotInCustomWindows:(id)arg1 ;
-(CGRect)_windowFrameForFullScreenMode;
-(void)_startEnterFullScreenTransitionForCGWindow:(unsigned)arg1 targetFrame:(CGRect)arg2 duration:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)prepareToStartExitFullScreenTransitionForCGWindow:(unsigned)arg1 snapshotStartFrame:(CGRect)arg2 ;
-(void)startExitFullScreenTransitionForCGWindow:(unsigned)arg1 targetFrame:(CGRect)arg2 duration:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enterFullScreenInstantly;
-(void)exitFullScreenInstantly;
-(void)adjustBackgroundWindowOrdering;
-(void)displayChangedForMissionControlMoveOfWindow:(long long)arg1 ;
-(void)enterFullScreenTransitionWithOptions:(unsigned long long)arg1 animated:(char)arg2 activatingIt:(char)arg3 ;
@end

