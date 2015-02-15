/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (nonatomic,copy) NSArray * resultImages; 
@property (nonatomic,copy) NSArray * resultNews; 
@property (nonatomic,copy) NSArray * resultPosts; 
@property (nonatomic,copy) NSArray * resultUsers; 
+(id)aceMicroblogSearchResult;
+(id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)resultImages;
-(void)setResultImages:(NSArray *)arg1 ;
-(NSArray *)resultNews;
-(void)setResultNews:(NSArray *)arg1 ;
-(NSArray *)resultPosts;
-(void)setResultPosts:(NSArray *)arg1 ;
-(NSArray *)resultUsers;
-(void)setResultUsers:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end
