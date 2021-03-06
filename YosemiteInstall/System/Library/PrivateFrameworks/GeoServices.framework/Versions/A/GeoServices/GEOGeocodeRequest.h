/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOPlaceSearchRequest.h>

@interface GEOGeocodeRequest : GEOPlaceSearchRequest
-(id)initReverseGeocodeWithCoordinate:(SCD_Struct_GE15)arg1 ;
-(id)initForwardGeocodeWithAddress:(id)arg1 ;
-(id)initReverseGeocodeWithCoordinate:(SCD_Struct_GE15)arg1 includeBusinessOptions:(char)arg2 ;
-(id)initForwardGeocodeWithAddressDictionary:(id)arg1 ;
-(id)initForwardGeocodeWithAddressString:(id)arg1 ;
-(id)initWithAddress:(id)arg1 maxResults:(int)arg2 traits:(id)arg3 ;
-(id)initWithCoordinate:(SCD_Struct_GE15)arg1 includeEntryPoints:(char)arg2 traits:(id)arg3 ;
@end

