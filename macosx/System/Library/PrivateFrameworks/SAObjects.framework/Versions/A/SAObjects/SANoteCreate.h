/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SANoteCreate : SADomainCommand

@property (nonatomic,copy) NSString * contents; 
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)create;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setContents:(NSString *)arg1 ;
-(NSString *)contents;
-(id)groupIdentifier;
@end

