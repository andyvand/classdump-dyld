/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:10 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoConference/DotMacConfiguration.h>

@interface CommNATConfiguration : DotMacConfiguration {

	BOOL _gotServerInfo;
	unsigned _mainIP;
	unsigned short _mainPort0;
	unsigned short _mainPort1;
	unsigned _cohortIP;
	unsigned short _cohortPort;

}
-(void)getConfiguration;
-(int)getServerInfo:(unsigned*)arg1 pMainPort0:(unsigned short*)arg2 pMainPort1:(unsigned short*)arg3 pCohortIP:(unsigned*)arg4 pCohortPort:(unsigned short*)arg5 ;
-(id)init;
-(void)dealloc;
@end

