/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileReactorProxy.h>

@interface NSFileProviderProxy : NSFileReactorProxy {

	char _wantsWriteNotifications;

}

@property (assign) char wantsWriteNotifications;              //@synthesize wantsWriteNotifications=_wantsWriteNotifications - In the implementation block
-(/*^block*/id)provideItemAtURL:(id)arg1 forAccessClaim:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)providePhysicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2 ;
-(void)setItemLocation:(id)arg1 ;
-(void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4 ;
-(void)setWantsWriteNotifications:(char)arg1 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)provideLogicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)wantsWriteNotifications;
@end

