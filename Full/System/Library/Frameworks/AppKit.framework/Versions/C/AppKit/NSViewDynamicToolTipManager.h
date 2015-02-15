/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView;

@interface NSViewDynamicToolTipManager : NSObject {

	NSView* _view;
	CFRunLoopTimerRef _monitorMovementTimerRef;
	CGPoint _lastFixedMousePoint;
	CGRect _lastFixedMousePointToolTipRect;
	double _lastFixedMousePointTime;
	double _displayToolTipDelay;
	CGRect _toolTipTrackingRect;
	long long _toolTipTrackingRectTag;
	long long _visibleViewTrackingRectTag;
	unsigned _trackingAreaAroundMouse : 1;
	unsigned _inQuickToolTipMode : 1;
	unsigned _mouseInsideVisibleTrackingRect : 1;
	unsigned _reserved : 29;

}
+(void)abortAllToolTips;
+(id)_dynamicToolTipManagerInstances;
+(void)_registerDynamicToolTipManagerInstance:(id)arg1 ;
+(void)_unregisterDynamicToolTipManagerInstance:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)abortToolTip;
-(void)_windowChangedKeyState;
-(void)viewDidMoveToWindow;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(void)detatchFromView;
-(CGRect)dynamicToolTipRectAtPoint:(CGPoint)arg1 ;
-(id)dynamicToolTipStringAtPoint:(CGPoint)arg1 trackingRect:(CGRect*)arg2 ;
-(id)dynamicToolTipRevealoverInfoAtPoint:(CGPoint)arg1 trackingRect:(CGRect*)arg2 ;
-(char)view:(id)arg1 customToolTip:(long long)arg2 fadeOutAllowedForToolTipWithDisplayInfo:(id)arg3 ;
-(char)isExpansionToolTipInView:(id)arg1 withDisplayInfo:(id)arg2 ;
-(void)view:(id)arg1 customToolTip:(long long)arg2 drawInView:(id)arg3 displayInfo:(id)arg4 ;
-(CGRect)view:(id)arg1 customToolTip:(long long)arg2 frameForToolTipWithDisplayInfo:(id)arg3 ;
-(void)viewWillResetCursorRects;
-(void)windowDidEnableToolTipCreationAndDisplay;
-(void)windowChangedKeyState;
-(void)_cancelMovementTrackingTimer;
-(void)_cancelCurrentToolTipWindowImmediately:(char)arg1 ;
-(void)_removeToolTipTrackingRectIfNecessary;
-(CGPoint)_currentLocalMousePoint;
-(void)_restartMovementTracking;
-(void)_disabledTrackingInNeighborhoodOfMouse;
-(void)_setupForWindow:(id)arg1 ;
-(void)_appActivationChanged:(id)arg1 ;
-(void)_removeVisibleViewTrackingRectIfNecessary;
-(void)_removeAllTrackingRects;
-(void)_abortAndRestartTracking:(char)arg1 ;
-(void)_viewVisibleBoundsChanged;
-(void)windowDidBecomeVisibleNotification:(id)arg1 ;
-(void)_threadsafeViewVisibleBoundsChanged;
-(void)_windowDidEnableToolTipCreationAndDisplay;
-(char)_canShowToolTip;
-(void)_markMovementTrackingInfo;
-(char)_shouldTrack;
-(char)_shouldRestartMovementTracking;
-(int)_displayToolTipIfNecessaryIgnoringTime:(char)arg1 ;
-(char)_shouldShowRegularToolTipOnExpansionToolTip;
-(void)_continueMovementTracking;
@end

