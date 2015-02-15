/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLSimulationControllerProtocol <CLIntersiloServiceProtocol>
@required
-(void)setSimulationScenarioURL:(id)arg1;
-(void)setSimulationType:(int)arg1;
-(void)setIntermediateLocationDistance:(double)arg1;
-(void)setTravellingSpeed:(double)arg1;
-(void)clearPendingLocations;
-(void)addPendingLocationsArray:(id)arg1;
-(void)startSimulation;
-(void)stopSimulation;
-(void)setRepeatBehavior:(int)arg1;
-(void)setLocationInterval:(double)arg1;
-(void)shutdown;

@end
