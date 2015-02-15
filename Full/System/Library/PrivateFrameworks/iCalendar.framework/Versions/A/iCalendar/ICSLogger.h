/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICSLoggingDelegate;
#import <iCalendar/iCalendar-Structs.h>
@interface ICSLogger : NSObject {

	int _logCount;
	id<ICSLoggingDelegate> _loggingDelegate;

}
+(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
+(void)setDelegate:(id)arg1 ;
+(id)sharedInstance;
-(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(_va_list_tag*)arg4 ;
-(void)setDelegate:(id)arg1 ;
@end
