/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:26:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABUserInterfaceAction.h>

@protocol ABImporterDelegate, ABRestoreBackupService;
@class NSPopUpButton, NSString;

@interface ABImportUIAction : NSObject <ABUserInterfaceAction> {

	id<ABImporterDelegate> _importerDelegate;
	id<ABRestoreBackupService> _restoreBackupService;
	NSPopUpButton* _encodingPopUp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)importWithDelegate:(id)arg1 ;
-(void)openPanelDidEnd:(id)arg1 returnCode:(long long)arg2 delegate:(id)arg3 ;
-(void)_importFile:(id)arg1 delegate:(id)arg2 ;
-(id)initWithImporterDelegate:(id)arg1 restoreBackupService:(id)arg2 ;
-(char)validateWithMenuItem:(id)arg1 ;
-(void)performWithSender:(id)arg1 ;
-(void)dealloc;
@end
