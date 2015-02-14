/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKDownloadDelegateNSObject;
@class NSString;

@interface PKDownload : NSObject {

	NSString* _dstPath;
	char _deleteFileOnFailure;
	char _overwriteIfFileExists;
	id<PKDownloadDelegate><NSObject> _delegate;

}
+(id)downloadWithResumeData:(id)arg1 destination:(id)arg2 delegate:(id)arg3 ;
+(id)downloadWithURL:(id)arg1 delegate:(id)arg2 ;
+(id)_downloadClasses;
+(char)canDownloadURL:(id)arg1 ;
+(char)canDownloadWithResumeData:(id)arg1 ;
+(void)addDownloadClass:(Class)arg1 ;
-(void)setDeletesFileUponFailure:(char)arg1 ;
-(void)setDestination:(id)arg1 allowOverwrite:(char)arg2 ;
-(id)sourceURL;
-(char)validatesDuringDownload;
-(id)initWithResumeData:(id)arg1 destination:(id)arg2 delegate:(id)arg3 ;
-(void)cancel;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)resumeData;
-(char)deletesFileUponFailure;
-(id)sourcePath;
@end

