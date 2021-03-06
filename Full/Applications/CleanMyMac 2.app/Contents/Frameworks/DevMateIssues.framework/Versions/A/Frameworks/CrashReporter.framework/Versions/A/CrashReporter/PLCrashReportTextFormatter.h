/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/Versions/A/Frameworks/CrashReporter.framework/Versions/A/CrashReporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CrashReporter/PLCrashReportFormatter.h>

@interface PLCrashReportTextFormatter : NSObject <PLCrashReportFormatter> {

	int _textFormat;
	unsigned long long _stringEncoding;

}
+(id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2 reporterVersion:(id)arg3 ;
+(id)formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(char)arg4 ;
+(id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2 ;
-(id)formatReport:(id)arg1 error:(id*)arg2 ;
-(id)initWithTextFormat:(int)arg1 stringEncoding:(unsigned long long)arg2 ;
@end

