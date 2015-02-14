/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, SALocation, NSArray, NSString;

@interface SAFmfSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,retain) SALocation * currentLocation; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocation *)currentLocation;
-(void)setCurrentLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSArray *)friends;
-(void)setFriends:(NSArray *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)proximity;
-(void)setProximity:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setEmailAddresses:(NSArray *)arg1 ;
@end

