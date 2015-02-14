/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAEncyclopediaEntityLink, NSURL, NSArray;

@interface SAEncyclopediaEntityObject : SADomainObject

@property (nonatomic,copy) NSString * articleAbstract; 
@property (nonatomic,retain) SAEncyclopediaEntityLink * articleLink; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * nameAnnotation; 
@property (nonatomic,copy) NSArray * propertyGroups; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)articleAbstract;
-(void)setArticleAbstract:(NSString *)arg1 ;
-(SAEncyclopediaEntityLink *)articleLink;
-(void)setArticleLink:(SAEncyclopediaEntityLink *)arg1 ;
-(NSString *)nameAnnotation;
-(void)setNameAnnotation:(NSString *)arg1 ;
-(NSArray *)propertyGroups;
-(void)setPropertyGroups:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)image;
-(void)setImage:(NSURL *)arg1 ;
-(id)groupIdentifier;
@end

