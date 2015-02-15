/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSPredefinedValue.h>

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue {

	NSString* _statusString;

}

@property (retain) NSString * statusString;              //@synthesize statusString=_statusString - In the implementation block
+(id)statusValueFromICSString:(id)arg1 ;
+(id)statusTypeFromCode:(int)arg1 statusString:(id)arg2 ;
+(id)statusTypeFromCode:(int)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)dealloc;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)statusString;
@end

