/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAEncyclopediaEntityLink : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)link;
+(id)linkWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)image;
-(void)setImage:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(void)setDescription:(NSString *)arg1 ;
@end

