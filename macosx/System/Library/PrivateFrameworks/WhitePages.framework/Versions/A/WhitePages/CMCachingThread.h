/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CMCachingThread : NSObject {

	NSString* _cacheFilePath;
	char _cacheManagerWantsMeToTakeAHike;

}
-(id)initWithCacheFilePath:(id)arg1 cacheRecordAsIs:(char)arg2 ;
-(void)storeObjects:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(char)isCancelled;
@end

