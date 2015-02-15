/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPointUtility : NSObject
+(unsigned long long)pointCount:(id)arg1 usesZilch:(char)arg2 ;
+(id)unpackZilchPoints:(id)arg1 ;
+(id)unpackBasicPoints:(id)arg1 ;
+(void*)controlPoints:(id)arg1 usesZilch:(char)arg2 ;
+(char)zilchPointsSupported;
+(SCD_Struct_GE15)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(char)arg3 ;
+(id)unpackPoints:(id)arg1 usesZilch:(char)arg2 ;
+(id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2 ;
@end

