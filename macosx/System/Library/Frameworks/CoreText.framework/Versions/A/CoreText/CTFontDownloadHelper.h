/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CTFontDownloadProgress.h>

@class NSXPCConnection;

@interface CTFontDownloadHelper : NSObject <CTFontDownloadProgress> {

	NSXPCConnection* _serviceConnection;
	/*^block*/id _progressBlock;

}
+(id)sharedHelper;
+(id)sharedRemoteObjectProxy;
-(id)serviceConnection;
-(id)init;
-(void)dealloc;
-(void)setProgress:(id)arg1 ;
-(void)setProgressBlock:(/*^block*/id)arg1 ;
@end

