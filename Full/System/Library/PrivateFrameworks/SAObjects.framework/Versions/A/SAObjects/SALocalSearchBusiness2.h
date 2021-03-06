/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SALocation, NSURL, NSArray, NSString, NSDictionary, SALocalSearchOperationHours;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSURL * businessUrl; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDictionary * identifierMap; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * offerLists; 
@property (nonatomic,retain) SALocalSearchOperationHours * operationHours; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSArray * photoFullSize; 
@property (nonatomic,copy) NSArray * photoList; 
@property (nonatomic,copy) NSArray * photoThumbnail; 
@property (nonatomic,copy) NSArray * reviewList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)business2;
+(id)business2WithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)extSessionGuid;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSURL *)businessUrl;
-(void)setBusinessUrl:(NSURL *)arg1 ;
-(NSArray *)reviewList;
-(NSDictionary *)identifierMap;
-(void)setIdentifierMap:(NSDictionary *)arg1 ;
-(NSArray *)offerLists;
-(void)setOfferLists:(NSArray *)arg1 ;
-(SALocalSearchOperationHours *)operationHours;
-(void)setOperationHours:(SALocalSearchOperationHours *)arg1 ;
-(NSArray *)photoFullSize;
-(void)setPhotoFullSize:(NSArray *)arg1 ;
-(NSArray *)photoList;
-(void)setPhotoList:(NSArray *)arg1 ;
-(NSArray *)photoThumbnail;
-(void)setPhotoThumbnail:(NSArray *)arg1 ;
-(void)setReviewList:(NSArray *)arg1 ;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)phoneNumber;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(void)setDescription:(NSString *)arg1 ;
-(SALocation *)address;
-(void)setAddress:(SALocation *)arg1 ;
@end

