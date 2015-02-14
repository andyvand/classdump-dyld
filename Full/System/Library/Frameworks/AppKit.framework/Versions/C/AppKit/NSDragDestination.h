/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSDraggingInfo.h>
#import <AppKit/NSDraggingInfoPrivate.h>
#import <AppKit/NSDraggingInfo_Private.h>

@class NSWindow, NSString, NSMutableSet;

@interface NSDragDestination : NSObject <NSDraggingInfo, NSDraggingInfoPrivate, NSDraggingInfo_Private> {

	NSWindow* _window;
	OpaqueCoreDragHandlerRef trackingHandlerRef;
	OpaqueCoreDragHandlerRef receiveHandlerRef;
	NSString* _pasteboardName;
	char _finalSlide;
	char _animatesToDst;
	char* _updateDraggingItemsTimerValid;
	char _needUpdateTimer;
	char _springLoadedArmed;
	char _springLoadedActivated;
	unsigned long long _lastDragDestinationOperation;
	CGPoint _finalSlideLocation;
	id _target;
	CFRunLoopTimerRef _updateTimer;
	OpaqueCoreDrag* _drag;
	NSMutableSet* _dragCompletionTargets;
	CFRunLoopRef _runLoop;
	double _lastDragTimestamp;
	CGPoint _lastDragLocation;

}

@property (setter=_setNeedUpdateTimer:) char _needUpdateTimer;                    //@synthesize needUpdateTimer=_needUpdateTimer - In the implementation block
@property (setter=_setLastDragTimestamp:) double _lastDragTimestamp;              //@synthesize lastDragTimestamp=_lastDragTimestamp - In the implementation block
@property (setter=_setLastDragLocation:) CGPoint _lastDragLocation;               //@synthesize lastDragLocation=_lastDragLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long draggingFormation; 
@property (assign) char animatesToDestination; 
@property (assign) long long numberOfValidItemsForDrop; 
-(void)finalize;
-(void)dealloc;
-(NSString *)description;
-(id)_target;
-(id)draggingSource;
-(CGPoint)draggingLocation;
-(unsigned long long)draggingSourceOperationMask;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)_setOnDemandSpringLoadingEnabled:(char)arg1 ;
-(char)_isOnDemandSpringLoadingArmed;
-(char)_isOnDemandSpringLoadingActivated;
-(id)draggingPasteboard;
-(void)slideDraggedImageTo:(CGPoint)arg1 ;
-(void)_setDragCompletionTargets:(id)arg1 ;
-(void)_stopDraggingUpdates;
-(void)_setTarget:(id)arg1 ;
-(void)_invalidateUpdateDraggingItemTimer;
-(long long)draggingFormation;
-(void)setDraggingFormation:(long long)arg1 ;
-(id)draggingDestinationWindow;
-(CGPoint)draggedImageLocation;
-(id)draggedImage;
-(long long)draggingSequenceNumber;
-(void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(char)animatesToDestination;
-(void)setAnimatesToDestination:(char)arg1 ;
-(long long)numberOfValidItemsForDrop;
-(void)setNumberOfValidItemsForDrop:(long long)arg1 ;
-(unsigned long long)_lastDragDestinationOperation;
-(void)_enableSpringLoading:(char)arg1 options:(unsigned long long)arg2 ;
-(id)_initWithWindow:(id)arg1 ;
-(void)_setTrackingHandlerRef:(OpaqueCoreDragHandlerRef)arg1 ;
-(void)_setReceiveHandlerRef:(OpaqueCoreDragHandlerRef)arg1 ;
-(OpaqueCoreDragHandlerRef)_trackingHandlerRef;
-(OpaqueCoreDragHandlerRef)_receiveHandlerRef;
-(void)_setDragRef:(OpaqueCoreDrag*)arg1 ;
-(void)_setFinalSlideLocation:(CGPoint)arg1 ;
-(CGPoint)_finalSlideLocation;
-(void)_setLastDragDestinationOperation:(unsigned long long)arg1 ;
-(id)_dragCompletionTargets;
-(void)_unsetFinalSlide;
-(void)_startDraggingUpdates;
-(void)_doAutoscroll:(id)arg1 ;
-(void)enumerateDraggingItemsForClass:(Class)arg1 view:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_resetUpdateDraggingItemTimer;
-(void)_setOnDemandSpringLoadingActivated:(char)arg1 ;
-(void)_setOnDemandSpringLoadingArmed:(char)arg1 ;
-(void)_resetOnDemandSpringLoading;
-(char)_needUpdateTimer;
-(void)_setNeedUpdateTimer:(char)arg1 ;
-(double)_lastDragTimestamp;
-(void)_setLastDragTimestamp:(double)arg1 ;
-(CGPoint)_lastDragLocation;
-(void)_setLastDragLocation:(CGPoint)arg1 ;
@end

