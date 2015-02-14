/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSOperation.h>

@class NSURL, NSError, QLThumbnailAddition, NSDictionary, NSData;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	char _finished;
	char _executing;
	QLThumbnailAddition* _addition;
	QLThumbnailRef _thumbnailRequest;

}

@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign,getter=isExecuting,nonatomic) char executing;                   //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) char finished;                     //@synthesize finished=_finished - In the implementation block
-(char)isExecuting;
-(void)_finishWithError:(id)arg1 ;
-(void)setExecuting:(char)arg1 ;
-(char)_finishIfCancelled;
-(void)_afterThubmnailIsGenerated;
-(void)_afterThubmnailIsPutInGenstore;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(char)isConcurrent;
-(void)dealloc;
-(void)start;
-(id)description;
-(void)cancel;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)main;
@end

