/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASPronunciationContext;

@interface SAUIListenForPronunciation : SABaseClientBoundCommand

@property (nonatomic,retain) SASPronunciationContext * context; 
+(id)listenForPronunciation;
+(id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(SASPronunciationContext *)context;
-(id)groupIdentifier;
-(void)setContext:(SASPronunciationContext *)arg1 ;
@end

