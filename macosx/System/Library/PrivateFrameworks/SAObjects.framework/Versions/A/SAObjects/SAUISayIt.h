/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUISayIt : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * message; 
+(id)sayIt;
+(id)sayItWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(id<SAAceSerializable>)context;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
@end
