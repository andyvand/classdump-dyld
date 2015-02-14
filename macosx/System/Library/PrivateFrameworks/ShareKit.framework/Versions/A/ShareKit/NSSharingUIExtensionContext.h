/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/NSSharingExtensionContext.h>

@protocol NSSharingPlugInViewControllerProtocol;
@class NSViewController, SHKServiceCompletionInfo, SHKSharingViewService;

@interface NSSharingUIExtensionContext : NSSharingExtensionContext {

	NSViewController*<NSSharingPlugInViewControllerProtocol> _viewController;
	SHKServiceCompletionInfo* _completionInfo;
	SHKSharingViewService* _viewService;

}

@property (__weak) SHKSharingViewService * viewService;                                                  //@synthesize viewService=_viewService - In the implementation block
@property (__weak) NSViewController*<NSSharingPlugInViewControllerProtocol> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (retain) SHKServiceCompletionInfo * completionInfo;                                            //@synthesize completionInfo=_completionInfo - In the implementation block
+(char)shouldDimSourceWindow;
-(SHKSharingViewService *)viewService;
-(void)setViewService:(SHKSharingViewService *)arg1 ;
-(id)displayState;
-(void)cancelRequestWithError:(id)arg1 ;
-(Class)accountDelegateClass;
-(void)closeServiceWindowWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)serviceNeedsUserConfiguration;
-(void)startUserConfiguration;
-(void)performServiceWithOptionsDictionaryData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelServiceUI;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isInNotificationCenter;
-(SHKServiceCompletionInfo *)completionInfo;
-(void)_endServicePrematurelyWithViewService:(id)arg1 ;
-(void)_serviceWindowDidShowWithViewService:(id)arg1 ;
-(char)disableWindowPresentation;
-(char)hasNarrowLayout;
-(void)prepareUIWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getPreviewImageForAttachments:(id)arg1 block:(/*^block*/id)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(void)_endServicePrematurely;
-(char)_fadesOutSuccessfulClosingAnimation;
-(void)_reallyCompleteRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCompletionInfo:(SHKServiceCompletionInfo *)arg1 ;
-(void)_reallyCancelRequestWithError:(id)arg1 ;
-(id)previewItemSupportedTypes;
-(id)imageForItem:(id)arg1 ;
-(void)cancel;
-(id)title;
-(void)setViewController:(NSViewController*<NSSharingPlugInViewControllerProtocol>)arg1 ;
-(NSViewController*<NSSharingPlugInViewControllerProtocol>)viewController;
-(void)setDisplayState:(id)arg1 ;
@end

