/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASupportCondition.h>

@class NSArray, NSString;

@interface SAValueCondition : AceObject <SASupportCondition>

@property (nonatomic,copy) NSArray * legalValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueCondition;
+(id)valueConditionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)legalValues;
-(void)setLegalValues:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end

