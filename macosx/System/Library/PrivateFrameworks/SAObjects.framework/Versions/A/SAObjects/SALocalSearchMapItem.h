/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SADistance, NSNumber, SALocation;

@interface SALocalSearchMapItem : SADomainObject

@property (nonatomic,copy) NSArray * attributions; 
@property (nonatomic,retain) id<SAAceSerializable> detail; 
@property (nonatomic,copy) NSString * detailType; 
@property (nonatomic,copy) NSString * directionRole; 
@property (nonatomic,retain) SADistance * distance; 
@property (nonatomic,copy) NSNumber * distanceInMiles; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * localSearchProviderId; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSNumber * placeId; 
+(id)mapItem;
+(id)mapItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)attributions;
-(void)setAttributions:(NSArray *)arg1 ;
-(id<SAAceSerializable>)detail;
-(void)setDetail:(id<SAAceSerializable>)arg1 ;
-(SADistance *)distance;
-(void)setDistance:(SADistance *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)detailType;
-(void)setDetailType:(NSString *)arg1 ;
-(NSString *)directionRole;
-(void)setDirectionRole:(NSString *)arg1 ;
-(NSNumber *)distanceInMiles;
-(void)setDistanceInMiles:(NSNumber *)arg1 ;
-(NSNumber *)localSearchProviderId;
-(void)setLocalSearchProviderId:(NSNumber *)arg1 ;
-(NSNumber *)placeId;
-(void)setPlaceId:(NSNumber *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)groupIdentifier;
@end

