/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAFmfGeoFence, NSNumber, NSString, NSURL;

@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (nonatomic,retain) SAFmfGeoFence * aceFmfGeoFence; 
@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * fenceType; 
@property (nonatomic,copy) NSNumber * oneTimeOnly; 
@property (nonatomic,copy) NSURL * searchContext; 
+(id)geoFenceSnippet;
+(id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(id)encodedClassName;
-(void)setEnable:(NSNumber *)arg1 ;
-(NSString *)fenceType;
-(void)setFenceType:(NSString *)arg1 ;
-(NSNumber *)oneTimeOnly;
-(void)setOneTimeOnly:(NSNumber *)arg1 ;
-(SAFmfGeoFence *)aceFmfGeoFence;
-(void)setAceFmfGeoFence:(SAFmfGeoFence *)arg1 ;
-(NSNumber *)enable;
-(id)groupIdentifier;
@end

