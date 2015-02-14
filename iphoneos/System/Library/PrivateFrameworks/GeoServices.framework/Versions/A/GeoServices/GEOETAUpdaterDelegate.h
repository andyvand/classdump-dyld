/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOETAUpdaterDelegate <NSObject>
@optional
-(char)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4;

@required
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2;
-(void)etaUpdaterUpdatedETA:(id)arg1;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;

@end

