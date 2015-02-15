/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storedownloadd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, DownloadQueue;

@interface DownloadErrorHandler : NSObject {

	NSMutableArray* _pendingDialogs;
	DownloadQueue* _downloadQueue;

}

@property (nonatomic,readonly) char hasActiveDialogs; 
-(void)_cancelAllDialogs;
-(void)_handleTooBigForNetworkError:(id)arg1 forDownload:(id)arg2 ;
-(void)_retryDialog:(id)arg1 dismissedWithButtonIndex:(long long)arg2 ;
-(void)_showDialog:(id)arg1 ;
-(id)initWithDownloadQueue:(id)arg1 ;
-(void)handleError:(id)arg1 forDownload:(id)arg2 storeClient:(id)arg3 ;
-(char)hasActiveDialogs;
-(void)dialog:(id)arg1 dismissedWithButtonIndex:(long long)arg2 ;
-(void)dialog:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
@end
