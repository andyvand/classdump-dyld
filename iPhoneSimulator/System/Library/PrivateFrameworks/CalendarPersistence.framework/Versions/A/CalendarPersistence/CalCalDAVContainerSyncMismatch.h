/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface CalCalDAVContainerSyncMismatch : NSObject {

	NSURL* _url;
	NSString* _serverETag;
	NSURL* _folderURL;
	NSString* _cTag;
	NSString* _syncToken;
	int _mismatchType;

}

@property (retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (retain) NSString * serverETag;              //@synthesize serverETag=_serverETag - In the implementation block
@property (retain) NSURL * folderURL;                  //@synthesize folderURL=_folderURL - In the implementation block
@property (retain) NSString * cTag;                    //@synthesize cTag=_cTag - In the implementation block
@property (retain) NSString * syncToken;               //@synthesize syncToken=_syncToken - In the implementation block
@property (assign) int mismatchType;                   //@synthesize mismatchType=_mismatchType - In the implementation block
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)cTag;
-(void)setCTag:(NSString *)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(NSString *)serverETag;
-(void)setServerETag:(NSString *)arg1 ;
-(void)setFolderURL:(NSURL *)arg1 ;
-(void)setMismatchType:(int)arg1 ;
-(NSURL *)folderURL;
-(int)mismatchType;
@end

