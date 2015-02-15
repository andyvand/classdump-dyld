/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) char eyesFree; 
@property (assign,nonatomic) char handsFree; 
@property (nonatomic,copy) NSString * motionActivity; 
@property (nonatomic,copy) NSNumber * motionConfidence; 
@property (nonatomic,copy) NSString * origin; 
@property (assign,nonatomic) char talkOnly; 
@property (nonatomic,copy) NSString * utterance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startRequest;
+(id)startRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)motionActivity;
-(void)setMotionActivity:(NSString *)arg1 ;
-(NSNumber *)motionConfidence;
-(void)setMotionConfidence:(NSNumber *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(char)eyesFree;
-(void)setEyesFree:(char)arg1 ;
-(char)handsFree;
-(void)setHandsFree:(char)arg1 ;
-(char)talkOnly;
-(void)setTalkOnly:(char)arg1 ;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

