/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOMapRoad <GEOMapLine>
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
@required
-(int)roadClass;
-(int)formOfWay;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end

