/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, CLLocation, NSString;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	CLLocation* _currentLocation;
	/*^block*/id _completionBlock;
	char _didFinish;

}

@property (retain) CLLocation * currentLocation;                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) char didFinish;                                  //@synthesize didFinish=_didFinish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2 ;
-(void)setDidFinish:(char)arg1 ;
-(void)timeout;
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(void)stopTimer;
-(id)completionBlock;
-(id)initWithQueue:(id)arg1 ;
-(void)startTimer;
-(char)didFinish;
@end

