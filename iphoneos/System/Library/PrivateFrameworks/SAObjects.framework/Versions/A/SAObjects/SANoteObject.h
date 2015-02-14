/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SANoteObject : SADomainObject

@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,copy) NSDate * createdDate; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSString * title; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(NSDate *)lastModifiedDate;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setContents:(NSString *)arg1 ;
-(NSString *)contents;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
@end

