/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAEncyclopediaEntityPropertyGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * keyValueProperties; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyGroup;
+(id)propertyGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)keyValueProperties;
-(void)setKeyValueProperties:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
@end
