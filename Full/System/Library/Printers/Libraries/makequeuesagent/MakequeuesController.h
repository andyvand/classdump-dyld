/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Printers/Libraries/makequeuesagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <makequeuesagent/SUPredicateInstallControllerDelegate.h>
#import <makequeuesagent/ICDeviceBrowserDelegate.h>

@class NSOperationQueue, DownloadTriggerOperation, SUPredicateInstallController, ICDeviceBrowser, NSMutableSet, NSString;

@interface MakequeuesController : NSObject <SUPredicateInstallControllerDelegate, ICDeviceBrowserDelegate> {

	NSOperationQueue* _operationQueue;
	DownloadTriggerOperation* _downloadOperation;
	SUPredicateInstallController* _softwareUpdateController;
	ICDeviceBrowser* _deviceBrowser;
	NSMutableSet* _seenPrinters;
	NSMutableSet* _printersAdded;
	unsigned long long _exitStatus;
	char _done;
	char _downloadDrivers;
	char _driversDownloaded;
	char _cuttlefish;

}

@property (retain) NSOperationQueue * operationQueue;                                    //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) DownloadTriggerOperation * downloadOperation;                         //@synthesize downloadOperation=_downloadOperation - In the implementation block
@property (retain) SUPredicateInstallController * softwareUpdateController;              //@synthesize softwareUpdateController=_softwareUpdateController - In the implementation block
@property (retain) NSMutableSet * seenPrinters;                                          //@synthesize seenPrinters=_seenPrinters - In the implementation block
@property (retain) NSMutableSet * printersAdded;                                         //@synthesize printersAdded=_printersAdded - In the implementation block
@property (assign) unsigned long long exitStatus;                                        //@synthesize exitStatus=_exitStatus - In the implementation block
@property (assign) char done;                                                            //@synthesize done=_done - In the implementation block
@property (assign) char downloadDrivers;                                                 //@synthesize downloadDrivers=_downloadDrivers - In the implementation block
@property (assign) char driversDownloaded;                                               //@synthesize driversDownloaded=_driversDownloaded - In the implementation block
@property (assign) char cuttlefish;                                                      //@synthesize cuttlefish=_cuttlefish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationCompleted:(id)arg1 ;
-(void)setSoftwareUpdateController:(SUPredicateInstallController *)arg1 ;
-(void)setDownloadDrivers:(char)arg1 ;
-(void)setPrintersAdded:(NSMutableSet *)arg1 ;
-(void)setDownloadOperation:(DownloadTriggerOperation *)arg1 ;
-(void)setSeenPrinters:(NSMutableSet *)arg1 ;
-(DownloadTriggerOperation *)downloadOperation;
-(SUPredicateInstallController *)softwareUpdateController;
-(NSMutableSet *)seenPrinters;
-(NSMutableSet *)printersAdded;
-(unsigned long long)exitStatus;
-(void)setExitStatus:(unsigned long long)arg1 ;
-(char)downloadDrivers;
-(char)cuttlefish;
-(void)setCuttlefish:(char)arg1 ;
-(char)seenThisPrinter:(id)arg1 ;
-(void)terminateApplication:(unsigned long long)arg1 ;
-(void)setSeenThisPrinter:(id)arg1 ;
-(void)notifyDriversInstalled;
-(void)updateMFPs;
-(void)setDone:(char)arg1 ;
-(void)setDriversDownloaded:(char)arg1 ;
-(char)driversDownloaded;
-(void)predicateInstallDidComplete:(id)arg1 ;
-(void)predicateInstallUserDidCancel:(id)arg1 ;
-(void)predicateInstall:(id)arg1 didFailWithError:(id)arg2 ;
-(char)done;
-(void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(char)arg3 ;
-(void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(char)arg3 ;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(int)run:(id)arg1 ;
@end

