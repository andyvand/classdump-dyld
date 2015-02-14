/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSResponder.h>
#import <QuickLookUI/QLIndexSheetDelegate.h>
#import <QuickLookUI/QLControlsDelegate.h>

@class QLPreviewPanelController, QLControlsController, NSView, NSWindow, QLPreviewPageNavigationView, QLFullscreenControlsPanel, QLTimeSlider, QLPreviewScroller, NSTimer, QLFadeWindowEffect, QLScaleWindowEffect, NSTrackingArea, NSString;

@interface QLFullscreenController : NSResponder <QLIndexSheetDelegate, QLControlsDelegate> {

	int _status;
	QLPreviewPanelController* _panelController;
	QLControlsController* _controlsController;
	CGPoint _controlsCenterPosition;
	CGPoint _controlsOrigin;
	NSView* _fullscreenView;
	NSWindow* _fullscreenWindow;
	NSWindow* _backgroundFullscreenWindow;
	NSWindow* _pageNavigationWindow;
	QLPreviewPageNavigationView* _pageNavigationView;
	QLFullscreenControlsPanel* _controlsPanel;
	NSView* _controlsView;
	QLTimeSlider* _timeSlider;
	QLPreviewScroller* _scroller;
	NSTimer* _fadeTimer;
	QLFadeWindowEffect* _fadeEffect;
	QLScaleWindowEffect* _sizeEffect;
	NSTrackingArea* _mouseEnterTrackingArea;
	char _listeningToMouseMovements;
	char _showControls;
	char _fitToScreen;
	char _withPanel;
	char _startSlideshow;
	unsigned long long _originalPresentationOptions;
	unsigned _displaySleepAssertionID;
	char _displaySleepDisabled;

}

@property (assign) QLPreviewPanelController * panelController;              //@synthesize panelController=_panelController - In the implementation block
@property (assign) int status;                                              //@synthesize status=_status - In the implementation block
@property (readonly) NSWindow * fullscreenWindow;                           //@synthesize fullscreenWindow=_fullscreenWindow - In the implementation block
@property (assign) char showControls; 
@property (assign) char fitToScreen; 
@property (assign) double previewOpacity; 
@property (assign) CGPoint controlsCenterPosition;                          //@synthesize controlsCenterPosition=_controlsCenterPosition - In the implementation block
@property (assign) CGPoint controlsOrigin;                                  //@synthesize controlsOrigin=_controlsOrigin - In the implementation block
@property (assign) char hasViewControls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long indexSheetMaxColumns; 
@property (readonly) unsigned long long indexSheetMaxRows; 
@property (readonly) char indexSheetHasDarkBackground; 
@property (readonly) char indexSheetShowsControls; 
@property (readonly) NSView * indexSheetHostingView; 
@property (readonly) CGRect indexSheetFrame; 
-(void)_setupControls;
-(NSWindow *)fullscreenWindow;
-(void)setShowControls:(char)arg1 ;
-(void)setPanelController:(QLPreviewPanelController *)arg1 ;
-(void)enterFullscreenForView:(id)arg1 withEffect:(int)arg2 frame:(CGRect)arg3 fromPanel:(char)arg4 startSlideshow:(char)arg5 ;
-(void)exitFullscreenWithEffect:(int)arg1 frame:(CGRect)arg2 toPanel:(char)arg3 ;
-(void)setPreviewOpacity:(double)arg1 ;
-(void)setFitToScreen:(char)arg1 ;
-(void)updateNavigationControls;
-(void)controlsController:(id)arg1 didLayoutWithWidth:(double)arg2 oldWidth:(double)arg3 ;
-(CGImageRef)copyIndexSheetTransitionImageWithFrame:(CGRect*)arg1 transitionFrame:(CGRect*)arg2 ;
-(unsigned long long)indexSheetMaxColumns;
-(unsigned long long)indexSheetMaxRows;
-(char)indexSheetHasDarkBackground;
-(char)indexSheetShowsControls;
-(NSView *)indexSheetHostingView;
-(CGRect)indexSheetFrame;
-(void)indexSheetWillActivate:(id)arg1 ;
-(void)indexSheetDidActivate:(id)arg1 ;
-(void)indexSheetWillDeactivate:(id)arg1 ;
-(void)indexSheetDidDeactivate:(id)arg1 ;
-(QLPreviewPanelController *)panelController;
-(id)_accessibilityControls;
-(void)setControlsCenterPosition:(CGPoint)arg1 ;
-(void)setControlsOrigin:(CGPoint)arg1 ;
-(void)_updateControls;
-(void)setHasViewControls:(char)arg1 ;
-(void)_setFitToScreen:(char)arg1 animate:(char)arg2 ;
-(char)showControls;
-(void)_moveFullscreenViewToView:(id)arg1 frame:(CGRect)arg2 showControls:(char)arg3 fitToScreen:(char)arg4 coalesceFlushes:(char)arg5 ;
-(CGRect)_scaledFrameForWindowFrame:(CGRect)arg1 withFrame:(CGRect)arg2 matchingFrame:(CGRect)arg3 scalable:(char)arg4 ;
-(id)_newFullscreenWindowWithFrame:(CGRect)arg1 ;
-(id)_newBackgroundFullscreenWindowWithFrame:(CGRect)arg1 ;
-(void)_enteredFullscreen;
-(id)_scaleEffectForItemFrame:(CGRect)arg1 fullscreenFrame:(CGRect)arg2 withPanel:(char)arg3 transitionWindows:(id*)arg4 ;
-(void)_stopControlsFade;
-(void)_setActivatePageNavigator:(char)arg1 ;
-(void)_stopListeningToMouseMovement;
-(void)_enableDisplaySleep;
-(void)_exitedFullscreen;
-(void)_disableDisplaySleep;
-(void)_newWindowWillAppear:(id)arg1 ;
-(void)_showControlsPanel;
-(void)_scheduleHideControlsPanel;
-(void)_unpauseDisableDisplaySleep;
-(void)_pauseDisableDisplaySleep;
-(char)hasViewControls;
-(void)_startListeningToMouseMovement;
-(void)fadeControlsPanel:(id)arg1 ;
-(void)_setShowPageNavigator:(char)arg1 ;
-(void)_hideControlsPanel;
-(CGPoint)controlsOrigin;
-(CGPoint)controlsCenterPosition;
-(void)updateControlsPanelWithWidth:(double)arg1 animate:(char)arg2 keepCentered:(char)arg3 ;
-(CGRect)_fullscreenWindowFrameFromScreen:(id)arg1 ;
-(void)_moveFullscreenViewToView:(id)arg1 ;
-(double)previewOpacity;
-(char)fitToScreen;
-(id)init;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)worksWhenModal;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(int)status;
-(void)flagsChanged:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setStatus:(int)arg1 ;
@end

