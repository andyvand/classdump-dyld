/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/NSCoding.h>

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSCoding> {

	ICSDateValue* _start;
	ICSDateValue* _end;
	ICSDuration* _duration;

}
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(id)initWithStart:(id)arg1 duration:(id)arg2 ;
-(id)initWithStart:(id)arg1 ;
-(void)dealloc;
-(id)start;
-(id)duration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isDurationBased;
-(id)end;
@end

