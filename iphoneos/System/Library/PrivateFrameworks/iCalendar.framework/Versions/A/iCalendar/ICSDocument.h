/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSCalendar;

@interface ICSDocument : NSObject {

	ICSCalendar* _calendar;

}
+(int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1 ;
+(void)suppressParserSyntaxErrorLogging;
-(id)initWithCalendar:(id)arg1 ;
-(id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)ICSChecksumStringForVersion:(int)arg1 ;
-(char)validate:(id*)arg1 ;
-(void)dealloc;
-(id)calendar;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)ICSDataWithOptions:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)ICSChecksumForVersion:(int)arg1 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end

