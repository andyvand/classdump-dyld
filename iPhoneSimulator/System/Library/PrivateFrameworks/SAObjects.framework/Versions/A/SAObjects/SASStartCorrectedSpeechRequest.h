/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)startCorrectedSpeechRequest;
+(id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

