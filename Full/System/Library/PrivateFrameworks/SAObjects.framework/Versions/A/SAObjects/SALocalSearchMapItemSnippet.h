/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSArray * providerCommand; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (nonatomic,retain) SALocation * searchRegionCenter; 
@property (nonatomic,copy) NSNumber * userCurrentLocation; 
+(id)mapItemSnippet;
+(id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)providerCommand;
-(void)setProviderCommand:(NSArray *)arg1 ;
-(NSNumber *)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg1 ;
-(SALocation *)searchRegionCenter;
-(void)setSearchRegionCenter:(SALocation *)arg1 ;
-(NSNumber *)userCurrentLocation;
-(void)setUserCurrentLocation:(NSNumber *)arg1 ;
-(NSArray *)items;
-(id)groupIdentifier;
@end

