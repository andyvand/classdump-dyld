/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ILPathWatcher : NSObject
+(id)sharedPathWatcher;
-(char)isSavedQuery:(id)arg1 ;
-(char)watchPathIsUnique:(id)arg1 observer:(id)arg2 ;
-(void)watchQuery:(id)arg1 observer:(id)arg2 queryScope:(id)arg3 queryRunMode:(int)arg4 ;
-(char)watchedQueryIsUnique:(id)arg1 observer:(id)arg2 ;
-(void)removeAllPaths:(id)arg1 ;
-(void)watchPath:(id)arg1 observer:(id)arg2 ;
-(void)removePath:(id)arg1 observer:(id)arg2 ;
-(void)refreshPath:(id)arg1 observer:(id)arg2 ;
-(void)refreshAllPaths:(id)arg1 ;
-(id)init;
-(id)_init;
@end

