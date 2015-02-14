/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAAnswerSpeakableAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * parameters; 
@property (nonatomic,copy) NSString * templateName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speakableAnswer;
+(id)speakableAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
@end

