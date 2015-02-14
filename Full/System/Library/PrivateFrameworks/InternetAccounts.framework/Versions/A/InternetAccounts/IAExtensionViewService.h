/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/NSViewService.h>

@class NSViewController;

@interface IAExtensionViewService : NSViewService {

	NSViewController* _childViewController;

}

@property (retain) NSViewController * childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
-(NSViewController *)childViewController;
-(void)setChildViewController:(NSViewController *)arg1 ;
-(id)remoteViewControllerInterface;
-(void)loadView;
-(void)completeSessionReturningItems:(id)arg1 error:(id)arg2 ;
@end

