/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:52:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/librariand
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString, NSMutableDictionary, NSURL;

@interface LBFileAccessHistory : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _writeQueue;
	NSObject<OS_dispatch_source>* _timer;
	NSString* _dsid;
	NSMutableDictionary* _history;
	unsigned _maximumTrackedFiles;
	NSURL* _historyFileURL;
	double _maximumAgeOfTrackedFiles;

}

@property (assign,nonatomic) unsigned maximumTrackedFiles;                 //@synthesize maximumTrackedFiles=_maximumTrackedFiles - In the implementation block
@property (assign,nonatomic) double maximumAgeOfTrackedFiles;              //@synthesize maximumAgeOfTrackedFiles=_maximumAgeOfTrackedFiles - In the implementation block
@property (nonatomic,copy) NSURL * historyFileURL;                         //@synthesize historyFileURL=_historyFileURL - In the implementation block
+(id)historyWithDSID:(id)arg1 ;
-(void)_pruneHistory;
-(void)setHistoryFileURL:(id)arg1 ;
-(void)setMaximumTrackedFiles:(unsigned)arg1 ;
-(void)setMaximumAgeOfTrackedFiles:(double)arg1 ;
-(double)timeSinceLastAccessForURL:(id)arg1 ;
-(void)fileWasAccessedAtURL:(id)arg1 ;
-(id)historyFileURL;
-(double)maximumAgeOfTrackedFiles;
-(unsigned)maximumTrackedFiles;
-(double)_historyFileFlushDelay;
-(bool)_writeHistory:(id)arg1 ;
-(id)_readHistory;
-(void)_loadHistory;
-(id)_stringWithfileSystemRepresentationForURL:(id)arg1 ;
-(void)_scheduleHistoryWrite;
-(void)dealloc;
-(id)initWithDSID:(id)arg1 ;
@end
