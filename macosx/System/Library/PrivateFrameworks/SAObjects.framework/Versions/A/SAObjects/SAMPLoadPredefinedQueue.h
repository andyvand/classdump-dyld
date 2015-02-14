/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (assign,nonatomic) int mediaItemType; 
@property (assign,nonatomic) char shouldShuffle; 
+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)shouldShuffle;
-(void)setShouldShuffle:(char)arg1 ;
-(int)mediaItemType;
-(void)setMediaItemType:(int)arg1 ;
-(id)groupIdentifier;
@end

