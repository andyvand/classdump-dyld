/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherUnits : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * distanceUnits; 
@property (nonatomic,copy) NSString * pressureUnits; 
@property (nonatomic,copy) NSString * speedUnits; 
@property (nonatomic,copy) NSString * temperatureUnits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unitsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)units;
-(id)encodedClassName;
-(NSString *)distanceUnits;
-(void)setDistanceUnits:(NSString *)arg1 ;
-(NSString *)pressureUnits;
-(void)setPressureUnits:(NSString *)arg1 ;
-(NSString *)speedUnits;
-(void)setSpeedUnits:(NSString *)arg1 ;
-(NSString *)temperatureUnits;
-(void)setTemperatureUnits:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

