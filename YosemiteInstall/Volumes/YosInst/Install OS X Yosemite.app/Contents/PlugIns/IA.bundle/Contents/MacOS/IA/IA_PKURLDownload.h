/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/IA_PKDownload.h>
#import <IA/NSURLDownloadDelegate.h>
#import <IA/NSURLConnectionDelegate.h>

@class NSURLDownload, NSString;

@interface IA_PKURLDownload : IA_PKDownload <NSURLDownloadDelegate, NSURLConnectionDelegate> {

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

