/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:59:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/QuickLook/Mail.qlgenerator/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPort;

@interface _MailQLWebViewWaiter : NSObject {

	NSPort* _wakeupPort;

}

@property (nonatomic,readonly) NSPort * wakeupPort;              //@synthesize wakeupPort=_wakeupPort - In the implementation block
-(void)waitForWebViewToFinishLoading:(id)arg1 ;
-(NSPort *)wakeupPort;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
