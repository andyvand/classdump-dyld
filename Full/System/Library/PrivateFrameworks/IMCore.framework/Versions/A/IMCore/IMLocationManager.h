/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMChat.h>
#import <IMCore/CLLocationManagerDelegate.h>
#import <IMCore/IMLocationManager.h>
@class CLLocation, NSError;


@protocol IMLocationManager <NSObject>
@property (nonatomic,readonly) char locationAuthorizationDenied; 
@property (nonatomic,retain,readonly) CLLocation * location; 
@property (nonatomic,retain,readonly) NSError * error; 
@required
-(char)locationAuthorizationDenied;
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1;
-(NSError *)error;
-(CLLocation *)location;

@end


@class CLLocation, NSError, CLLocationManager, NSMutableArray, NSTimer, NSDate, NSString;

@interface IMLocationManager : IMChat <CLLocationManagerDelegate, IMLocationManager> {

	CLLocationManager* _locationManager;
	NSMutableArray* _handlers;
	NSTimer* _timeoutHandler;
	CLLocation* _location;
	NSError* _error;
	NSDate* _locateStartTime;
	NSTimer* _locationUpdateTimer;

}

@property (nonatomic,retain) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSTimer * locationUpdateTimer;                    //@synthesize locationUpdateTimer=_locationUpdateTimer - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                        //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSDate * locateStartTime;                         //@synthesize locateStartTime=_locateStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char locationAuthorizationDenied; 
+(Class)__CLLocationManagerClass;
+(id)sharedInstance;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(NSMutableArray *)handlers;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(void)_fireCompletionHandlers;
-(NSDate *)locateStartTime;
-(void)_locationManagerTimedOut;
-(char)locationAuthorizationDenied;
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)_locationUpdateTimerFired:(id)arg1 ;
-(void)setLocateStartTime:(NSDate *)arg1 ;
-(NSTimer *)locationUpdateTimer;
-(void)setLocationUpdateTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
@end

