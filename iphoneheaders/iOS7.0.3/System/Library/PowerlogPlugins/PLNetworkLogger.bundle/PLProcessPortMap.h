/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:40:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLNetworkLogger.bundle/PLNetworkLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PLNetworkLogger/PLNetworkLogger-Structs.h>
@class NSMutableDictionary;

@interface PLProcessPortMap : NSObject {

	NSMutableDictionary* processFDs;
	socket_fdinfo si;
	int NbPids;
	int NbFds;
	int* Pids;
	proc_fdinfo* Fds;

}
-(void)dealloc;
-(id)init;
-(void)buildPortMap;
-(id)findProcessWithPort:(unsigned short)arg1 ;
-(int)getPids;
-(int)getFds:(proc_taskallinfo)arg1 withPid:(int)arg2 ;
@end
