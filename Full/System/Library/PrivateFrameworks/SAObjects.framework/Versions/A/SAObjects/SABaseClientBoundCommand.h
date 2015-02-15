/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)baseClientBoundCommand;
+(id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)callbacks;
-(void)setCallbacks:(NSArray *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

