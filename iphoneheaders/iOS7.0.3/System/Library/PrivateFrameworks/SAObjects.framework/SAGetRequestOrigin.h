/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (nonatomic,copy) NSNumber * maxAge; 
@property (nonatomic,copy) NSNumber * searchTimeout; 
+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)desiredAccuracy;
-(id)groupIdentifier;
-(id)searchTimeout;
-(void)setDesiredAccuracy:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)maxAge;
-(void)setMaxAge:(id)arg1 ;
-(void)setSearchTimeout:(id)arg1 ;
@end
