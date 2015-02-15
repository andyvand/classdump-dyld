/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/Active Directory.daplug/Contents/MacOS/Active Directory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTextField, NSPanel, ADSv1Panel, PluginAPIImplementor;

@interface ADSAuthenticate : NSObject {

	NSTextField* mPassword;
	NSTextField* mUsername;
	NSTextField* mComputerOU;
	NSPanel* _dialog;
	ADSv1Panel* _ADSv1Panel;
	PluginAPIImplementor* mAPIImplementor;

}
-(id)getPassword;
-(char)shouldDismiss:(int)arg1 ;
-(void)dismissDialog:(int)arg1 ;
-(void)setAPIImplementor:(id)arg1 ;
-(void)okay:(id)arg1 ;
-(void)dismiss:(int)arg1 ;
-(id)getUsername;
-(id)getComputerOU;
-(void)setComputerOU:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)runModal;
-(void)cancel:(id)arg1 ;
-(void)awakeFromNib;
@end
