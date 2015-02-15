/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber, NSURL;

@interface SATransportationWayPointItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * action; 
@property (nonatomic,copy) NSNumber * distance; 
@property (nonatomic,copy) NSURL * iconIdentifier; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSURL * mapIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wayPointItem;
+(id)wayPointItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)distance;
-(void)setDistance:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(id)encodedClassName;
-(NSURL *)mapIdentifier;
-(void)setMapIdentifier:(NSURL *)arg1 ;
-(NSURL *)iconIdentifier;
-(void)setIconIdentifier:(NSURL *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)action;
-(id)groupIdentifier;
@end

