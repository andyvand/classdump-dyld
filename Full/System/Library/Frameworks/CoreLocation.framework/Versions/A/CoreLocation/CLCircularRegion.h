/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) SCD_Struct_CL0 center; 
@property (nonatomic,readonly) double radius; 
+(id)circularRegionFromMapRegion:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)containsCoordinate:(SCD_Struct_CL0)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_CL0)center;
-(id)initWithCenter:(SCD_Struct_CL0)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(double)radius;
@end

