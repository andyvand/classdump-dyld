/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@protocol NSGestureRecognizerDelegate;
@class NSMutableArray, NSView, NSEvent, NSMutableSet;

@interface NSGestureRecognizer : NSObject <NSCoding> {

	NSMutableArray* _targets;
	id _target;
	SEL _action;
	NSMutableArray* _delayedEvents;
	NSView* _view;
	NSEvent* _updateEvent;
	id<NSGestureRecognizerDelegate> _delegate;
	NSMutableSet* _friends;
	long long _state;
	unsigned long long _gestureFlags;
	unsigned long long _delayFlags;
	NSMutableSet* _failureRequirements;
	NSMutableSet* _failureDependents;
	NSMutableSet* _dynamicFailureRequirements;
	NSMutableSet* _dynamicFailureDependents;
	id _failureMap;
	id _reserved;

}

@property (__weak) id target;                                                           //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                                          //@synthesize action=_action - In the implementation block
@property (readonly) long long state; 
@property (__weak) id<NSGestureRecognizerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEnabled) char enabled; 
@property (readonly) NSView * view; 
@property (assign) char delaysPrimaryMouseButtonEvents; 
@property (assign) char delaysSecondaryMouseButtonEvents; 
@property (assign) char delaysOtherMouseButtonEvents; 
@property (assign) char delaysKeyEvents; 
@property (assign) char delaysMagnificationEvents; 
@property (assign) char delaysRotationEvents; 
@property (nonatomic,readonly) NSMutableSet * _failureRequirements;                     //@synthesize failureRequirements=_failureRequirements - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _failureDependents;                       //@synthesize failureDependents=_failureDependents - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _dynamicFailureRequirements;              //@synthesize dynamicFailureRequirements=_dynamicFailureRequirements - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _dynamicFailureDependents;                //@synthesize dynamicFailureDependents=_dynamicFailureDependents - In the implementation block
-(id)init;
-(void)setDelegate:(id<NSGestureRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)_setFailureMap:(id)arg1 ;
-(char)isEnabled;
-(NSView *)view;
-(NSMutableSet *)_failureRequirements;
-(NSMutableSet *)_dynamicFailureRequirements;
-(long long)state;
-(char)_isDirty;
-(id)_briefDescription;
-(id)_failureMap;
-(void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2 ;
-(void)_queueForResetIfFinished;
-(NSMutableSet *)_failureDependents;
-(NSMutableSet *)_dynamicFailureDependents;
-(id)target;
-(SEL)action;
-(id<NSGestureRecognizerDelegate>)delegate;
-(void)rightMouseDown:(id)arg1 ;
-(void)_updateGestureStateWithEvent:(id)arg1 afterDelay:(char)arg2 ;
-(id)_auxiliaryStorage;
-(void)setView:(NSView *)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)reset;
-(void)_invalidate;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelaysMagnificationEvents:(char)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)translateWithEvent:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)setDelaysPrimaryMouseButtonEvents:(char)arg1 ;
-(void)setDelaysSecondaryMouseButtonEvents:(char)arg1 ;
-(void)setDelaysOtherMouseButtonEvents:(char)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)_deallocAuxiliaryStorage;
-(void)setDelaysRotationEvents:(char)arg1 ;
-(void)rotateWithEvent:(id)arg1 ;
-(void)tabletPoint:(id)arg1 ;
-(char)shouldBeArchived;
-(char)_delegateShouldAttemptToRecognizeWithEvent:(id)arg1 ;
-(char)_delayEvent:(id)arg1 ;
-(void)_setDirty;
-(void)_clearReferencesToRelatedGesture:(id)arg1 ;
-(void)_enqueueDelayedEventsToSend;
-(void)_clearUpdateTimer;
-(char)_shouldBegin;
-(char)_isFriendWithGesture:(id)arg1 ;
-(void)_clearDelayedEvents;
-(char)_isRecognized;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)_updateGestureWithEvent:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(char)_affectedByGesture:(id)arg1 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(char)_delegateCanPreventGestureRecognizer:(id)arg1 ;
-(void)_removeFailureDependent:(id)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(char)arg3 ;
-(char)delaysPrimaryMouseButtonEvents;
-(char)delaysSecondaryMouseButtonEvents;
-(char)delaysOtherMouseButtonEvents;
-(char)delaysKeyEvents;
-(char)delaysMagnificationEvents;
-(char)delaysRotationEvents;
-(void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelaysKeyEvents:(char)arg1 ;
-(char)_requiresSystemGesturesToFail;
-(void)_setRequiresSystemGesturesToFail:(char)arg1 ;
-(id)_delayedEvents;
-(char)_hasTargets;
-(char)_shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(char)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(char)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(char)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)_eventWasCancelled:(id)arg1 ;
-(char)_requiresGestureRecognizerToFail:(id)arg1 ;
-(void)_delayedUpdateGesture;
-(void)_didSendActions;
-(void)_resetIfFinished;
-(long long)_depthFirstViewCompare:(id)arg1 ;
-(char)_delegateShouldSendActionWhenPossibleConcurrentlyWithRecognizer:(id)arg1 ;
-(void)_addFriendGesture:(id)arg1 ;
-(char)_isExcludedByGesture:(id)arg1 ;
-(void)_cancelRecognition;
-(void)_exclude;
-(void)_addFailureDependent:(id)arg1 ;
-(void)_addDynamicFailureDependent:(id)arg1 ;
-(void)_addDynamicFailureRequirement:(id)arg1 ;
-(void)requireOtherGestureToFail:(id)arg1 ;
-(void)removeFailureRequirement:(id)arg1 ;
-(void)_setAcceptsFailureRequiments:(char)arg1 ;
-(char)_acceptsFailureRequirements;
@end

