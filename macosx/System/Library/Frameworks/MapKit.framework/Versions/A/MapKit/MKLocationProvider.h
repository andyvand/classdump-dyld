/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSBundle, NSString;


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) char airplaneModeBlocksLocation; 
@property (nonatomic,readonly) char usesCLMapCorrection; 
@property (nonatomic,readonly) char isSimulation; 
@required
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setDesiredAccuracy:(double)arg1;
-(double)expectedGpsUpdateInterval;
-(int)authorizationStatus;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(id)arg1;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(double)desiredAccuracy;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1;
-(char)matchInfoEnabled;
-(void)setMatchInfoEnabled:(char)arg1;
-(void)dismissHeadingCalibrationDisplay;
-(char)isSimulation;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(char)airplaneModeBlocksLocation;
-(char)usesCLMapCorrection;
-(void)setDelegate:(id)arg1;
-(id<MKLocationProviderDelegate>)delegate;

@end

