/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <CloudDocs/BRNonLocalVersionReceiving.h>

@protocol BRNonLocalVersionSending;
@class NSURL, NSMutableArray, NSMutableDictionary, GSPermanentStorage, NSError, NSString;

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving> {

	NSURL* _documentURL;
	NSMutableArray* _versions;
	NSMutableDictionary* _versionsByEtag;
	GSPermanentStorage* _versionsStore;
	id<BRNonLocalVersionSending> _sender;
	char _executing;
	char _finished;
	char _state;
	/*^block*/id _fetchingVersionsDoneBlock;

}

@property (nonatomic,readonly) NSMutableArray * versions;                    //@synthesize versions=_versions - In the implementation block
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,copy) id fetchingVersionsDoneBlock;                     //@synthesize fetchingVersionsDoneBlock=_fetchingVersionsDoneBlock - In the implementation block
@property (assign,getter=isExecuting,nonatomic) char executing;              //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) char finished;                //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isExecuting;
-(void)setExecuting:(char)arg1 ;
-(void)_senderInvalidate;
-(char)__finishIfCancelled;
-(char)__advanceToState:(char)arg1 result:(id)arg2 error:(id)arg3 ;
-(char)_advanceToState:(char)arg1 result:(id)arg2 error:(id)arg3 ;
-(char)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id*)arg2 ;
-(oneway void)newVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(char)arg5 lastEditorDeviceName:(id)arg6 ;
-(oneway void)versionsDone;
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1 ;
-(id)fetchingVersionsDoneBlock;
-(char)isConcurrent;
-(id)initWithDocumentURL:(id)arg1 ;
-(void)setFetchingVersionsDoneBlock:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(NSString *)description;
-(void)cancel;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSMutableArray *)versions;
@end

