/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CLSimulationManager : NSObject {

	double _locationDistance;
	double _locationInterval;
	double _locationSpeed;
	int _locationRepeatBehavior;
	int _locationDeliveryBehavior;

}

@property (assign,nonatomic) int locationDeliveryBehavior;              //@synthesize locationDeliveryBehavior=_locationDeliveryBehavior - In the implementation block
@property (assign,nonatomic) double locationDistance;                   //@synthesize locationDistance=_locationDistance - In the implementation block
@property (assign,nonatomic) double locationInterval;                   //@synthesize locationInterval=_locationInterval - In the implementation block
@property (assign,nonatomic) double locationSpeed;                      //@synthesize locationSpeed=_locationSpeed - In the implementation block
@property (assign,nonatomic) int locationRepeatBehavior;                //@synthesize locationRepeatBehavior=_locationRepeatBehavior - In the implementation block
-(id)scenariosPath;
-(void)loadScenarioFromURL:(id)arg1 ;
-(id)availableScenarios;
-(id)localizedNameForScenario:(id)arg1 ;
-(void)selectScenario:(id)arg1 ;
-(void)setLocationDeliveryBehavior:(int)arg1 ;
-(void)setLocationDistance:(double)arg1 ;
-(void)setLocationInterval:(double)arg1 ;
-(void)setLocationSpeed:(double)arg1 ;
-(void)setLocationRepeatBehavior:(int)arg1 ;
-(void)clearSimulatedLocations;
-(void)appendSimulatedLocation:(id)arg1 ;
-(void)startLocationSimulation;
-(void)stopLocationSimulation;
-(void)clearSimulatedCells;
-(void)setSimulatedCell:(id)arg1 ;
-(void)startCellSimulation;
-(void)stopCellSimulation;
-(void)setSimulatedCellRegistrationStatus:(char)arg1 ;
-(void)setWifiScanResults:(id)arg1 ;
-(void)startWifiSimulation;
-(void)stopWifiSimulation;
-(void)setSimulatedWifiPower:(char)arg1 ;
-(double)locationDistance;
-(double)locationInterval;
-(double)locationSpeed;
-(int)locationRepeatBehavior;
-(int)locationDeliveryBehavior;
-(id)init;
-(void)flush;
@end

