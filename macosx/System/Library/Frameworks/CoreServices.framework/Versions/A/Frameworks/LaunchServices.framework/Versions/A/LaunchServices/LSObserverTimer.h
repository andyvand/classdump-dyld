/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <LaunchServices/LaunchServices-Structs.h>
@class NSString, NSTimer, NSDate, NSMutableSet;

@interface LSObserverTimer : NSObject {

	dispatch_queue_sRef _queue;
	NSString* _name;
	NSTimer* _timer;
	NSDate* _lastFiredDate;
	NSMutableSet* _applications;
	NSMutableSet* _plugins;
	double _minInterval;
	double _latency;
	SEL _appObserverSelector;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * lastFiredDate;                   //@synthesize lastFiredDate=_lastFiredDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSMutableSet * plugins;                   //@synthesize plugins=_plugins - In the implementation block
@property (nonatomic,readonly) double minInterval;                     //@synthesize minInterval=_minInterval - In the implementation block
@property (nonatomic,readonly) double latency;                         //@synthesize latency=_latency - In the implementation block
@property (assign) SEL appObserverSelector;                            //@synthesize appObserverSelector=_appObserverSelector - In the implementation block
-(void)setApplications:(NSMutableSet *)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSDate *)lastFiredDate;
-(double)minInterval;
-(double)latency;
-(void)setLastFiredDate:(NSDate *)arg1 ;
-(SEL)appObserverSelector;
-(id)initWithAppSelector:(SEL)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)notifyObservers:(id)arg1 withApplication:(id)arg2 ;
-(void)setPlugins:(NSMutableSet *)arg1 ;
-(void)setAppObserverSelector:(SEL)arg1 ;
-(NSMutableSet *)plugins;
-(void)sendMessage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)clear;
-(NSString *)name;
-(void)stopTimer;
-(void)addApplication:(id)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(NSMutableSet *)applications;
@end

