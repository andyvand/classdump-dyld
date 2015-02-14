/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/XprotectFramework.framework/Versions/A/XprotectFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSInvocation, NSThread, NSDictionary;

@interface XProtectAnalysis : NSObject {

	NSURL* _fileURL;
	NSInvocation* _analysisDelegateInvocation;
	NSThread* _workerThread;
	NSDictionary* _lsProperties;

}

@property (retain) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(char)beginAnalysisWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)beginAnalysisWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 contextInfo:(void*)arg3 feedback:(/*^block*/id)arg4 ;
-(void)cancelAnalysis;
-(void)dealloc;
-(id)description;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
-(id)initWithURL:(id)arg1 ;
@end

