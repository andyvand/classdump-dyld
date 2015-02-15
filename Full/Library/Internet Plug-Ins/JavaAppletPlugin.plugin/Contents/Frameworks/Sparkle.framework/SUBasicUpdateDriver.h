/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sparkle/SUUpdateDriver.h>
#import <Sparkle/NSURLDownloadDelegate.h>

@class SUAppcastItem, NSURLDownload, NSString, NSTask;

@interface SUBasicUpdateDriver : SUUpdateDriver <NSURLDownloadDelegate> {

	SUAppcastItem* updateItem;
	SUAppcastItem* nonDeltaUpdateItem;
	NSURLDownload* download;
	NSString* downloadPath;
	NSString* tempDir;
	NSString* relaunchPath;
	NSTask* relaunchApp;

}
-(void)appcastDidFinishLoading:(id)arg1 ;
-(void)appcast:(id)arg1 failedToLoadWithError:(id)arg2 ;
-(void)installerForHost:(id)arg1 failedWithError:(id)arg2 ;
-(void)unarchiverDidFail:(id)arg1 ;
-(void)installWithToolAndRelaunch:(char)arg1 ;
-(void)relaunchToolDidFinish:(id)arg1 ;
-(char)shouldInstallSynchronously;
-(void)abortUpdate;
-(id)versionComparator;
-(void)abortUpdateWithError:(id)arg1 ;
-(void)extractUpdate;
-(void)checkForUpdatesAtURL:(id)arg1 host:(id)arg2 ;
-(void)didNotFindUpdate;
-(void)didFindValidUpdate;
-(char)isItemNewer:(id)arg1 ;
-(void)cleanUpDownload;
-(void)downloadUpdate;
-(char)hostSupportsItem:(id)arg1 ;
-(char)itemContainsSkippedVersion:(id)arg1 ;
-(char)validateUpdateDownloadedToPath:(id)arg1 extractedToPath:(id)arg2 DSASignature:(id)arg3 publicDSAKey:(id)arg4 ;
-(void)failedToApplyDeltaUpdate;
-(char)itemContainsValidUpdate:(id)arg1 ;
-(char)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)unarchiverDidFinish:(id)arg1 ;
@end
