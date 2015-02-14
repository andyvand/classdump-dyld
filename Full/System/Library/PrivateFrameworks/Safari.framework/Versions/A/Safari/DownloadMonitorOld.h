/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSURLDownloadDelegate.h>

@class NSMutableArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer, NSString;

@interface DownloadMonitorOld : NSObject <NSURLDownloadDelegate> {

	NSMutableArray* _entries;
	NSMapTable* _downloadToEntry;
	HashMap<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<DownloadProgressEntry> > >* _wkDownloadToEntry;
	NSMutableDictionary* _identifierToEntry;
	NSMutableSet* _openableDownloadURLs;
	HashMap<Safari::WK::Download, WTF::RetainPtr<PassFileDownload>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<PassFileDownload> > >* _wkDownloadToPassFileDownload;
	NSMutableSet* _passFileDownloadURLs;
	NSMutableSet* _urlsOfPendingDownloadsInitiatedFromPrivateBrowsing;
	unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >* _historyWriter;
	char _loadedDownloadHistory;
	char _hadEntriesOnDisk;
	char _isPlanningToWriteOnQuit;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _suddenTerminationDisabler;
	NSMutableArray* _queuedAlerts;
	char _waitingToShowTerminationPrompt;
	float _totalProgress;
	NSTimer* _updateTotalProgressTimer;
	NSTimer* _removeDownloadsAfterOneDayTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDownloadMonitor;
+(id)downloadBundleExtension;
-(char)shouldShowTerminationPrompt;
-(void)showTerminationPrompt;
-(void)savePendingChangesBeforeTermination;
-(int)totalBusy;
-(void)startDownloadForRequest:(id)arg1 mayOpenWhenDone:(char)arg2 removeEntryWhenDone:(char)arg3 ;
-(void)resumeDownloadAtPath:(id)arg1 ;
-(void)startDownloadForRequest:(id)arg1 mayOpenWhenDone:(char)arg2 allowOverwrite:(char)arg3 removeEntryWhenDone:(char)arg4 path:(id)arg5 tags:(id)arg6 ;
-(void)removeEntriesAddedAfterDate:(id)arg1 ;
-(void)downloadMayBeOpenedForURL:(id)arg1 ;
-(void)addPassFileDownloadURL:(id)arg1 ;
-(void)addPendingDownloadURLInitiatedFromPrivateBrowsing:(id)arg1 ;
-(void)wkDownloadDidStart:(const Download*)arg1 ;
-(void)wkDownload:(const Download*)arg1 didReceiveResponse:(const URLResponse*)arg2 ;
-(void)wkDownload:(const Download*)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(BOOL)wkDownload:(const Download*)arg1 shouldDecodeSourceDataOfMIMEType:(const String*)arg2 ;
-(String*)wkDownload:(const Download*)arg1 decideDestinationWithSuggestedFilename:(const String*)arg2 allowOverwrite:(BOOL*)arg3 ;
-(void)wkDownload:(const Download*)arg1 didCreateDestination:(const String*)arg2 ;
-(void)wkDownloadDidFinish:(const Download*)arg1 ;
-(void)wkDownload:(const Download*)arg1 didFailWithError:(const Error*)arg2 ;
-(void)wkDownloadDidCancel:(const Download*)arg1 ;
-(void)wkDownloadProcessDidCrash:(const Download*)arg1 ;
-(void)_downloadEntryStageChanged:(id)arg1 ;
-(void)_defaultsChanged:(id)arg1 ;
-(void)_removeEntriesFinishedOverOneDayAgoAndUpdateTimerIfAppropriate;
-(id)_createEntryForDownload:(id)arg1 allowOverwrite:(char)arg2 removeEntryWhenDone:(char)arg3 ;
-(void)_startUpdateTotalProgressTimer;
-(void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3 ;
-(void)cancelDownloadForEntry:(id)arg1 withError:(id)arg2 ;
-(void)_download:(id)arg1 entry:(id)arg2 didFailWithError:(id)arg3 ;
-(id)_createEntryForRequest:(id)arg1 allowOverwrite:(char)arg2 removeEntryWhenDone:(char)arg3 ;
-(void)_wkDownload:(const Download*)arg1 entry:(id)arg2 didFailWithError:(id)arg3 wasCanceled:(char)arg4 ;
-(void)_reportInvalidDownloadFileErrorForPath:(id)arg1 ;
-(void)_addEntry:(id)arg1 withNotification:(char)arg2 ;
-(void)_loadDownloadHistoryIfNeeded;
-(id)validEntriesFromEntries:(id)arg1 forBooleanKey:(id)arg2 ;
-(void)_insertEntry:(id)arg1 atIndex:(unsigned)arg2 withNotification:(char)arg3 removeOld:(char)arg4 ;
-(void)_removeEntries:(id)arg1 withNotification:(char)arg2 ;
-(id)busyEntries;
-(void)_showNextQueuedAlert;
-(char)_needToWriteHistoryFileOnQuit;
-(void)_saveDownloadHistory;
-(id)downloadMetadataIOQueue;
-(char)_shouldCleanupHistoryAfterOneDay;
-(void)_cancelRemoveDownloadsAfterOneDayTimer;
-(char)_shouldClearHistoryOnQuit;
-(void)_updateSuddenTerminationSetting;
-(void)removeEntriesFinishedBeforeDate:(id)arg1 ;
-(void)_scheduleCleanupOfOldestDownload;
-(id)_downloadHistoryFile;
-(id)_prepareToWriteDownloadHistory;
-(int)total;
-(void)_noteDownloadsChanged;
-(void)_addHistoryEntry:(id)arg1 ;
-(void)_reportInsufficientDiskSpaceSheetForDownload:(id)arg1 ;
-(void)_updateTotalProgress:(id)arg1 ;
-(float)_calculateTotalProgress;
-(void)stopAllDownloads;
-(void)_showTerminationPrompt;
-(void)showDownloadAlert:(id)arg1 ;
-(void)downloadDidBegin:(id)arg1 ;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(char)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)download:(id)arg1 didCreateDestination:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(unsigned)indexOfEntry:(id)arg1 ;
-(void)removeEntries:(id)arg1 ;
-(void)removeEntry:(id)arg1 ;
-(void)removeIdleEntries;
-(void)removePassFileDownloadForWKDownload:(const Download*)arg1 ;
-(int)totalIdle;
-(float)totalProgress;
-(void)setEntry:(id)arg1 forDownload:(id)arg2 ;
-(id)_createEntryForWKDownload:(const Download*)arg1 ;
-(id)_passFileDownloadForWKDownload:(const Download*)arg1 ;
-(void)wkDownload:(const Download*)arg1 willResumeWithResponse:(const URLResponse*)arg2 fromByte:(long long)arg3 ;
-(id)entries;
-(id)init;
-(void)insertEntry:(id)arg1 atIndex:(unsigned)arg2 ;
@end

