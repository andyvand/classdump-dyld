/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MNETAManagerDelegate <NSObject>
@required
-(void)etaManagerUpdatedETATime:(id)arg1;
-(void)etaManager:(id)arg1 forceSwitchToNewRoute:(id)arg2;
-(void)etaManager:(id)arg1 recommendsNewRoute:(id)arg2 oldEstimatedTime:(unsigned)arg3 newEstimatedTime:(unsigned)arg4;
-(void)etaManager:(id)arg1 receivedETAResponseWithETARoute:(id)arg2 etaBehavior:(int)arg3 routeRemainingDistance:(double)arg4 routeRemainingTime:(unsigned)arg5;
-(void)etaManagerUpdatedTrafficIncidents:(id)arg1;
@end
