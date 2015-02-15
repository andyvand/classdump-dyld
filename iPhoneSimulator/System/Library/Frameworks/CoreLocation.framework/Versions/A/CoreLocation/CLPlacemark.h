/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/NSCopying.h>
#import <CoreLocation/NSSecureCoding.h>

@class CLPlacemarkInternal, CLLocation, CLRegion, NSDictionary, NSString, NSArray;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {

	CLPlacemarkInternal* _internal;

}

@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) CLRegion * region; 
@property (nonatomic,copy,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * thoroughfare; 
@property (nonatomic,copy,readonly) NSString * subThoroughfare; 
@property (nonatomic,copy,readonly) NSString * locality; 
@property (nonatomic,copy,readonly) NSString * subLocality; 
@property (nonatomic,copy,readonly) NSString * administrativeArea; 
@property (nonatomic,copy,readonly) NSString * subAdministrativeArea; 
@property (nonatomic,copy,readonly) NSString * postalCode; 
@property (nonatomic,copy,readonly) NSString * ISOcountryCode; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (nonatomic,copy,readonly) NSString * inlandWater; 
@property (nonatomic,copy,readonly) NSString * ocean; 
@property (nonatomic,copy,readonly) NSArray * areasOfInterest; 
+(id)placemarkWithGEOMapItem:(id)arg1 ;
+(char)supportsSecureCoding;
-(NSString *)postalCode;
-(CLRegion *)region;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 ;
-(NSString *)ISOcountryCode;
-(id)_initWithGeoMapItem:(id)arg1 ;
-(id)formattedAddressLines;
-(NSString *)country;
-(NSString *)administrativeArea;
-(NSString *)subAdministrativeArea;
-(NSString *)locality;
-(NSString *)subLocality;
-(id)fullThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)ocean;
-(NSString *)inlandWater;
-(NSArray *)areasOfInterest;
-(id)_geoMapItem;
-(id)initWithPlacemark:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(NSDictionary *)addressDictionary;
@end

