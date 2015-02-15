/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sparkle/SUUpdateDriver.h>

@class SUAppcastItem, NSURLDownload, NSString;

@interface SUBasicUpdateDriver : SUUpdateDriver {

	SUAppcastItem* updateItem;
	NSURLDownload* download;
	NSString* downloadPath;
	NSString* relaunchPath;

}
-(void)appcast:(id)arg1 failedToLoadWithError:(id)arg2 ;
-(void)appcastDidFinishLoading:(id)arg1 ;
-(void)installerForHost:(id)arg1 failedWithError:(id)arg2 ;
-(void)installerFinishedForHost:(id)arg1 ;
-(void)relaunchHostApp;
-(void)unarchiverDidFail:(id)arg1 ;
-(void)abortUpdateWithError:(id)arg1 ;
-(id)_versionComparator;
-(void)didFindValidUpdate;
-(char)itemContainsValidUpdate:(id)arg1 ;
-(char)hostSupportsItem:(id)arg1 ;
-(char)shouldInstallSynchronously;
-(char)itemContainsSkippedVersion:(id)arg1 ;
-(void)didNotFindUpdate;
-(void)abortUpdate;
-(void)checkForUpdatesAtURL:(id)arg1 host:(id)arg2 ;
-(void)installUpdate;
-(void)extractUpdate;
-(void)downloadUpdate;
-(char)isItemNewer:(id)arg1 ;
-(char)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)unarchiverDidFinish:(id)arg1 ;
-(void)cleanUp;
@end
