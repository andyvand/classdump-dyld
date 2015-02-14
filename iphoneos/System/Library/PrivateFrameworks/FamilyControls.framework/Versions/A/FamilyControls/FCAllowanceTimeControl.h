/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyControls/FCTimeControl.h>

@interface FCAllowanceTimeControl : FCTimeControl {

	int _secondsPerDay;

}

@property (assign) int secondsPerDay;              //@synthesize secondsPerDay=_secondsPerDay - In the implementation block
+(id)allowanceWithRange:(long long)arg1 secondsPerDay:(int)arg2 enabled:(char)arg3 ;
+(id)allowanceFromDictionary:(id)arg1 ;
+(id)weekdayDefault;
+(id)weekendDefault;
-(char)dateIsInEffect:(id)arg1 ;
-(void)setSecondsPerDay:(int)arg1 ;
-(id)initWithRange:(long long)arg1 secondsPerDay:(int)arg2 ;
-(int)secondsPerDay;
-(id)plistRepresentation;
-(void)dealloc;
-(id)description;
@end

