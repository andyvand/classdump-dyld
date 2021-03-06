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

@interface SALocalSearchRating : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long count; 
@property (nonatomic,copy) NSString * description; 
@property (assign,nonatomic) double maxValue; 
@property (nonatomic,copy) NSString * providerId; 
@property (assign,nonatomic) double value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rating;
+(id)ratingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(long long)count;
-(NSString *)description;
-(void)setValue:(double)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)value;
-(void)setCount:(long long)arg1 ;
-(id)groupIdentifier;
-(void)setDescription:(NSString *)arg1 ;
@end

