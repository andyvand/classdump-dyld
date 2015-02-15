/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BrowserWindowControllerMac, BrowserTabPersistentState;

@interface ClosedTabStateHolder : NSObject {

	BrowserWindowControllerMac* _browserWindowController;
	BrowserTabPersistentState* _lastClosedTabState;

}
-(id)initWithBrowserWindowController:(id)arg1 ;
-(void)_closeTabWithoutConfirming:(id)arg1 ;
-(void)setLastClosedTabState:(id)arg1 ;
-(void)_undoCloseTabAtIndex:(unsigned long long)arg1 andSelect:(char)arg2 ;
-(id)lastClosedTabState;
-(void)clearLastClosedTabState;
@end

