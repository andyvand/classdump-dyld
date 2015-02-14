/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKPackageReference, NSString, PKDownload;

@interface PKDownloaderQueueElement : NSObject {

	PKPackageReference* _packageRef;
	NSString* _destination;
	PKDownload* _download;
	unsigned long long _downloadedBytes;
	unsigned long long _checksummedBytes;
	unsigned long long _progressIncrement;

}
-(id)download;
-(id)initWithPackageReference:(id)arg1 destination:(id)arg2 ;
-(void)setDownload:(id)arg1 ;
-(id)partialPath;
-(id)resumeDataPath;
-(void)_resetProgress;
-(void)_addToDownloadedBytes:(unsigned long long)arg1 ;
-(unsigned long long)checksummedBytes;
-(void)_addToChecksummedBytes:(unsigned long long)arg1 ;
-(unsigned long long)_reportedProgress;
-(unsigned long long)_getAndClearProgressIncrement;
-(id)packageReference;
-(unsigned long long)downloadedBytes;
-(void)dealloc;
-(id)description;
-(id)destination;
@end

