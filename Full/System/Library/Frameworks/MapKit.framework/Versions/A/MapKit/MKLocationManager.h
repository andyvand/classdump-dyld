/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKWiFiObserverDelegate.h>
#import <MapKit/MKLocationProviderDelegate.h>

@protocol MKLocationProvider, MKLocationRecorder;
@class NSHashTable, CLLocation, NSTimer, GEOLocationShifter, CLHeading, NSMutableArray, _MKWiFiObserver, NSError, GEOLocation, NSBundle, NSString;

@interface MKLocationManager : NSObject <_MKWiFiObserverDelegate, MKLocationProviderDelegate> {

	id<MKLocationProvider> _locationProvider;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _headingObservers;
	CLLocation* _lastLocation;
	double _lastLocationUpdateTime;
	char _isLastLocationStale;
	char _lastLocationPushed;
	char _trackingLocation;
	char _trackingHeading;
	id<MKLocationRecorder> _locationRecorder;
	double _applicationResumeTime;
	double _applicationSuspendTime;
	double _headingUpdateTime;
	double _locationAccuracyUpdateTime;
	char _allowUpdateCoalescing;
	NSTimer* _coalesceTimer;
	double _lastLocationReportTime;
	GEOLocationShifter* _locationShifter;
	CLHeading* _throttledHeading;
	CLHeading* _heading;
	/*^block*/id _networkActivity;
	char _enabled;
	char _useCourseForHeading;
	char _logStartStopLocationUpdates;
	double _lastVehicleHeading;
	double _lastVehicleSpeed;
	double _lastVehicleHeadingUpdateTime;
	double _lastVehicleSpeedUpdateTime;
	int _consecutiveOutOfCourseCount;
	double _navCourse;
	/*^block*/id _locationCorrector;
	double _minimumLocationUpdateInterval;
	char _continuedAfterBecomingInactive;
	char _suspended;
	NSMutableArray* _recentLocationUpdateIntervals;
	_MKWiFiObserver* _wifiObserver;
	char _hasCustomDesiredAccuracy;
	char _continuesWhileInactive;
	NSError* _locationError;

}

@property (nonatomic,retain) id<MKLocationProvider> locationProvider; 
@property (nonatomic,copy) id locationCorrector;                                                                                           //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (assign,nonatomic) char logStartStopLocationUpdates;                                                                             //@synthesize logStartStopLocationUpdates=_logStartStopLocationUpdates - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                                                //@synthesize enabled=_enabled - In the implementation block
@property (getter=isLocationServicesAuthorizationNeeded,nonatomic,readonly) char locationServicesAuthorizationNeeded; 
@property (nonatomic,readonly) char isLocationServicesAvailable; 
@property (nonatomic,readonly) char isLocationServicesPossiblyAvailable; 
@property (nonatomic,readonly) char isLocationServicesEnabled; 
@property (nonatomic,readonly) char isLocationServicesApproved; 
@property (nonatomic,readonly) char isLocationServicesDenied; 
@property (nonatomic,readonly) char isLocationServicesRestricted; 
@property (nonatomic,readonly) char isHeadingServicesAvailable; 
@property (nonatomic,readonly) char isAirplaneModeBlockingLocation; 
@property (nonatomic,readonly) char isWiFiEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (nonatomic,readonly) double headingUpdateTimeInterval; 
@property (nonatomic,readonly) GEOLocation * currentLocation; 
@property (nonatomic,readonly) GEOLocation * gridSnappedCurrentLocation; 
@property (nonatomic,readonly) GEOLocation * courseCorrectedLocation; 
@property (nonatomic,readonly) char locationShiftEnabled; 
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (nonatomic,readonly) char isLastLocationStale;                                                                                   //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) NSError * locationError;                                                                                    //@synthesize locationError=_locationError - In the implementation block
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) char allowUpdateCoalescing;                                                                                   //@synthesize allowUpdateCoalescing=_allowUpdateCoalescing - In the implementation block
@property (assign,nonatomic) char useCourseForHeading;                                                                                     //@synthesize useCourseForHeading=_useCourseForHeading - In the implementation block
@property (nonatomic,readonly) CLHeading * heading;                                                                                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) CLHeading * throttledHeading;                                                                                 //@synthesize throttledHeading=_throttledHeading - In the implementation block
@property (nonatomic,copy) id networkActivity;                                                                                             //@synthesize networkActivity=_networkActivity - In the implementation block
@property (nonatomic,retain) id<MKLocationRecorder> locationRecorder;                                                                      //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) double navigationCourse;                                                                                    //@synthesize navCourse=_navCourse - In the implementation block
@property (assign,nonatomic) double minimumLocationUpdateInterval;                                                                         //@synthesize minimumLocationUpdateInterval=_minimumLocationUpdateInterval - In the implementation block
@property (assign,nonatomic) char continuesWhileInactive;                                                                                  //@synthesize continuesWhileInactive=_continuesWhileInactive - In the implementation block
@property (getter=wasLastLocationPushed,nonatomic,readonly) char lastLocationPushed;                                                       //@synthesize lastLocationPushed=_lastLocationPushed - In the implementation block
@property (nonatomic,readonly) int lastLocationSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLocationManager;
+(void)setCanMonitorWiFiStatus:(char)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(char)isLastLocationStale;
-(double)expectedGpsUpdateInterval;
-(char)isLocationServicesAvailable;
-(void)setLocationProvider:(id<MKLocationProvider>)arg1 ;
-(void)_useCoreLocationProvider;
-(void)setLocationRecorder:(id<MKLocationRecorder>)arg1 ;
-(id<MKLocationProvider>)locationProvider;
-(char)isLocationServicesApproved;
-(char)isAirplaneModeBlockingLocation;
-(char)isLocationServicesDenied;
-(char)isLocationServicesRestricted;
-(char)isWiFiEnabled;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(void)_syncLocationProviderWithTracking;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)setThrottledHeading:(CLHeading *)arg1 ;
-(void)_reportHeadingSuccess;
-(char)_isTimeToResetOnResume;
-(void)resetAfterResumeIfNecessary;
-(void)_suspend;
-(char)continuesWhileInactive;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(void)_reportLocationReset;
-(char)isLocationServicesPossiblyAvailable;
-(char)isLocationServicesEnabled;
-(double)desiredAccuracy;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(char)matchInfoEnabled;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(char)shouldCoalesceUpdates;
-(int)lastLocationSource;
-(void)reportCoalescedUpdated;
-(void)setCoalesceTimer:(id)arg1 ;
-(void)_stopCoalescingUpdates;
-(void)_reportLocationSuccess;
-(void)dismissHeadingCalibrationDisplay;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(char)_shouldAllowLocationUpdateInterval:(double)arg1 ;
-(char)shouldStartCoalescingLocation:(id)arg1 ;
-(void)_startCoalescingUpdates:(int)arg1 ;
-(char)shouldStopCoalescingLocation:(id)arg1 ;
-(void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2 ;
-(id<MKLocationRecorder>)locationRecorder;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(void)_setTrackingLocation:(char)arg1 ;
-(char)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)_setTrackingHeading:(char)arg1 ;
-(void)wiFiObserverDidChangeEnabled:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(char)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)setLocationCorrector:(id)arg1 ;
-(char)isLocationServicesAuthorizationNeeded;
-(char)isHeadingServicesAvailable;
-(void)_refreshAirplaneMode;
-(void)_airplaneModeChanged;
-(double)headingUpdateTimeInterval;
-(GEOLocation *)gridSnappedCurrentLocation;
-(GEOLocation *)courseCorrectedLocation;
-(CLHeading *)throttledHeading;
-(void)setContinuesWhileInactive:(char)arg1 ;
-(void)_reportHeadingFailureWithError:(id)arg1 ;
-(void)setAllowUpdateCoalescing:(char)arg1 ;
-(void)pushLocation:(id)arg1 ;
-(void)listenForLocationUpdates:(id)arg1 ;
-(id)singleLocationUpdateWithHandler:(/*^block*/id)arg1 ;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(void)startVehicleSpeedUpdate;
-(void)stopVehicleSpeedUpdate;
-(void)startVehicleHeadingUpdate;
-(void)stopVehicleHeadingUpdate;
-(NSError *)locationError;
-(id)networkActivity;
-(void)setNetworkActivity:(id)arg1 ;
-(char)useCourseForHeading;
-(void)setUseCourseForHeading:(char)arg1 ;
-(double)navigationCourse;
-(id)locationCorrector;
-(char)wasLastLocationPushed;
-(char)allowUpdateCoalescing;
-(char)logStartStopLocationUpdates;
-(void)setLogStartStopLocationUpdates:(char)arg1 ;
-(double)minimumLocationUpdateInterval;
-(void)setMinimumLocationUpdateInterval:(double)arg1 ;
-(char)hasLocation;
-(CLHeading *)heading;
-(GEOLocation *)currentLocation;
-(void)setHeading:(CLHeading *)arg1 ;
-(char)locationShiftEnabled;
-(CLLocation *)lastLocation;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)reset;
-(void)applicationDidBecomeActive:(id)arg1 ;
@end

