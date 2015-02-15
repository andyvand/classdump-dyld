/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <iTunes/iTunes-Structs.h>
@interface StoreUIDelegate : NSObject {

	StoreHTMLDisplay* _storeDisplay;

}
-(id)initWithStoreDisplay:(StoreHTMLDisplay*)arg1 ;
-(id)createMenuItem:(id)arg1 andTag:(long long)arg2 andTitle:(id)arg3 andSelector:(SEL)arg4 ;
-(void)viewSourceAction:(id)arg1 ;
-(void)copyLinkAction:(id)arg1 ;
-(id)createMenuItem:(id)arg1 withLocString:(unsigned)arg2 andTag:(long long)arg3 andSelector:(SEL)arg4 ;
-(void)printAction:(id)arg1 ;
-(id)createOpenLinkMenuItem:(id)arg1 ;
-(id)createCopyLinkMenuItem:(id)arg1 ;
-(id)getMovieSrcURLFromArguments:(id)arg1 ;
-(id)createViewSourceMenuItem:(id)arg1 ;
-(id)createPrintMenuItem:(id)arg1 ;
-(void)openPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)openLinkAction:(id)arg1 ;
-(unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2 ;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(void)webView:(id)arg1 setStatusText:(id)arg2 ;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 ;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(char)arg3 ;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 ;
-(void)webViewClose:(id)arg1 ;
-(unsigned long long)webView:(id)arg1 dragSourceActionMaskForPoint:(CGPoint)arg2 ;
-(void)webView:(id)arg1 willPerformDragSourceAction:(unsigned long long)arg2 fromPoint:(CGPoint)arg3 withPasteboard:(id)arg4 ;
-(id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 ;
@end
