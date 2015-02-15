/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/NSCopying.h>
#import <CoreLocation/NSSecureCoding.h>

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CL0 coordinate; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,readonly) double verticalAccuracy; 
@property (nonatomic,readonly) double course; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,readonly) SCD_Struct_CL2 clientLocation; 
@property (nonatomic,readonly) NSString * iso6709Notation; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) SCD_Struct_CL0 rawCoordinate; 
@property (nonatomic,readonly) double rawCourse; 
+(id)coreLocationFromURLString:(id)arg1 ;
+(char)supportsSecureCoding;
-(double)horizontalAccuracy;
-(id)initWithClientLocation:(SCD_Struct_CL2)arg1 ;
-(id)snapToResolution:(double)arg1 ;
-(double)rawCourse;
-(double)altitude;
-(SCD_Struct_CL0)coordinate;
-(double)course;
-(SCD_Struct_CL2)clientLocation;
-(id)shortDescription;
-(double)distanceFromLocation:(id)arg1 ;
-(id)initWithCoordinate:(SCD_Struct_CL0)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5 ;
-(id)_initWithCoordinate:(SCD_Struct_CL0)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
-(id)initWithCoordinate:(SCD_Struct_CL0)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
-(SCD_Struct_CL0)rawCoordinate;
-(double)getDistanceFrom:(id)arg1 ;
-(id)propagateLocationToTime:(double)arg1 ;
-(NSString *)iso6709Notation;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)verticalAccuracy;
-(id)init;
-(void)dealloc;
-(double)speed;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(int)type;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
@end
