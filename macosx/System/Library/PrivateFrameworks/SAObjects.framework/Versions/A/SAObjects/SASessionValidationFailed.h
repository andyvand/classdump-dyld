/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * errorCode; 
+(id)sessionValidationFailed;
+(id)sessionValidationFailedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorCode;
-(id)encodedClassName;
-(char)requiresResponse;
-(id)groupIdentifier;
@end

