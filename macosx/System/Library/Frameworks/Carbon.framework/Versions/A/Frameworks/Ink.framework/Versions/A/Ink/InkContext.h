/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Ink/Ink-Structs.h>
@class InkClientSideEvent, NSMutableArray;

@interface InkContext : NSObject {

	InkClientSideEvent* _clientEvent;
	CFStringRef _bundleIdentifier;
	unsigned _cgsConnectionID;
	ProcessSerialNumber _thisProcessPSN;
	CFMessagePortRef _messagesFromServerPort;
	unsigned short _sEventTarget;
	char _inProximity;
	char _mousing;
	char _mousingNotEnabled;
	char _inkCGInstantMousing;
	char _shouldDisableCoalescingDuringInking;
	char _coalescingDisabled;
	void* _oldMouseCoalescingToken;
	char _inPhrase;
	char _inStroke;
	char _allowInkWithMouse;
	char _lastEventWasOverWindowInOurProcess;
	char _lastEventWasRepostedAsEraserEvent;
	EventLoopTimerRef _resumeCGInkingTimer;
	float _resumeCGInkingDelay;
	char _resumeCGInkingTimerActive;
	char _inkOnDemandModeOverridden;
	unsigned _userInkOnDemandModeOverrideValue;
	unsigned _userInkOnDemandButtonMask;
	NSMutableArray* _queuedEventsArray;
	EventLoopTimerRef _phraseTerminationTimer;
	void* _privateInkGlobals;
	char _isSoftTerminated;

}

@property (assign) unsigned cgConnectionID;                                //@synthesize cgsConnectionID=_cgsConnectionID - In the implementation block
@property (assign) ProcessSerialNumber thisProcessPSN;                     //@synthesize thisProcessPSN=_thisProcessPSN - In the implementation block
@property (assign) CFMessagePortRef messagesFromServerPort;                //@synthesize messagesFromServerPort=_messagesFromServerPort - In the implementation block
@property (assign) char lastEventWasOverWindowInOurProcess;                //@synthesize lastEventWasOverWindowInOurProcess=_lastEventWasOverWindowInOurProcess - In the implementation block
@property (assign) char lastEventWasRepostedAsEraserEvent;                 //@synthesize lastEventWasRepostedAsEraserEvent=_lastEventWasRepostedAsEraserEvent - In the implementation block
@property (assign) unsigned short eventTarget;                             //@synthesize sEventTarget=_sEventTarget - In the implementation block
@property (assign) unsigned userInkOnDemandModeOverrideValue;              //@synthesize userInkOnDemandModeOverrideValue=_userInkOnDemandModeOverrideValue - In the implementation block
@property (assign) unsigned userInkOnDemandButtonMask;                     //@synthesize userInkOnDemandButtonMask=_userInkOnDemandButtonMask - In the implementation block
@property (assign) char stylusInProximity;                                 //@synthesize inProximity=_inProximity - In the implementation block
@property (assign) char trackingMouse;                                     //@synthesize mousing=_mousing - In the implementation block
@property (assign) char mousingTestMode;                                   //@synthesize mousingNotEnabled=_mousingNotEnabled - In the implementation block
@property (assign) char gatheringDataForAPhrase;                           //@synthesize inPhrase=_inPhrase - In the implementation block
@property (assign) char gatheringDataForAStroke;                           //@synthesize inStroke=_inStroke - In the implementation block
@property (assign) char isCGInstantMousing;                                //@synthesize inkCGInstantMousing=_inkCGInstantMousing - In the implementation block
@property (assign) char shouldDisableCoalescingDuringInking;               //@synthesize shouldDisableCoalescingDuringInking=_shouldDisableCoalescingDuringInking - In the implementation block
@property (assign) char coalescingIsDisabled;                              //@synthesize coalescingDisabled=_coalescingDisabled - In the implementation block
@property (assign) char resumeCGInkingTimerActive;                         //@synthesize resumeCGInkingTimerActive=_resumeCGInkingTimerActive - In the implementation block
+(int)launchWithFSRef:(FSRef*)arg1 ;
-(CFStringRef)bundleID;
-(void)softReInitialize;
-(InkGlobals*)privateGlobals;
-(unsigned)inspectEvent:(OpaqueEventRefRef)arg1 ;
-(int)processTabletProximityEventRef:(OpaqueEventRefRef)arg1 ;
-(char)hasEventsQueued;
-(int)terminateStroke:(unsigned char)arg1 ;
-(void)terminatePhrase:(unsigned char)arg1 ;
-(void)resumeCGInking;
-(void)extendResumeCGInkingTimer;
-(int)launchServer;
-(void)setCGSInkingState:(unsigned)arg1 cgsBoolValueTo:(BOOL)arg2 ;
-(void)restoreMouseCoalescingState;
-(char)gatheringDataForAPhrase;
-(char)gatheringDataForAStroke;
-(void)setInkOnDemandModeViaSPI:(unsigned)arg1 buttonMask:(unsigned short)arg2 ;
-(void)setAllowInkWithMouse:(char)arg1 ;
-(unsigned)cgConnectionID;
-(int)processInkStroke:(InkStroke*)arg1 ;
-(id)initWithBundleID:(CFStringRef)arg1 andProcessPSN:(ProcessSerialNumber)arg2 ;
-(void)initPrivateGlobals;
-(void)softTerminate;
-(int)initTerminationTimer;
-(void)configForInkServerContext;
-(char)getSharedInkEnabledState;
-(void)openPortForMessagesFromInkServer;
-(void)closePortForMessagesFromInkServer;
-(void)setUpClientEvent:(OpaqueEventRefRef)arg1 ;
-(void)updateInkStateForMouseUp:(char)arg1 andTabletPointEventSubtype:(char)arg2 ;
-(char)isCGInstantMousing;
-(char)willRepostToInkPadInInkPadMode;
-(char)canInkAtThisEventLocation:(CGPoint)arg1 ;
-(unsigned)determineEventDispositionForClientEvent:(id)arg1 ;
-(unsigned)metaDispatch:(id)arg1 triggerEventDisposition:(unsigned)arg2 ;
-(void)showCursorForProximityIfNecessary;
-(char)inkOnDemandIsMode:(unsigned)arg1 ;
-(char)clientEvent:(id)arg1 HasValidInkOnDemandModeButtonForMode:(unsigned)arg2 ;
-(void)enableLocalRecognition;
-(unsigned short)eventTarget;
-(ProcessSerialNumber)thisProcessPSN;
-(void)setEventTarget:(unsigned short)arg1 ;
-(char)hasQueuedPointsOrStrokes;
-(void)setGatheringDataForAPhrase:(char)arg1 ;
-(void)setGatheringDataForAStroke:(char)arg1 ;
-(void)setWaitingForEndOfPhrase:(char)arg1 startTimer:(char)arg2 ;
-(int)processTabletProximityEvent:(id)arg1 ;
-(char)stylusInProximity;
-(void)setStylusInProximity:(char)arg1 ;
-(char)shouldDisableCoalescingDuringInking;
-(char)coalescingIsDisabled;
-(void)disableMouseCoalescingForProximity:(char)arg1 ;
-(int)finishPhraseRecognition:(void*)arg1 ;
-(void)processPhraseList;
-(void)processTerminatedPhrase:(InkPhrase*)arg1 ;
-(short)convertPointListToNewStroke:(DLList*)arg1 withStrokePtr:(InkStroke*)arg2 ;
-(int)recognizeAsSystemGesture:(InkPhrase*)arg1 ;
-(unsigned)getSharedUserInkOnDemandMode;
-(char)cgsInkingStateAppInkingEnabled;
-(void)resumeCGInkingOnTimer;
-(void)setIsCGInstantMousing:(char)arg1 ;
-(char)trackingMouse;
-(char)eventLocationIsWithinInkBarOrInkWindowBounds:(CGPoint)arg1 ;
-(char)getSharedErasingState;
-(char)mousingTestMode;
-(unsigned)determineEventDispositionForClientEventWithNoInkPointsYetAccumlated:(id)arg1 ;
-(char)lastEventWasOverWindowInOurProcess;
-(unsigned)determineEventDispositionForClientEventTapEvent:(id)arg1 ;
-(unsigned)determineEventDispositionForClientEventMousing:(id)arg1 ;
-(void)setTrackingMouse:(char)arg1 ;
-(void)setLastEventWasOverWindowInOurProcess:(char)arg1 ;
-(char)clientEventLocationIsInCarbonInstantMouser:(id)arg1 ;
-(unsigned)inkIMKPointDispositionForClientSideEvent:(id)arg1 ;
-(int)processTabletPointEvent:(id)arg1 ;
-(void)setLastEventWasRepostedAsEraserEvent:(char)arg1 ;
-(char)lastEventWasRepostedAsEraserEvent;
-(unsigned)userInkOnDemandButtonMask;
-(unsigned)getSystemInkOnDemandButtonMask;
-(void)configureForCGInstantMousing:(char)arg1 ;
-(int)addEventToQueue:(id)arg1 withUpdatedPen:(char)arg2 ;
-(unsigned)metaDispatchRepostEventsForTap:(id)arg1 ;
-(unsigned)metaDispatchRepostEventsForMousing:(id)arg1 ;
-(unsigned)metaDispatchForClientEventStartingToInk:(id)arg1 ;
-(char)clientEventIsInkPointEvent:(id)arg1 ;
-(int)dispatchQueuedEvent:(id)arg1 withDisposition:(unsigned)arg2 andRepostType:(int)arg3 isFinalDispatch:(char)arg4 ;
-(id)rewindEventQueue:(char)arg1 ;
-(id)pullNextEventFromQueue:(id)arg1 ;
-(void)clearEventQueue;
-(id)peekNextEventFromQueue:(id)arg1 ;
-(char)clientDidChangeInkDisposition:(id)arg1 withDisposition:(unsigned*)arg2 ;
-(int)startPhraseTerminationTimer;
-(char)processNameMatches:(id)arg1 ;
-(void)postTextFromServerCallbackMessage:(char*)arg1 ;
-(char)allowInkWithMouse;
-(char)IsCGInstantMousing:(id)arg1 ;
-(id)pullPrevEventFromQueue:(id)arg1 ;
-(void)recognitionEnabledStateChanged:(char)arg1 ;
-(void)setCgConnectionID:(unsigned)arg1 ;
-(CFMessagePortRef)messagesFromServerPort;
-(void)setMessagesFromServerPort:(CFMessagePortRef)arg1 ;
-(void)setMousingTestMode:(char)arg1 ;
-(void)setCoalescingIsDisabled:(char)arg1 ;
-(void)setShouldDisableCoalescingDuringInking:(char)arg1 ;
-(void)setThisProcessPSN:(ProcessSerialNumber)arg1 ;
-(char)resumeCGInkingTimerActive;
-(void)setResumeCGInkingTimerActive:(char)arg1 ;
-(unsigned)userInkOnDemandModeOverrideValue;
-(void)setUserInkOnDemandModeOverrideValue:(unsigned)arg1 ;
-(void)setUserInkOnDemandButtonMask:(unsigned)arg1 ;
-(void)removeNotificationObservers;
-(void)finalize;
-(void)dealloc;
@end

