/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOMapServiceTraits;


@protocol GEOMapServiceProblemReportTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(GEOMapServiceTraits *)traits;
-(void)cancel;

@end

