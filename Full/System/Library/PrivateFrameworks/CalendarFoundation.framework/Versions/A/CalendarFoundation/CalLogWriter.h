/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogWriter.h>

@protocol CalLogWriter <NSObject>
@property (nonatomic,retain) id<CalLogFormatter> formatter; 
@required
-(void)write:(id)arg1;
-(id)initWithParameters:(id)arg1;
-(char)flush;
-(id<CalLogFormatter>)formatter;
-(void)setFormatter:(id)arg1;

@end


@protocol CalLogFormatter;
@class NSString;

@interface CalLogWriter : NSObject <CalLogWriter> {

	id<CalLogFormatter> _formatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<CalLogFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(void)write:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(id)init;
-(char)flush;
-(NSString *)description;
-(id<CalLogFormatter>)formatter;
-(void)setFormatter:(id<CalLogFormatter>)arg1 ;
@end

