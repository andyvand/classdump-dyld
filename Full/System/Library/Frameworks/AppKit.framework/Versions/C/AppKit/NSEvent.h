/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>

@class NSWindow, NSGraphicsContext, NSString, NSTrackingArea;

@interface NSEvent : NSObject <NSCopying, NSCoding> {

	unsigned long long _type;
	CGPoint _location;
	unsigned _modifierFlags;
	id _WSTimestamp;
	double _timestamp;
	long long _windowNumber;
	NSWindow* _window;
	NSGraphicsContext* _context;
	SCD_Union_NS49* _data;
	void* _eventRef;
	void* reserved1;
	void* reserved2;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long modifierFlags; 
@property (readonly) double timestamp; 
@property (readonly) NSWindow * window; 
@property (readonly) long long windowNumber; 
@property (readonly) NSGraphicsContext * context; 
@property (readonly) long long clickCount; 
@property (readonly) long long buttonNumber; 
@property (readonly) long long eventNumber; 
@property (readonly) float pressure; 
@property (readonly) CGPoint locationInWindow; 
@property (readonly) double deltaX; 
@property (readonly) double deltaY; 
@property (readonly) double deltaZ; 
@property (readonly) char hasPreciseScrollingDeltas; 
@property (readonly) double scrollingDeltaX; 
@property (readonly) double scrollingDeltaY; 
@property (readonly) unsigned long long momentumPhase; 
@property (getter=isDirectionInvertedFromDevice,readonly) char directionInvertedFromDevice; 
@property (copy,readonly) NSString * characters; 
@property (copy,readonly) NSString * charactersIgnoringModifiers; 
@property (getter=isARepeat,readonly) char ARepeat; 
@property (readonly) unsigned short keyCode; 
@property (readonly) long long trackingNumber; 
@property (readonly) void* userData; 
@property (readonly) NSTrackingArea * trackingArea; 
@property (readonly) short subtype; 
@property (readonly) long long data1; 
@property (readonly) long long data2; 
@property (readonly) const void* eventRef; 
@property (readonly) CGEventRef CGEvent; 
@property (readonly) double magnification; 
@property (readonly) unsigned long long deviceID; 
@property (readonly) float rotation; 
@property (readonly) long long absoluteX; 
@property (readonly) long long absoluteY; 
@property (readonly) long long absoluteZ; 
@property (readonly) unsigned long long buttonMask; 
@property (readonly) CGPoint tilt; 
@property (readonly) float tangentialPressure; 
@property (readonly) id vendorDefined; 
@property (readonly) unsigned long long vendorID; 
@property (readonly) unsigned long long tabletID; 
@property (readonly) unsigned long long pointingDeviceID; 
@property (readonly) unsigned long long systemTabletID; 
@property (readonly) unsigned long long vendorPointingDeviceType; 
@property (readonly) unsigned long long pointingDeviceSerialNumber; 
@property (readonly) unsigned long long uniqueID; 
@property (readonly) unsigned long long capabilityMask; 
@property (readonly) unsigned long long pointingDeviceType; 
@property (getter=isEnteringProximity,readonly) char enteringProximity; 
@property (readonly) unsigned long long phase; 
+(double)_ql_currentTimestamp;
+(id)mouseEventWithType:(unsigned long long)arg1 location:(CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 eventNumber:(long long)arg7 clickCount:(long long)arg8 pressure:(float)arg9 ;
+(id)otherEventWithType:(unsigned long long)arg1 location:(CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 subtype:(short)arg7 data1:(long long)arg8 data2:(long long)arg9 ;
+(void)removeMonitor:(id)arg1 ;
+(id)addLocalMonitorForEventsMatchingMask:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
+(void)_fluidSwipeTrackingBehaviorChanged;
+(void)_registerForConcurrentEventProcessing;
+(unsigned long long)modifierFlags;
+(id)_delayedEventMatchingMask:(unsigned long long)arg1 pull:(char)arg2 ;
+(id)enterExitEventWithType:(unsigned long long)arg1 location:(CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 eventNumber:(long long)arg7 trackingNumber:(long long)arg8 userData:(void*)arg9 ;
+(void)_discardEventsWithMask:(unsigned long long)arg1 eventTime:(unsigned long long)arg2 ;
+(id)keyEventWithType:(unsigned long long)arg1 location:(CGPoint)arg2 modifierFlags:(unsigned long long)arg3 timestamp:(double)arg4 windowNumber:(long long)arg5 context:(id)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8 isARepeat:(char)arg9 keyCode:(unsigned short)arg10 ;
+(id)_eventsCancellingTouchesForWindow:(id)arg1 ;
+(void)_clearCancelledTouches;
+(CGPoint)mouseLocation;
+(void)_discardCursorEventsForWindowNumber:(long long)arg1 criteria:(long long)arg2 ;
+(id)_eventWithEventRefInternal:(const void*)arg1 ;
+(void)_stopPeriodicEventsForSource:(id)arg1 ;
+(void)startPeriodicEventsAfterDelay:(double)arg1 withPeriod:(double)arg2 ;
+(void)stopPeriodicEvents;
+(double)doubleClickInterval;
+(double)keyRepeatDelay;
+(double)keyRepeatInterval;
+(char)_isConcurrentEventProcessingOn;
+(id)eventWithCGEvent:(CGEventRef)arg1 ;
+(void)_resetDiscardMask;
+(void)_discardEventsFromSubthread:(id)arg1 ;
+(void)_discardEventsMatchingMask:(unsigned long long)arg1 beforeTime:(unsigned long long)arg2 inQueue:(unsigned long long)arg3 ;
+(void)_discardEventsForTrackingArea:(id)arg1 window:(id)arg2 ;
+(id)_touchesFromSet:(id)arg1 matchingPhase:(unsigned long long)arg2 inView:(id)arg3 includeResting:(char)arg4 ;
+(id)_quickLookEventWithLocation:(CGPoint)arg1 modifierFlags:(unsigned long long)arg2 timestamp:(double)arg3 windowNumber:(long long)arg4 context:(id)arg5 eventNumber:(long long)arg6 ;
+(unsigned long long)pressedMouseButtons;
+(id)addGlobalMonitorForEventsMatchingMask:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
+(id)_sendEventToObservers:(id)arg1 ;
+(id)_eventWithCGSEvent:(CGSEventRecord*)arg1 ;
+(id)eventWithEventRef:(const void*)arg1 ;
+(void)setMouseCoalescingEnabled:(char)arg1 ;
+(char)isMouseCoalescingEnabled;
+(double)standardMagnificationThreshold;
+(float)standardRotationThreshold;
+(void)_discardEventsForTrackingArea:(id)arg1 ;
+(double)lastSwipeVelocity;
+(char)isSwipeTrackingFromScrollEventsEnabled;
+(id)_navigationEventWithCommand:(long long)arg1 data:(long long)arg2 windowNumber:(long long)arg3 ;
+(char)_isConcurrentEventProcessingSupported:(id*)arg1 ;
+(void)_startConcurrentEventProcessing;
+(void)_updateMainThreadEventFilter;
+(id)_addConcurrentEventMonitorMatchingMask:(unsigned long long)arg1 identifier:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)_removeConcurrentEventMonitor:(id)arg1 ;
+(id)_nextConcurrentEventMatchingMask:(unsigned long long)arg1 ;
-(char)isDeadKey;
-(char)_web_isKeyEvent:(unsigned short)arg1 ;
-(char)_web_isTabKeyEvent;
-(char)_web_isDeleteKeyEvent;
-(char)_web_isEscapeKeyEvent;
-(char)_web_isOptionTabKeyEvent;
-(char)_web_isReturnOrEnterKeyEvent;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)copy;
-(NSGraphicsContext *)context;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(long long)windowNumber;
-(NSWindow *)window;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_matchesKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2 ;
-(double)timestamp;
-(unsigned long long)type;
-(short)subtype;
-(long long)data1;
-(id)_eventRelativeToWindow:(id)arg1 ;
-(CGPoint)locationInWindow;
-(long long)clickCount;
-(unsigned long long)modifierFlags;
-(unsigned long long)_cgsEventTime;
-(long long)eventNumber;
-(id)_initWithCGSEvent:(CGSEventRecord*)arg1 eventRef:(void*)arg2 ;
-(long long)trackingNumber;
-(void*)userData;
-(unsigned long long)phase;
-(void)_postAtStart:(char)arg1 ;
-(void*)_eventRef;
-(NSString *)charactersIgnoringModifiers;
-(const void*)eventRef;
-(char)isARepeat;
-(unsigned short)keyCode;
-(id)touchesMatchingPhase:(unsigned long long)arg1 inView:(id)arg2 ;
-(id)_eventCancellingTouches;
-(char)_isTouchesEnded;
-(long long)data2;
-(CGSEventRecord*)_cgsEventRecord;
-(NSTrackingArea *)trackingArea;
-(double)scrollingDeltaX;
-(double)scrollingDeltaY;
-(unsigned long long)momentumPhase;
-(CGSize)velocity;
-(long long)gestureAxis;
-(long long)_gestureAxis;
-(float)pressure;
-(NSString *)characters;
-(double)deltaY;
-(double)magnification;
-(double)deltaX;
-(unsigned long long)buttonMask;
-(char)hasPreciseScrollingDeltas;
-(CGEventRef)CGEvent;
-(const void*)_eventRefInternal;
-(void)_fixCommandAlphaShifts;
-(void)_setSynthesizedKeyEvent:(char)arg1 ;
-(void)_setTouches:(id)arg1 ;
-(id)_initWithEventRefInternal:(const void*)arg1 ;
-(id)_touchesMatchingPhase:(unsigned long long)arg1 inView:(id)arg2 includeResting:(char)arg3 ;
-(void)_initTouches;
-(double)_eventRecordDelta:(long long)arg1 ;
-(void)_initAuxiliaryData;
-(void)_postFromSubthread:(char)arg1 ;
-(long long)buttonNumber;
-(unsigned long long)deviceID;
-(id)vendorDefined;
-(long long)absoluteX;
-(long long)absoluteY;
-(long long)absoluteZ;
-(CGPoint)tilt;
-(float)rotation;
-(float)tangentialPressure;
-(unsigned long long)vendorID;
-(unsigned long long)tabletID;
-(unsigned long long)pointingDeviceID;
-(unsigned long long)systemTabletID;
-(unsigned long long)vendorPointingDeviceType;
-(unsigned long long)pointingDeviceSerialNumber;
-(unsigned long long)uniqueID;
-(unsigned long long)capabilityMask;
-(unsigned long long)pointingDeviceType;
-(char)isEnteringProximity;
-(double)deltaZ;
-(char)_continuousScroll;
-(double)deviceDeltaX;
-(double)deviceDeltaY;
-(double)deviceDeltaZ;
-(long long)_scrollCount;
-(double)gestureAmount;
-(char)_isSynthesizedKeyEvent;
-(void)trackSwipeEventWithOptions:(unsigned long long)arg1 dampenAmountThresholdMin:(double)arg2 max:(double)arg3 trackingDistance:(double)arg4 axis:(long long)arg5 usingHandler:(/*^block*/id)arg6 ;
-(id)_initWithCGEvent:(CGEventRef)arg1 eventRef:(void*)arg2 ;
-(double)_unacceleratedScrollingDeltaX;
-(double)_unacceleratedScrollingDeltaY;
-(void)_resetScrollAcceleration;
-(char)_isDeadkey;
-(void)_setEventRef:(void*)arg1 ;
-(void)_postDelayed;
-(char)isGesture;
-(long long)_scrollPhase;
-(long long)_nxeventTime;
-(char)isDirectionInvertedFromDevice;
-(double)progress;
-(void)trackSwipeEventWithOptions:(unsigned long long)arg1 dampenAmountThresholdMin:(double)arg2 max:(double)arg3 usingHandler:(/*^block*/id)arg4 ;
-(CGSize)_velocity;
-(unsigned long long)associatedEventsMask;
-(long long)command;
@end

