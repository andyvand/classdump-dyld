/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty

@property (nonatomic,retain) NSString * tzid; 
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(NSString *)tzid;
-(void)setTzid:(NSString *)arg1 ;
-(id)description;
-(id)components;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
-(char)hasFloatingTimeZone;
-(char)hasTimeComponent;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(id)initWithValue:(id)arg1 ;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
@end

