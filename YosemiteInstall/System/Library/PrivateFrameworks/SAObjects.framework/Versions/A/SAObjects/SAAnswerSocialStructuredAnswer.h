/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray;

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * socialQuestions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialStructuredAnswer;
+(id)socialStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)socialQuestions;
-(void)setSocialQuestions:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
@end

