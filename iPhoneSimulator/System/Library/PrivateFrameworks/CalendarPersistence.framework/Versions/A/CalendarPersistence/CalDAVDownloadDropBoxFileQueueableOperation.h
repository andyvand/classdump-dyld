/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

@class NSString, CALEntity, NSFileHandle, NSURL, NSMutableArray;

@interface CalDAVDownloadDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation {

	NSString* _attachmentName;
	NSString* _etag;
	CALEntity* _masterEntity;
	NSFileHandle* _destFileHandle;
	NSURL* _dropBoxURL;
	NSMutableArray* _urlsToTry;

}

@property (retain) NSFileHandle * destFileHandle;              //@synthesize destFileHandle=_destFileHandle - In the implementation block
-(void)dealloc;
-(id)masterEntity;
-(void)performOperation;
-(id)initWithChangeRequest:(id)arg1 attachmentName:(id)arg2 etag:(id)arg3 entity:(id)arg4 dropBoxURL:(id)arg5 fromSource:(id)arg6 ;
-(id)extraUserInfoForRebuiltError;
-(void)setDestFileHandle:(NSFileHandle *)arg1 ;
-(void)setQuarantineProperties;
-(id)_managedAttachmentByFilename:(id)arg1 inContext:(id)arg2 ;
-(void)_processFileWithContentType:(id)arg1 etag:(id)arg2 ;
-(id)_popNextURLToTry;
-(NSFileHandle *)destFileHandle;
-(void)_doFetchAtNextURL;
-(void)_handleDownloadResponseHeaders:(id)arg1 url:(id)arg2 error:(id)arg3 ;
-(void)_addURLToTry:(id)arg1 ;
@end

