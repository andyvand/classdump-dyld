/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SADestroyAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * speechId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)destroyAssistant;
+(id)destroyAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

