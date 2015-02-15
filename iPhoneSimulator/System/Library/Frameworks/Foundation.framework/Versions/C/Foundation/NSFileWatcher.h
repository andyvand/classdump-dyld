/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSURL, NSFileWatcherObservations, NSMutableDictionary, NSString;

@interface NSFileWatcher : NSObject {

	dispatch_queue_sRef _queue;
	NSURL* _url;
	/*^block*/id _observer;
	char _isWatching;
	dispatch_source_sRef _eventSource;
	unsigned long long _lastObservedEventID;
	FSEventStreamRef _eventStream;
	char _eventsAreAboutDirectory;
	char _isUnsettled;
	NSFileWatcherObservations* _itemObservations;
	NSMutableDictionary* _subitemObservationsByEventPath;
	NSURL* _fileReferenceURL;
	NSString* _formerPath;
	NSURL* _formerURL;

}
-(void)setObserver:(/*^block*/id)arg1 ;
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)settle;
-(void)watchItem;
-(void)_coalesceSubitemObservations;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned)arg2 id:(unsigned long long)arg3 ;
-(void)unsettle;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setURL:(id)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
@end

