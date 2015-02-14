/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKDownload.h>
#import <PackageKit/NSURLDownloadDelegate.h>
#import <PackageKit/NSURLConnectionDelegate.h>

@class NSURLDownload, NSString;

@interface PKURLDownload : PKDownload <NSURLDownloadDelegate, NSURLConnectionDelegate> {

	NSURLDownload* _urlDownload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canDownloadURL:(id)arg1 ;
+(char)canDownloadWithResumeData:(id)arg1 ;
-(void)setDeletesFileUponFailure:(char)arg1 ;
-(void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3 ;
-(void)setDestination:(id)arg1 allowOverwrite:(char)arg2 ;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(id)sourceURL;
-(char)_wantHTTPLogging;
-(id)initWithResumeData:(id)arg1 destination:(id)arg2 delegate:(id)arg3 ;
-(void)cancel;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)resumeData;
-(id)sourcePath;
@end

