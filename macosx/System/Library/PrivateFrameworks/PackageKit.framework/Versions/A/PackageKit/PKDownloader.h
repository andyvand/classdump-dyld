/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKDownloaderQueue, PKDownloaderSpeedTracker, NSTimer;

@interface PKDownloader : NSObject {

	id _delegate;
	PKDownloaderQueue* _queue;
	char _isQueueRunning;
	char _stopNotificationPending;
	PKDownloaderSpeedTracker* _downloadTracker;
	PKDownloaderSpeedTracker* _checksumTracker;
	NSTimer* _progressTimer;

}
+(void)setUserAgent:(id)arg1 ;
+(id)keyPathsForValuesAffectingEstimatedTimeRemaining;
+(id)userAgent;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(double)progressValue;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)stopQueue;
-(void)startQueue;
-(long long)maxConcurrentDownloadCount;
-(void)setMaxConcurrentDownloadCount:(long long)arg1 ;
-(char)isQueueRunning;
-(void)_startQueuedDownloads;
-(void)setIsQueueRunning:(char)arg1 ;
-(void)_updateProgressInfo;
-(void)_startUpdateTimer;
-(char)_cancelDownloadCapturingResumeData:(id)arg1 ;
-(void)_stopUpdateTimer;
-(void)_notifyDelegateIfQueueStopped:(id)arg1 ;
-(void)_updateIndicators:(id)arg1 ;
-(void)_startDownloadForQueueElement:(id)arg1 ;
-(void)_finishFileCopyWithResult:(id)arg1 ;
-(void)_elementDidFinish:(id)arg1 ;
-(void)_element:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_postProcessDownloadWithArgs:(id)arg1 ;
-(char)_validatePackageAtPath:(id)arg1 ;
-(char)_validateDiskImageAtPath:(id)arg1 ;
-(void)_updateDownloadSpeed;
-(void)_startChecksumValidationForDownload:(id)arg1 ;
-(void)_startNativeValidationForDownload:(id)arg1 ;
-(void)queuePackageReference:(id)arg1 destination:(id)arg2 ;
-(char)queueContainsPackageReference:(id)arg1 ;
-(void)clearQueue;
-(char)isQueueEmpty;
-(unsigned long long)completedDownloadSize;
-(unsigned long long)totalDownloadSize;
-(void)_startFileCopyForQueueElement:(id)arg1 ;
-(char)_wantHTTPLogging;
-(void)download:(id)arg1 willResumeFromByte:(long long)arg2 ;
-(void)download:(id)arg1 didCheckDataOfLength:(unsigned long long)arg2 ;
-(double)estimatedTimeRemaining;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
@end

