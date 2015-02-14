/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASportsMatchupLineScore : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * period; 
@property (nonatomic,copy) NSString * score; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)matchupLineScore;
+(id)matchupLineScoreWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)score;
-(void)setScore:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)period;
-(void)setPeriod:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

