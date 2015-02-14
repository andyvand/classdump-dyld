/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCRunLoopPatch.h>
#import <QuartzComposer/NSURLConnectionDelegate.h>

@class QCURLConnection, NSMutableData, NSString;

@interface QCDownloadPatch : QCRunLoopPatch <NSURLConnectionDelegate> {

	opaque_pthread_mutex_t _urlMutex;
	QCURLConnection* _urlConnection;
	NSMutableData* _urlData;
	unsigned long long _urlDataLength;
	float _urlDownloadProgress;
	id _urlResource;
	void** _unused5[5];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)isDownloading;
-(void)finalize;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(float)downloadProgress;
-(void)cleanup:(id)arg1 ;
-(void)_cleanUp:(id)arg1 ;
-(id)createResourceWithDownloadedData:(id)arg1 sourceURL:(id)arg2 ;
-(void)cancelDownload;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(char)downloadResource:(id)arg1 ;
-(id)getDownloadedResource;
@end

