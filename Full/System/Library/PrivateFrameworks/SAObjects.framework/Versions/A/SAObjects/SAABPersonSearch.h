/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(NSNumber *)me;
-(NSURL *)accountIdentifier;
-(NSDate *)birthday;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)relationship;
-(void)setMe:(NSNumber *)arg1 ;
-(SAPhone *)phone;
-(void)setPhone:(SAPhone *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setRelationship:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(SAEmail *)email;
-(void)setEmail:(SAEmail *)arg1 ;
-(id)groupIdentifier;
-(SALocation *)address;
-(void)setAddress:(SALocation *)arg1 ;
@end

