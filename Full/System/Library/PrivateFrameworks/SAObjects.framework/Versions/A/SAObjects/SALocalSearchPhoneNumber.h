/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchPhoneNumber : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneNumberWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)phoneNumber;
-(id)encodedClassName;
-(NSString *)type;
-(void)setValue:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)value;
-(id)groupIdentifier;
@end

