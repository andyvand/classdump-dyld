/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/ILObserverNode.h>

@class NSString;

@interface ILWatchedNode : ILObserverNode {

	NSString* path;
	long long fd;

}
-(void)closeFD;
-(id)initWithObserver:(id)arg1 path:(id)arg2 fd:(long long)arg3 ;
-(void)setFd:(long long)arg1 ;
-(void)refreshFDForkQueueFD:(long long)arg1 ;
-(long long)fd;
-(void)dealloc;
-(id)path;
@end

