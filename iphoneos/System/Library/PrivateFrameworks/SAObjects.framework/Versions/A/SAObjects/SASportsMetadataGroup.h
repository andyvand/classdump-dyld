/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSNumber;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) NSNumber * selected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataGroup;
+(id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)metadata;
-(NSNumber *)selected;
-(id)encodedClassName;
-(NSString *)description;
-(void)setSelected:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setDescription:(NSString *)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
@end

