/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKLocationManagerObserver.h>
#import <MapKit/MKLocationManagerOperation.h>

@class MKLocationManager, NSString;

@interface MKLocationManagerSingleUpdater : NSObject <MKLocationManagerObserver, MKLocationManagerOperation> {

	/*^block*/id _handler;
	char _active;
	double _desiredAccuracy;
	MKLocationManagerSingleUpdater* _selfReference;
	MKLocationManager* _locationManager;

}

@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)start;
-(void)cancel;
-(void)setHandler:(id)arg1 ;
-(id)handler;
@end
