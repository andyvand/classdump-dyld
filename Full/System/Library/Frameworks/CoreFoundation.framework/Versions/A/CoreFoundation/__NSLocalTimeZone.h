/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(char)supportsSecureCoding;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(char)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(oneway void)release;
-(id)retain;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
@end

