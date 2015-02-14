/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/NSPopoverDelegate.h>
#import <PassKit/PKPassViewerDelegate.h>

@class NSPopover, PKChildWindow, NSWindow, PKPassViewerViewController, NSArray, PKPassView, NSView, NSString;

@interface PKPassPopover : NSObject <NSPopoverDelegate, PKPassViewerDelegate> {

	NSPopover* _popover;
	PKChildWindow* _popoverMaskWindow;
	NSWindow* _hostWindow;
	PKPassViewerViewController* _viewController;
	NSArray* _passes;
	PKPassView* _passView;
	NSView* _hostView;
	/*^block*/id _completionHandler;
	CGRect _hostRect;

}

@property (readonly) NSArray * passes;                              //@synthesize passes=_passes - In the implementation block
@property (readonly) PKPassView * passView;                         //@synthesize passView=_passView - In the implementation block
@property (readonly) NSView * hostView;                             //@synthesize hostView=_hostView - In the implementation block
@property (readonly) CGRect hostRect;                               //@synthesize hostRect=_hostRect - In the implementation block
@property (copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_popovers;
+(id)popoverWithPasses:(id)arg1 relativeToRect:(CGRect)arg2 inView:(id)arg3 ;
+(id)popoverWithPass:(id)arg1 relativeToRect:(CGRect)arg2 inView:(id)arg3 ;
-(void)showPass;
-(NSArray *)passes;
-(void)showPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(PKPassView *)passView;
-(void)passViewer:(id)arg1 didAddToPassbook:(id)arg2 ;
-(void)passViewer:(id)arg1 closeClicked:(id)arg2 ;
-(id)initWithPasses:(id)arg1 relativeToRect:(CGRect)arg2 inView:(id)arg3 ;
-(CGRect)hostRect;
-(NSView *)hostView;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)popoverDidShow:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(void)_closePopover;
@end

