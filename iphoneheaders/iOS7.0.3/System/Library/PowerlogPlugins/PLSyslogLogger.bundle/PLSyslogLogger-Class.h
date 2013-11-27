/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:40:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLSyslogLogger.bundle/PLSyslogLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PLSyslogLogger/PLSyslogLogger-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@interface PLSyslogLogger : PLLogger {

	unsigned lastMessageID;
	int kq;
	int syslogdPid;
	CFRunLoopSourceRef fileDescriptorSource;

}
-(void)listenForSyslogDeath;
-(void)resetMessageIndex;
-(void)enumerateResultsOfASLQuery:(aslmsgRef)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)log;
@end
