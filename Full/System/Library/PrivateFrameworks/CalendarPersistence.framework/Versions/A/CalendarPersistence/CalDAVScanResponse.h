/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface CalDAVScanResponse : NSObject {

	NSURL* _fileURL;
	NSString* _etag;

}

@property (retain) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
@property (retain) NSString * etag;              //@synthesize etag=_etag - In the implementation block
-(void)dealloc;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)etag;
-(id)initWithFileURL:(id)arg1 etag:(id)arg2 ;
@end

