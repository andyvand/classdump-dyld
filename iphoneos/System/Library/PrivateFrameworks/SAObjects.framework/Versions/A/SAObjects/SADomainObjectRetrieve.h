/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSArray, NSString;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic,copy) NSArray * identifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectRetrieve;
+(id)domainObjectRetrieveWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)identifiers;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end

