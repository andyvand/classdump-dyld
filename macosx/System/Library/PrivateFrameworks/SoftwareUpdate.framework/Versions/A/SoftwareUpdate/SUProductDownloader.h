/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <Foundation/NSOperation.h>
#import <SoftwareUpdate/SUURLSessionDownloadDelegate.h>

@class SUProduct, NSError, SUURLSessionDownload;

@interface SUProductDownloader : NSOperation <SUURLSessionDownloadDelegate> {

	SUProduct* _product;
	char _backgroundPriority;
	unsigned long long _totalLength;
	unsigned long long _finishedLength;
	char _isCancelled;
	dispatch_queue_sRef _opQueue;
	NSError* _error;
	SUURLSessionDownload* _session;

}

@property (assign) char backgroundPriority;              //@synthesize backgroundPriority=_backgroundPriority - In the implementation block
-(id)product;
-(void)saveCurrentState;
-(void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3 ;
-(id)packageReferenceForPackageIdentifier:(id)arg1 productKey:(id)arg2 invalidatingPreviousRef:(id)arg3 ;
-(void)downloadSessionDidFinishForProductKey:(id)arg1 ;
-(id)initWithProduct:(id)arg1 ;
-(long long)currentLength;
-(float)averageBytesPerSecond;
-(long long)totalLength;
-(char)backgroundPriority;
-(void)setBackgroundPriority:(char)arg1 ;
-(void)dealloc;
-(void)cancel;
-(char)isCancelled;
-(id)error;
-(double)progress;
-(void)main;
@end

