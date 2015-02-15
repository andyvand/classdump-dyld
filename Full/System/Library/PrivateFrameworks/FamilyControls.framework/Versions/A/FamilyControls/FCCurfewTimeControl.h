/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyControls/FCTimeControl.h>

@class FCTime;

@interface FCCurfewTimeControl : FCTimeControl {

	FCTime* _start;
	FCTime* _end;

}

@property (retain) FCTime * start;              //@synthesize start=_start - In the implementation block
@property (retain) FCTime * end;                //@synthesize end=_end - In the implementation block
+(id)weekdayDefault;
+(id)weekendDefault;
+(id)curfewWithRange:(long long)arg1 start:(id)arg2 end:(id)arg3 enabled:(char)arg4 ;
+(id)curfewFromDictionary:(id)arg1 ;
-(char)dateIsInEffect:(id)arg1 ;
-(id)initWithRange:(long long)arg1 start:(id)arg2 end:(id)arg3 ;
-(void)setStart:(FCTime *)arg1 ;
-(id)plistRepresentation;
-(void)dealloc;
-(FCTime *)start;
-(id)description;
-(id)range;
-(FCTime *)end;
-(void)setEnd:(FCTime *)arg1 ;
@end
