/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FCAllowance : NSObject {

	NSMutableDictionary* _dictionary;

}
+(id)allowance;
+(id)defaultAllowance;
+(id)allowanceWithDictionary:(id)arg1 ;
-(char)dateIsInEffect:(id)arg1 ;
-(void)setFromDay:(int)arg1 ;
-(void)setToDay:(int)arg1 ;
-(void)setTimeLimitSeconds:(int)arg1 ;
-(char)dayIsInEffect:(int)arg1 ;
-(int)fromDay;
-(int)toDay;
-(int)timeLimitSeconds;
-(int)effectivity;
-(void)setEffectivity:(int)arg1 ;
-(id)_dictionary;
-(int)span;
-(void)setSpan:(int)arg1 ;
-(id)plistRepresentation;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setTag:(int)arg1 ;
-(int)tag;
-(id)initWithDictionary:(id)arg1 ;
@end

