/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASportsMatchupLineScore : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * period; 
@property (nonatomic,copy) NSString * score; 
+(id)matchupLineScore;
+(id)matchupLineScoreWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)score;
-(id)encodedClassName;
-(id)period;
-(void)setPeriod:(id)arg1 ;
-(void)setScore:(id)arg1 ;
@end
