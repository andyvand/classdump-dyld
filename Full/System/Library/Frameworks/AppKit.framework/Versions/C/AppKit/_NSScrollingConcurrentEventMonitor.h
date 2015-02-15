/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _NSScrollStateEventListener;
#import <AppKit/AppKit-Structs.h>
@class NSWindow, _NS1DVelocityFilter;

@interface _NSScrollingConcurrentEventMonitor : NSObject {

	struct {
		unsigned shouldUseUnacceleratedDelta : 1;
		unsigned shouldCoalesceDeltas : 1;
		unsigned shouldIgnoreConsumption : 1;
		unsigned wantsGestureEvents : 1;
		unsigned shouldStopMonitoringOnMomentumEnd : 1;
		unsigned didProcessMomentumEnd : 1;
		unsigned didPostPhysicalBegan : 1;
		unsigned didPostMomentumBegan : 1;
		unsigned reserved : 24;
	}  _flags;
	id _monitorID;
	char* _isCancelledPtr;
	NSWindow* _window;
	unsigned long long _originalGestureMask;
	/*^block*/id _eventProcessingHandler;
	id<_NSScrollStateEventListener> _scrollStateDelegate;
	long long _predominantAxisMode;
	CGPoint _delta;
	_NS1DVelocityFilter* _velocityFilterX;
	_NS1DVelocityFilter* _velocityFilterY;
	_NS1DVelocityFilter* _backupVelocityFilterX;
	_NS1DVelocityFilter* _backupVelocityFilterY;

}

@property (nonatomic,readonly) CGPoint delta; 
@property (nonatomic,readonly) CGPoint velocity; 
@property (assign,nonatomic) char shouldUseUnacceleratedDelta; 
@property (assign,nonatomic) char shouldCoalesceDeltas; 
@property (assign,nonatomic) char shouldIgnoreConsumption; 
@property (assign,nonatomic) char wantsGestureEvents; 
@property (assign,nonatomic) char shouldStopMonitoringOnMomentumEnd; 
@property (assign,nonatomic) long long predominantAxisMode;                                    //@synthesize predominantAxisMode=_predominantAxisMode - In the implementation block
@property (nonatomic,copy) id eventProcessingHandler;                                          //@synthesize eventProcessingHandler=_eventProcessingHandler - In the implementation block
@property (assign,nonatomic) id<_NSScrollStateEventListener> scrollStateDelegate;              //@synthesize scrollStateDelegate=_scrollStateDelegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<_NSScrollStateEventListener>)scrollStateDelegate;
-(void)setScrollStateDelegate:(id<_NSScrollStateEventListener>)arg1 ;
-(CGPoint)delta;
-(CGPoint)velocity;
-(void)consumePropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)setShouldUseUnacceleratedDelta:(char)arg1 ;
-(id)initWithEvent:(id)arg1 predominantAxisMode:(long long)arg2 ;
-(void)setShouldStopMonitoringOnMomentumEnd:(char)arg1 ;
-(void)startMonitoring;
-(void)setShouldCoalesceDeltas:(char)arg1 ;
-(void)setShouldIgnoreConsumption:(char)arg1 ;
-(void)setWantsGestureEvents:(char)arg1 ;
-(void)setEventProcessingHandler:(id)arg1 ;
-(void)stopMonitoring;
-(void)threadSafeMultiPropertyAccess:(/*^block*/id)arg1 ;
-(char)shouldUseUnacceleratedDelta;
-(char)shouldCoalesceDeltas;
-(char)shouldIgnoreConsumption;
-(char)wantsGestureEvents;
-(char)shouldStopMonitoringOnMomentumEnd;
-(void)_monitorEvent:(id)arg1 ;
-(long long)predominantAxisMode;
-(void)setPredominantAxisMode:(long long)arg1 ;
-(id)eventProcessingHandler;
@end

