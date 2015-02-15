/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock;

@interface ILPluginLoadManager : NSObject {

	NSLock* _stateLock;
	int _loadState;
	char _loadRequestPending;
	char _cancelLoadRequestPending;
	char _autoReloadEnabled;
	char _needsReload;
	char _loadDataCalled;

}
-(void)setLoadState:(int)arg1 ;
-(char)needsReload;
-(char)isLoadRequestPending;
-(void)setLoadRequestPending:(char)arg1 ;
-(void)setNeedsReload:(char)arg1 ;
-(void)setLoadDataCalled:(char)arg1 ;
-(void)setCancelLoadRequestPending:(char)arg1 ;
-(char)isAutoReloadEnabled;
-(void)setAutoReloadEnabled:(char)arg1 ;
-(char)isCancelLoadRequestPending;
-(char)loadDataCalled;
-(char)isUnloaded;
-(int)loadState;
-(char)isLoading;
-(id)init;
-(char)isLoaded;
@end

