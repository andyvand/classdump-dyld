/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class MDSDistantStore, MDSAccessToken, NSObject;

@interface MDSDistantStore_Query : NSObject {

	char _didComplete;
	char _isClosed;
	MDSDistantStore* _store;
	MDSAccessToken* _accessToken;
	unsigned _taskID;
	unsigned long long _correlationID;
	/*^block*/id _resultsReplyBlock;
	int _requestID;
	double _pollInterval;
	NSObject*<OS_dispatch_source> _pollTimer;

}
-(id)initForStore:(id)arg1 withTaskID:(unsigned)arg2 correlationID:(unsigned long long)arg3 requestID:(int)arg4 withAccessToken:(id)arg5 ;
-(void)dealloc;
@end
