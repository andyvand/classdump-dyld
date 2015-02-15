/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SALocalSearchBusiness2.h>

@class NSArray, NSString, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (nonatomic,copy) NSArray * attributeSet; 
@property (nonatomic,copy) NSString * currencySymbol; 
@property (nonatomic,copy) NSArray * makeReservationPunchOuts; 
@property (nonatomic,copy) NSURL * menuLink; 
@property (nonatomic,copy) NSArray * openings; 
@property (nonatomic,copy) NSArray * orderDeliveryPunchOuts; 
@property (nonatomic,copy) NSString * priceRange; 
+(id)restaurant;
+(id)restaurantWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)currencySymbol;
-(void)setCurrencySymbol:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)attributeSet;
-(void)setAttributeSet:(NSArray *)arg1 ;
-(NSArray *)makeReservationPunchOuts;
-(void)setMakeReservationPunchOuts:(NSArray *)arg1 ;
-(NSURL *)menuLink;
-(void)setMenuLink:(NSURL *)arg1 ;
-(NSArray *)openings;
-(void)setOpenings:(NSArray *)arg1 ;
-(NSArray *)orderDeliveryPunchOuts;
-(void)setOrderDeliveryPunchOuts:(NSArray *)arg1 ;
-(NSString *)priceRange;
-(void)setPriceRange:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

