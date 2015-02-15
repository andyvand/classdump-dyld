/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAnswerAnswerProperty : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * valueAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)valueAnnotation;
-(void)setValueAnnotation:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(id)groupIdentifier;
@end

