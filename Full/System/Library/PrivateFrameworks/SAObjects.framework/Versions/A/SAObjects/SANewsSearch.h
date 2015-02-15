/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString, NSURL, SACalendarRange;

@interface SANewsSearch : SADomainCommand

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSString * applicationId; 
@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * noun; 
@property (nonatomic,copy) NSURL * objectId; 
@property (nonatomic,copy) NSString * organization; 
@property (nonatomic,retain) SACalendarRange * publicationDate; 
@property (nonatomic,copy) NSString * scope; 
@property (nonatomic,copy) NSString * sort; 
@property (nonatomic,copy) NSString * topic; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)organization;
-(NSString *)topic;
-(void)setOrganization:(NSString *)arg1 ;
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)author;
-(NSString *)sort;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setSort:(NSString *)arg1 ;
-(NSString *)applicationId;
-(void)setApplicationId:(NSString *)arg1 ;
-(SACalendarRange *)publicationDate;
-(void)setPublicationDate:(SACalendarRange *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)noun;
-(void)setNoun:(NSString *)arg1 ;
-(NSURL *)objectId;
-(void)setObjectId:(NSURL *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SALocation *)address;
-(void)setAddress:(SALocation *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)appName;
@end
