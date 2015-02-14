/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, MUIWKViewController, NSPort;

@interface MUIJavaScriptController : NSObject {

	NSMutableSet* _pendingJavaScriptRequests;
	MUIWKViewController* _controller;
	NSPort* _javaScriptPort;

}

@property (assign,nonatomic,__weak) MUIWKViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSPort * javaScriptPort;                              //@synthesize javaScriptPort=_javaScriptPort - In the implementation block
-(NSPort *)javaScriptPort;
-(id)evaluateJavaScriptSynchronously:(id)arg1 ;
-(void)setJavaScriptPort:(NSPort *)arg1 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(MUIWKViewController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setController:(MUIWKViewController *)arg1 ;
@end

