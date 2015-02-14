/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * data; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,retain) SAPerson * object; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personAttribute;
+(id)personAttributeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)displayText;
-(id)encodedClassName;
-(SAPerson *)object;
-(NSString *)data;
-(void)setObject:(SAPerson *)arg1 ;
-(void)setData:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

