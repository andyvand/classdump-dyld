/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegate <NSObject>
@optional
-(void)clientInterface:(id)arg1 exitStoreWithReason:(int)arg2;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(int)arg3;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(int)arg2 animated:(BOOL)arg3;
-(void)returnToLibraryForClientInterface:(id)arg1;
-(id)previewOverlayForClientInterface:(id)arg1;
-(id)scriptInterfaceForClientInterface:(id)arg1;
-(id)tabBarControllerForClientInterface:(id)arg1;
@end
