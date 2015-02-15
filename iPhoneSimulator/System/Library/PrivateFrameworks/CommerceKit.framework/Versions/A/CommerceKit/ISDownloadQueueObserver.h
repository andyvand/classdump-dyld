/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ISDownloadQueueObserver
@required
-(void)downloadQueueDidAddDownload:(id)arg1;
-(void)downloadQueueDidRemoveDownload:(id)arg1 queueIsIdle:(char)arg2;
-(void)download:(id)arg1 didUpdateStatus:(id)arg2;
-(void)downloadQueueDidCheckServerDownloadQueueForAccount:(id)arg1 withDownloadCount:(long long)arg2 newDownloads:(id)arg3;

@end

