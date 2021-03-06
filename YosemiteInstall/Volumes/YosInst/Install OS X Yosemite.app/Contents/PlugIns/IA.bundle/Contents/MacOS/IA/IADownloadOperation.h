/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/IASetupOperation.h>

@class NSArray, NSTimer;

@interface IADownloadOperation : IASetupOperation {

	NSArray* _packageList;
	id _delegate;
	double _estimatedTimeRemaining;
	double _currentTotalEstimatedTime;
	double _progressPercentage;
	char _doesSignificantDownload;
	char _done;
	NSTimer* _timeoutTimer;

}
-(void)_installTimeoutTimer;
-(void)_calculateTimeEstimates;
-(void)resumeDownload;
-(void)pauseDownload;
-(void)_stopCompatibiltyUpdateDownload:(id)arg1 ;
-(void)productManager:(id)arg1 updatedEstimatedTimeRemaining:(double)arg2 ;
-(void)startWithDelegate:(id)arg1 ;
-(void)productManagerFinishedDownloadingPackages:(id)arg1 ;
-(char)canResume;
-(void)productManager:(id)arg1 updatedPercentComplete:(double)arg2 ;
-(void)productManager:(id)arg1 startedDownloadingWithTotalSize:(unsigned long long)arg2 ;
-(void)productManager:(id)arg1 failedDownloadingPackagesWithError:(id)arg2 ;
-(void)productManager:(id)arg1 updatedCompletedSize:(unsigned long long)arg2 ;
-(double)totalEstimatedTime;
-(id)initWithState:(id)arg1 ;
-(double)estimatedTimeRemaining;
-(double)progressPercentage;
-(void)dealloc;
-(void)stop;
-(id)statusString;
@end

