/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SATransportationResponse.h>

@class SACalendar, NSURL, NSArray;

@interface SATransportationRoutedResponse : SATransportationResponse

@property (nonatomic,retain) SACalendar * estimatedTime; 
@property (nonatomic,copy) NSURL * mapIdentifier; 
@property (nonatomic,copy) NSArray * wayPointItems; 
+(id)routedResponse;
+(id)routedResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(SACalendar *)estimatedTime;
-(void)setEstimatedTime:(SACalendar *)arg1 ;
-(NSURL *)mapIdentifier;
-(void)setMapIdentifier:(NSURL *)arg1 ;
-(NSArray *)wayPointItems;
-(void)setWayPointItems:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end

