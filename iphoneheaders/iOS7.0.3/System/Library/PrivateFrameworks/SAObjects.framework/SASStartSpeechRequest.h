/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeech.h>

@interface SASStartSpeechRequest : SASStartSpeech

@property (assign,nonatomic) BOOL eyesFree; 
@property (assign,nonatomic) BOOL handsFree; 
@property (assign,nonatomic) BOOL talkOnly; 
+(id)startSpeechRequest;
+(id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)eyesFree;
-(void)setEyesFree:(BOOL)arg1 ;
-(BOOL)handsFree;
-(void)setHandsFree:(BOOL)arg1 ;
-(BOOL)talkOnly;
-(void)setTalkOnly:(BOOL)arg1 ;
@end
