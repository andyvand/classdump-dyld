/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)startCorrectedSpeechRequest;
+(id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)sessionId;
-(void)setSessionId:(id)arg1 ;
-(id)interactionId;
-(void)setInteractionId:(id)arg1 ;
@end
