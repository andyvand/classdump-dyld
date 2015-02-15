/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAConstraintSupport : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SASupportCondition> condition; 
@property (nonatomic,copy) NSString * property; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constraintSupport;
+(id)constraintSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SASupportCondition>)condition;
-(NSString *)property;
-(id)encodedClassName;
-(void)setCondition:(id<SASupportCondition>)arg1 ;
-(id)groupIdentifier;
-(void)setProperty:(NSString *)arg1 ;
@end
