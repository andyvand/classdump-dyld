/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCarbonWindow.h>

@class NSMutableDictionary;

@interface NSCarbonMenuWindow : NSCarbonWindow {

	NSMutableDictionary* _trackingRectDictionary;
	OpaqueEventHandlerRefRef _windowEventHandler;
	OpaqueEventHandlerRefRef _controlEventHandler;
	struct {
		unsigned windowRefIsDeallocated : 1;
		unsigned settingFirstResponder : 1;
		unsigned unhandledKey : 1;
		unsigned blockInputContext : 1;
		unsigned keyWindowProperties : 2;
		unsigned reserved : 26;
	}  _flags;
	id _rememberedKeyWindow;
	const long long* _rememberedWindowOrdering;
	unsigned long long _rememberedWindowOrderingCount;
	id _carbonMenuWindowReserved;

}
+(double)_scaleFactorForStyleMask:(unsigned long long)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)makeFirstResponder:(id)arg1 ;
-(char)_hasActiveControls;
-(void)_setVisible:(char)arg1 ;
-(void)makeKeyWindow;
-(void)resignKeyWindow;
-(char)accessibilityIsChildOfApp;
-(void)enableFlushWindow;
-(void)keyDown:(id)arg1 ;
-(void)displayIfNeeded;
-(void)_restorePreviousKeyWindowFromSavedProperties;
-(id)initWithCarbonWindowRef:(OpaqueWindowPtrRef)arg1 takingOwnership:(char)arg2 disableOrdering:(char)arg3 ;
-(void)_postCarbonWindowActivateEvent:(char)arg1 makeKeyWindow:(char)arg2 ;
-(char)_handleEventsTheCarbonWay;
-(char)_allowsActiveInputContext;
-(void)_removeReferencesToCarbonWindowRef;
-(void)disableScreenUpdatesUntilFlush;
-(void)keyUp:(id)arg1 ;
-(id)_substituteKeyWindowForAction:(SEL)arg1 ;
-(void)_removeTrackingRects:(long long*)arg1 count:(long long)arg2 ;
-(void)_moveTrackingArea:(id)arg1 toRect:(CGRect)arg2 ;
-(id)_runLoopModesForInvalidCursorRectsObserver;
-(char)_shouldPropagateFrameChangesToWindowServer;
-(void)_installTrackingRects:(CGRect*)arg1 insideList:(char*)arg2 userDataList:(void*)arg3 trackingNumList:(long long*)arg4 count:(long long)arg5 ;
-(void)_removeTrackingRect:(long long)arg1 ;
-(char)_allowsActiveInputContextDuringMenuTracking;
-(void)_setCursorRect:(CGRect)arg1 index:(long long)arg2 ;
-(void)_discardCursorRect:(long long)arg1 ;
-(void)_installTrackingRect:(CGRect)arg1 assumeInside:(char)arg2 userData:(void*)arg3 trackingNum:(long long)arg4 ;
-(long long)_trackingAreaIDForTrackingArea:(id)arg1 ;
-(void)_updateMouseMovedState;
-(void)_recordPreviousKeyWindowProperties;
-(id)_findKeyWindowToRestoreFromSavedProperties;
-(void)_clearPreviousKeyWindowProperties;
-(void)_propagateCocoaDirtyRectsForView:(id)arg1 toCarbonView:(OpaqueControlRefRef)arg2 ;
-(void)_recursivelyPropagateCocoaDirtyRectsForView:(id)arg1 toCarbonView:(OpaqueControlRefRef)arg2 ;
-(void)_recursivelyPropagateCocoaDirtyRectsToCarbonForHIView:(OpaqueControlRefRef)arg1 ;
-(char)_handleKeyEvent:(id)arg1 ;
-(void)_sendManufacturedTrackingAreaEventsForMouseDraggedEvent:(id)arg1 forceExit:(char)arg2 ;
-(char)_sendManufacturedCursorUpdateEventForTrackingRectEvent:(id)arg1 ;
-(void)_setLastHitView:(id)arg1 ;
-(void*)_trackingAreaInfoForTrackingRectTag:(long long)arg1 ;
-(void)_carbonWindowRefChangedVisibilityTo:(char)arg1 ;
-(void)_carbonWindowRefWillDraw;
-(void)_enableFlushWindowWithoutPerformingFlush;
@end

