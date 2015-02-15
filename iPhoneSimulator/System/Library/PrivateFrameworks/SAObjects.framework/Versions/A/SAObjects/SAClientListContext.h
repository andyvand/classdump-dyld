/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSArray, NSNumber;

@interface SAClientListContext : SADomainObject

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * domainObjects; 
@property (nonatomic,copy) NSNumber * selectedItemIndex; 
+(id)clientListContext;
+(id)clientListContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)domainObjects;
-(void)setDomainObjects:(NSArray *)arg1 ;
-(NSNumber *)selectedItemIndex;
-(void)setSelectedItemIndex:(NSNumber *)arg1 ;
-(id)groupIdentifier;
@end

