/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSFilePresenter.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSError, NSURLDownload, NSURLRequest, NSURLResponse, DownloadFile, NSMutableArray, NSString, NSDictionary, DownloadFileUnarchiver, NSDate, NSProgress, BrowserWindowControllerMac, NSObject, NSTimer, NSArray;

@interface DownloadProgressEntry : NSObject <NSFilePresenter> {

	NSURL* _URL;
	long long _bytesLoaded;
	long long _lastReportedBytesLoaded;
	long long _bytesExpected;
	NSError* _error;
	char _done;
	NSURLDownload* _download;
	Download* _wkDownload;
	NSURLRequest* _request;
	NSURLResponse* _response;
	DownloadFile* _downloadFile;
	NSMutableArray* _postDownloadFiles;
	NSString* _directoryPath;
	NSString* _identifier;
	NSDictionary* _resumeInformation;
	DownloadFileUnarchiver* _fileUnarchiver;
	unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >* _plistWriter;
	NSDate* _startDate;
	char _openWhenDone;
	char _allowOverwrite;
	char _removeEntryWhenDone;
	char _observingWidgetInstallationNotification;
	int _downloadStage;
	long long _bytesLoadedAtStart;
	int _iconNumber;
	long long _lastBytesPerSecond;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* m_suddenTerminationDisabler;
	NSProgress* _progress;
	float _lastSavedFractionCompleted;
	CGPoint _hopOriginPoint;
	BrowserWindowControllerMac* _hopOriginWindowController;
	char _observingFileLocation;
	NSObject*<OS_dispatch_queue> _cachedBundlePathAccessQueue;
	NSTimer* _reportUpdatedProgressTimer;
	NSArray* _tags;
	NSDate* _dateAdded;
	NSDate* _dateFinished;
	NSString* _cachedBundlePath;

}

@property (nonatomic,retain) NSArray * tags;                                             //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                                       //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) NSDate * dateFinished;                                    //@synthesize dateFinished=_dateFinished - In the implementation block
@property (nonatomic,copy) NSString * cachedBundlePath;                                  //@synthesize cachedBundlePath=_cachedBundlePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
-(void)savePendingChangesBeforeTermination;
-(void)setHopOriginPoint:(CGPoint)arg1 inWindowController:(id)arg2 ;
-(NSDate *)dateAdded;
-(void)setDirectoryPath:(id)arg1 ;
-(void)setResponse:(id)arg1 bytesLoaded:(long long)arg2 ;
-(id)createDownloadBundleWithFilename:(id)arg1 ;
-(char)allowOverwrite;
-(long long)bytesLoaded;
-(void)setBytesLoaded:(long long)arg1 ;
-(id)downloadFile;
-(void)setDownloadFileWithPath:(id)arg1 ;
-(void)saveInitialStateToPList;
-(void)setDone:(char)arg1 ;
-(const Download*)wkDownload;
-(id)download;
-(int)downloadStage;
-(NSDate *)dateFinished;
-(char)isIdle;
-(id)initWithDownload:(id)arg1 mayOpenWhenDone:(char)arg2 allowOverwrite:(char)arg3 removeEntryWhenDone:(char)arg4 ;
-(id)initWithWKDownload:(const Download*)arg1 mayOpenWhenDone:(char)arg2 allowOverwrite:(char)arg3 removeEntryWhenDone:(char)arg4 ;
-(void)willRemove;
-(char)notEnoughFreeDiskSpaceAtCurrentPath;
-(void)setDownloadStage:(int)arg1 ;
-(long long)bytesExpected;
-(long long)bytesLoadedSinceStart;
-(id)currentPath;
-(void)_setDownload:(id)arg1 ;
-(void)_setDownloadStage:(int)arg1 shouldSendNotifications:(char)arg2 ;
-(id)initWithRequest:(id)arg1 bytesLoaded:(long long)arg2 bytesExpected:(long long)arg3 error:(id)arg4 download:(id)arg5 downloadFile:(id)arg6 postDownloadFile:(id)arg7 downloadStage:(int)arg8 identifier:(id)arg9 mayOpenWhenDone:(char)arg10 allowOverwrite:(char)arg11 removeEntryWhenDone:(char)arg12 ;
-(void)_setResumeInformation:(id)arg1 ;
-(void)_markDownloadBundleAsInProgressIfNeeded;
-(void)_setStartDate:(id)arg1 ;
-(id)_bundlePath;
-(void)_forgetAllFiles;
-(char)_notEnoughFreeDiskSpaceAtDirectoryPath:(id)arg1 ;
-(id)_createDownloadBundleInDirectory:(id)arg1 withFilename:(id)arg2 ;
-(id)_downloadPathForJNLP;
-(id)_downloadPath;
-(id)_postDownloadPath;
-(id)_postDownloadFile;
-(void)_saveStateToPListInBundle:(id)arg1 ;
-(void)_markDownloadBundleAsInProgress;
-(void)_startObservingFileLocation;
-(void)_reportUpdatedProgress;
-(void)_postPathDidChangeNotification;
-(void)setBytesExpected:(long long)arg1 ;
-(id)currentFile;
-(char)canAttemptResume;
-(char)_canFinishDownloadWithoutReloading;
-(int)_autoOpen;
-(char)_hasAnyFiles;
-(void)_forgetPostDownloadFile:(id)arg1 ;
-(void)_forgetAllPostDownloadFiles;
-(id)_canceledError;
-(void)_reportUpdatedProgressTimerFired:(id)arg1 ;
-(void)_reportUpdatedProgressNow;
-(void)_cancelReportUpdatedProgressTimer;
-(void)_reportUpdatedProgressSoon;
-(id)busyStatus;
-(long long)bytesPerSecond;
-(void)_startPostProcessingIfDone;
-(void)_browserWindowWillClose:(id)arg1 ;
-(id)_threadSafeCachedBundlePath;
-(void)_updateCachedBundlePath;
-(void)_stopObservingFileLocation;
-(void)_addPostDownloadFileWithPath:(id)arg1 ;
-(void)_endWithPostDownloadError:(id)arg1 ;
-(void)_addUnarchivedFiles:(id)arg1 ;
-(char)_addCertificateToKeyChain;
-(id)_allFiles;
-(void)_updatePath:(id)arg1 ofFile:(id)arg2 ;
-(int)_openArchive;
-(char)_moveFilesFromBundle;
-(void)_updateCachedSecurityAssessment;
-(char)_open;
-(void)setCachedBundlePath:(NSString *)arg1 ;
-(NSString *)cachedBundlePath;
-(void)_addPostDownloadFiles:(id)arg1 ;
-(void)_stopReportingProgress;
-(void)_startReportingProgress;
-(id)_legalFilenameForDirectoryPath:(id)arg1 filename:(id)arg2 ;
-(void)_initializeResumeInformationForDownload;
-(void)_updateFractionCompletedExtendedAttributeIfNeededForPath:(id)arg1 minimumChange:(float)arg2 ;
-(long long)secondsRemaining;
-(void)_clearHopOrigin;
-(char)aliasFileExists;
-(char)fileExists;
-(char)reveal;
-(char)canAttemptOpen;
-(char)canAttemptReveal;
-(char)canStop;
-(char)canResumeOrReload;
-(char)isBusy;
-(void)dealloc;
-(void)stop;
-(id)URL;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSArray *)tags;
-(id)identifier;
-(void)resume;
-(id)filename;
-(id)dictionaryRepresentation;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(char)open;
-(void)setTags:(NSArray *)arg1 ;
-(id)statusString;
@end

