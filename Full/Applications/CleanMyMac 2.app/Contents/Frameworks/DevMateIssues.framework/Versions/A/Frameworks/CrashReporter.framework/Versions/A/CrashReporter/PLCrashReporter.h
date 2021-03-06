/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/Versions/A/Frameworks/CrashReporter.framework/Versions/A/CrashReporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCrashReporterDelegate;
#import <CrashReporter/CrashReporter-Structs.h>
@class NSString;

@interface PLCrashReporter : NSObject {

	id<PLCrashReporterDelegate> delegate;
	char _enabled;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _crashReportDirectory;

}

@property (assign) id<PLCrashReporterDelegate> delegate; 
+(id)sharedReporter;
+(void)initialize;
-(void)enableHandlingUncaughtExceptions;
-(id)crashReportPath;
-(id)loadPendingCrashReportDataAndReturnError:(id*)arg1 ;
-(char)purgePendingCrashReportAndReturnError:(id*)arg1 ;
-(char)enableCrashReporterAndReturnError:(id*)arg1 ;
-(char)populateCrashReportDirectoryAndReturnError:(id*)arg1 ;
-(id)generateLiveReportWithThread:(unsigned)arg1 error:(id*)arg2 ;
-(id)generateLiveReportWithThread:(unsigned)arg1 writer:(plcrash_log_writer*)arg2 error:(id*)arg3 ;
-(id)generateLiveReportAndReturnError:(id*)arg1 ;
-(char)hasPendingCrashReport;
-(id)loadPendingCrashReportData;
-(char)purgePendingCrashReport;
-(char)enableCrashReporter;
-(id)generateLiveReportWithThread:(unsigned)arg1 ;
-(id)generateLiveReport;
-(id)generateExceptionReport;
-(id)generateExceptionReportAndReturnError:(id*)arg1 ;
-(id)generateExceptionReport:(id)arg1 error:(id*)arg2 ;
-(void)setCrashCallbacks:(PLCrashReporterCallbacks*)arg1 ;
-(id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 ;
-(id)crashReportDirectory;
-(id)queuedCrashReportDirectory;
-(id)initWithBundle:(id)arg1 ;
-(void)setDelegate:(id<PLCrashReporterDelegate>)arg1 ;
-(void)dealloc;
-(id<PLCrashReporterDelegate>)delegate;
@end

