/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;

}

@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,readonly) char locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) char pausesLocationUpdatesAutomatically; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) char headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,copy,readonly) NSSet * monitoredRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedRegions; 
@property (assign,nonatomic) char privateMode; 
@property (nonatomic,readonly) char locationServicesAvailable; 
@property (nonatomic,readonly) char locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) char supportInfo; 
@property (nonatomic,readonly) double bestAccuracy; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isPersistentMonitoringEnabled,nonatomic) char persistentMonitoringEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,getter=isDynamicAccuracyReductionEnabled,nonatomic) char dynamicAccuracyReductionEnabled; 
+(char)locationServicesEnabled;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(int)authorizationStatus;
+(char)headingAvailable;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)_authorizationStatus;
+(id)appsUsingLocationWithInfo;
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(int)_regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(void)setLocationServicesEnabled:(char)arg1 withAuthorization:(id)arg2 ;
+(void)resetLocationWarningsWithAuthorization:(id)arg1 ;
+(char)locationServicesEnabled:(char)arg1 ;
+(void)setLocationServicesEnabled:(char)arg1 ;
+(char)significantLocationChangeMonitoringAvailable;
+(char)isMonitoringAvailableForClass:(Class)arg1 ;
+(char)regionMonitoringAvailable;
+(char)regionMonitoringEnabled;
+(char)isRangingAvailable;
+(char)mapCorrectionAvailable;
+(char)deferredLocationUpdatesAvailable;
+(int)regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)regionMonitoringAuthorizationStatusForBundle:(id)arg1 ;
+(void)setAuthorizationStatus:(char)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatus:(char)arg1 forBundle:(id)arg2 ;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(char)dumpLogsWithMessage:(id)arg1 ;
+(char)shutdownDaemon;
+(char)bundleSupported:(id)arg1 ;
+(unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(void)setStatusBarIconEnabled:(char)arg1 forLocationEntityClass:(unsigned long long)arg2 ;
+(char)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1 ;
+(unsigned long long)entityClassesForLocationDictionary:(id)arg1 ;
+(char)isLocationActiveForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(char)hasUsedBackgroundLocationServices:(id)arg1 ;
+(char)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(char)arg1 forLocationDictionary:(id)arg2 ;
+(char)locationServicesCapable;
+(id)sharedManager;
-(char)locationServicesEnabled;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(void)setDynamicAccuracyReductionEnabled:(char)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(double)expectedGpsUpdateInterval;
-(char)headingAvailable;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(double)desiredAccuracy;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(void)dismissHeadingCalibrationDisplay;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(CLHeading *)heading;
-(void)setActivityType:(long long)arg1 ;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(void)setPausesLocationUpdatesAutomatically:(char)arg1 ;
-(NSSet *)rangedRegions;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)onClientEventLocation:(id)arg1 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(void)onClientEventHeading:(id)arg1 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)onClientEventHistoricLocation:(id)arg1 ;
-(void)onClientEventError:(id)arg1 ;
-(void)onClientEventRegion:(id)arg1 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)resumeLocationUpdates;
-(void)pauseLocationUpdates:(char)arg1 ;
-(char)pausesLocationUpdatesAutomatically;
-(char)locationServicesAvailable;
-(char)locationServicesApproved;
-(void)setSupportInfo:(char)arg1 ;
-(char)supportInfo;
-(double)bestAccuracy;
-(CLClientRef)internalClient;
-(void)setPrivateMode:(char)arg1 ;
-(char)privateMode;
-(void)startUpdatingLocationWithPrompt;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)disallowDeferredLocationUpdates;
-(void)historicLocationsFromDate:(id)arg1 forInterval:(double)arg2 ;
-(void)setHeadingFilter:(double)arg1 ;
-(double)headingFilter;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)onEventAppStatus;
-(void)startAppStatusUpdates;
-(void)stopAppStatusUpdates;
-(void)startTechStatusUpdates;
-(void)stopTechStatusUpdates;
-(void)startMonitoringSignificantLocationChanges;
-(void)stopMonitoringSignificantLocationChanges;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)requestStateForRegion:(id)arg1 ;
-(double)maximumRegionMonitoringDistance;
-(void)resetApps;
-(id)appsUsingLocation;
-(id)appsUsingLocationWithDetails;
-(id)technologiesInUse;
-(char)isPersistentMonitoringEnabled;
-(void)setPersistentMonitoringEnabled:(char)arg1 ;
-(char)isDynamicAccuracyReductionEnabled;
-(void)registerAsLocationClient;
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
-(id)init;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<CLLocationManagerDelegate>)delegate;
-(long long)activityType;
-(CLLocation *)location;
-(void)startMonitoringForRegion:(id)arg1 ;
-(NSSet *)monitoredRegions;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
@end

