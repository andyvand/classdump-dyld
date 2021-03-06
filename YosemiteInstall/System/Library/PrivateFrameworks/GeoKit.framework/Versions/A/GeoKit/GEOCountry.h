/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoKit/GeoKitPlace.h>

@class NSNumber, NSString, NSSet;

@interface GEOCountry : GeoKitPlace

@property (retain) NSNumber * area; 
@property (retain) NSString * code; 
@property (retain) NSString * languages; 
@property (retain) NSSet * cities; 
+(id)countriesWhoseNameStartsWith:(id)arg1 managedObjectContext:(id)arg2 fetchLimit:(unsigned long long)arg3 resultType:(unsigned long long)arg4 ;
+(id)countryWithCode:(id)arg1 managedObjectContext:(id)arg2 fetchLimit:(unsigned long long)arg3 resultType:(unsigned long long)arg4 ;
-(id)capitalCity;
@end

