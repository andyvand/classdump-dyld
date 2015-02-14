/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCStringPort, NSString;

@interface QCDateFormatter : QCPatch {

	QCNumberPort* inputTime;
	QCStringPort* outputString;
	NSString* _zoneName;
	long long _dateStyle;
	long long _timeStyle;
	NSString* _format;
	double _lastTime;
	double _resolution;
	CFDateFormatterRef _formatter;

}
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(id)timeZoneNames;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setDateStyle:(long long)arg1 ;
-(void)setTimeStyle:(long long)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setTimeZoneName:(id)arg1 ;
-(id)timeZoneName;
-(long long)dateStyle;
-(long long)timeStyle;
-(void)setFormatString:(id)arg1 ;
-(id)formatString;
@end

