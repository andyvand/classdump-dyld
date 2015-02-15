/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSTextField;

@interface FBADebugPrivilegedWindowController : NSWindowController {

	NSTextField* _samplerPID;

}

@property (__weak) NSTextField * samplerPID;              //@synthesize samplerPID=_samplerPID - In the implementation block
-(NSTextField *)samplerPID;
-(void)makeDaemonReady:(id)arg1 ;
-(void)stopDaemon:(id)arg1 ;
-(void)uninstallDaemon:(id)arg1 ;
-(void)pingDaemon:(id)arg1 ;
-(void)showCookies:(id)arg1 ;
-(void)copySysLog:(id)arg1 ;
-(void)mobilityReport:(id)arg1 ;
-(void)sampleProcess:(id)arg1 ;
-(void)sysDiagnose:(id)arg1 ;
-(void)tmDiagnose:(id)arg1 ;
-(void)mdDiagnose:(id)arg1 ;
-(void)wifiDiagnose:(id)arg1 ;
-(void)bluetoothDiagnose:(id)arg1 ;
-(void)gatherSyslogs:(id)arg1 ;
-(void)gatherInstallLogs:(id)arg1 ;
-(void)setSamplerPID:(NSTextField *)arg1 ;
@end
