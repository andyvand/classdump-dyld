/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * confidenceScore; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (assign,nonatomic) char removeSpaceAfter; 
@property (assign,nonatomic) char removeSpaceBefore; 
@property (nonatomic,copy) NSNumber * startTime; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)token;
+(id)tokenWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(NSNumber *)startTime;
-(NSNumber *)endTime;
-(id)encodedClassName;
-(NSNumber *)confidenceScore;
-(void)setConfidenceScore:(NSNumber *)arg1 ;
-(char)removeSpaceAfter;
-(void)setRemoveSpaceAfter:(char)arg1 ;
-(char)removeSpaceBefore;
-(void)setRemoveSpaceBefore:(char)arg1 ;
-(NSString *)text;
-(id)groupIdentifier;
-(void)setStartTime:(NSNumber *)arg1 ;
-(void)setEndTime:(NSNumber *)arg1 ;
@end

