/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * unit; 
@property (nonatomic,copy) NSString * units; 
@property (nonatomic,retain) NSNumber * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)distance;
+(id)distanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUnit:(NSString *)arg1 ;
-(NSString *)unit;
-(id)encodedClassName;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
-(id)groupIdentifier;
-(void)setUnits:(NSString *)arg1 ;
-(NSString *)units;
@end

