/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSDate.h>

@interface __NSDate : NSDate {

	double _time;

}
+(id)__new:(double)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(double)timeIntervalSinceReferenceDate;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
@end
