/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/ISDownloadQueueObserver.h>

@interface CKDownloadQueueClient : NSObject <ISDownloadQueueObserver> {

	long long _downloadTypesMask;
	/*^block*/id _observerBlock;

}

@property (assign) long long downloadTypesMask;              //@synthesize downloadTypesMask=_downloadTypesMask - In the implementation block
@property (copy) id observerBlock;                           //@synthesize observerBlock=_observerBlock - In the implementation block
-(void)setObserverBlock:(id)arg1 ;
-(id)observerBlock;
-(void)setDownloadTypesMask:(long long)arg1 ;
-(long long)downloadTypesMask;
-(void)downloadQueueDidAddDownload:(id)arg1 ;
-(void)downloadQueueDidRemoveDownload:(id)arg1 queueIsIdle:(char)arg2 ;
-(void)download:(id)arg1 didUpdateStatus:(id)arg2 ;
-(void)downloadQueueDidCheckServerDownloadQueueForAccount:(id)arg1 withDownloadCount:(long long)arg2 newDownloads:(id)arg3 ;
@end

