/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/NIS.daplug/Contents/MacOS/NIS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPanel, NSWindow;

@interface NISModalDialog : NSObject {

	NSPanel* _dialog;
	NSWindow* _owner;

}
-(void)runModalRelativeToWindow:(id)arg1 ;
-(void)dismiss:(int)arg1 ;
-(void)dismissDialog:(int)arg1 ;
-(void)initValues;
-(char)shouldDismiss:(int)arg1 ;
-(void)runModalRelativeToView:(id)arg1 ;
-(void)dismissButtonPressed:(id)arg1 ;
-(int)runModal;
-(void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
@end

