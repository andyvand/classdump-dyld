/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * ref; 
+(id)openLink;
+(id)openLinkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSURL *)ref;
-(void)setRef:(NSURL *)arg1 ;
-(id)groupIdentifier;
@end

