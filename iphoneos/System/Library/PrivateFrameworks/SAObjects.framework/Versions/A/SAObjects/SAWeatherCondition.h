/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherCondition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * conditionCode; 
@property (assign,nonatomic) long long conditionCodeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)condition;
+(id)conditionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)conditionCode;
-(void)setConditionCode:(NSString *)arg1 ;
-(long long)conditionCodeIndex;
-(void)setConditionCodeIndex:(long long)arg1 ;
-(id)groupIdentifier;
@end

