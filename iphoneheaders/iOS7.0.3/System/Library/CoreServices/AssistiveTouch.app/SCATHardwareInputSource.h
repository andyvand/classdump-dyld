/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/AXEventHandler.h>

@protocol SCATHardwareInputSourceDelegate;
@class NSMapTable, , AXAccessQueue;

@interface SCATHardwareInputSource : NSObject <AXEventHandler> {

	char* _hidReportBuffer;
	BOOL _available;
	BOOL _running;
	NSMapTable* _actions;
	<SCATHardwareInputSourceDelegate>* _delegate;
	AXAccessQueue* _queue;
	IOHIDManagerRef _hidManager;
	unsigned _availabilityDetail;

}

@property (nonatomic,retain) NSMapTable * actions;                                      //@synthesize actions=_actions - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;                         //@synthesize available=_available - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) <SCATHardwareInputSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAccessQueue * queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) IOHIDManagerRef hidManager;                                //@synthesize hidManager=_hidManager - In the implementation block
@property (assign,nonatomic) unsigned availabilityDetail;                               //@synthesize availabilityDetail=_availabilityDetail - In the implementation block
-(BOOL)handledEvent:(id)arg1 ;
-(void)_didReceiveAction:(int)arg1 start:(BOOL)arg2 ;
-(BOOL)isMFIInputSource;
-(void)_startHandlingEvents;
-(void)_stopHandlingEvents;
-(BOOL)isKeyboardInputSource;
-(unsigned)availabilityDetail;
-(void)setAvailabilityDetail:(unsigned)arg1 ;
-(id)_matchingCriteria;
-(void)_didUpdateAvailability:(BOOL)arg1 withDetail:(unsigned)arg2 ;
-(void)_startDetectingDevices;
-(void)_stopDetectingDevices;
-(void)startRunning;
-(void)stopRunning;
-(BOOL)isAvailable;
-(void)setActions:(id)arg1 ;
-(IOHIDManagerRef)hidManager;
-(void)setHidManager:(IOHIDManagerRef)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isRunning;
-(unsigned)priority;
-(id)actions;
-(void)setRunning:(BOOL)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
@end
