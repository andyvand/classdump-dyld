/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/NSCoding.h>

@interface ICSColor : NSObject <NSCoding> {

	unsigned char _red;
	unsigned char _green;
	unsigned char _blue;

}
+(char)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4 ;
+(id)symbolicColorForLegacyRGB:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
-(unsigned char)red;
-(unsigned char)green;
-(unsigned char)blue;
@end

