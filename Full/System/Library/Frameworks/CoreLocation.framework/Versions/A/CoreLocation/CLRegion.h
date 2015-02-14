/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/NSCopying.h>
#import <CoreLocation/NSSecureCoding.h>

@class CLRegionInternal, NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {

	CLRegionInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_CL0 center; 
@property (nonatomic,readonly) double radius; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,nonatomic) char notifyOnEntry; 
@property (assign,nonatomic) char notifyOnExit; 
@property (nonatomic,readonly) SCD_Struct_CL10 clientRegion; 
+(char)supportsSecureCoding;
-(SCD_Struct_CL10)clientRegion;
-(id)initWithClientRegion:(SCD_Struct_CL10)arg1 ;
-(id)initCircularRegionWithCenter:(SCD_Struct_CL0)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)_initWithCoder:(id)arg1 ;
-(void)_encodeWithCoder:(id)arg1 ;
-(char)notifyOnEntry;
-(void)setNotifyOnEntry:(char)arg1 ;
-(char)notifyOnExit;
-(void)setNotifyOnExit:(char)arg1 ;
-(char)containsCoordinate:(SCD_Struct_CL0)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CL0)center;
-(id)initWithIdentifier:(id)arg1 ;
-(double)radius;
@end

