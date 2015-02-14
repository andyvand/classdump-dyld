/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPCompoundDownload.h>

@protocol IMAPMessage;
@class MCMimePart;

@interface IMAPMessageDownload : IMAPCompoundDownload {

	id<IMAPMessage> _message;
	unsigned _usingPartialDownloads : 1;
	unsigned _startedFetch : 1;
	unsigned _fetchingBodyText : 1;
	unsigned _doneAddingSubdownloads : 1;
	char _allowsPartialDownloads;
	char _writesCacheFile;
	MCMimePart* _topLevelPart;

}

@property (retain) MCMimePart * topLevelPart;                //@synthesize topLevelPart=_topLevelPart - In the implementation block
@property (retain) id<IMAPMessage> message; 
@property (assign) char allowsPartialDownloads;              //@synthesize allowsPartialDownloads=_allowsPartialDownloads - In the implementation block
@property (assign) char writesCacheFile;                     //@synthesize writesCacheFile=_writesCacheFile - In the implementation block
-(char)allowsPartialDownloads;
-(void)setAllowsPartialDownloads:(char)arg1 ;
-(MCMimePart *)topLevelPart;
-(char)isComplete;
-(void)setWritesCacheFile:(char)arg1 ;
-(void)setTopLevelPart:(MCMimePart *)arg1 ;
-(void)dealloc;
-(id)data;
-(id<IMAPMessage>)message;
-(void)setMessage:(id<IMAPMessage>)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(id)createCopy;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(char)writesCacheFile;
-(void)_addMimeSubdownloadsToPipeline:(id)arg1 withCache:(id)arg2 ;
@end

