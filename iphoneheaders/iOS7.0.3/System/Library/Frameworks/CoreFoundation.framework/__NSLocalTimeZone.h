/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(BOOL)supportsSecureCoding;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)localizedName:(int)arg1 locale:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)retainCount;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(id)data;
-(id)name;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(int)secondsFromGMTForDate:(id)arg1 ;
@end
