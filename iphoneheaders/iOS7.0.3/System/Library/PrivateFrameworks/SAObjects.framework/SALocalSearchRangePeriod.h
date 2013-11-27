/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SALocalSearchPeriod.h>

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (assign,nonatomic) int endSecondsSinceMidnight; 
@property (assign,nonatomic) int startSecondsSinceMidnight; 
+(id)rangePeriod;
+(id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(int)endSecondsSinceMidnight;
-(void)setEndSecondsSinceMidnight:(int)arg1 ;
-(int)startSecondsSinceMidnight;
-(void)setStartSecondsSinceMidnight:(int)arg1 ;
@end
