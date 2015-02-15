/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/MacOS/Keychain Access
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Keychain Access/Keychain Access-Structs.h>
@class NSWindow, NSImageView, NSTextField, NSTextView, NSButton, NSData, KeychainItemBasic, ACLEditor;

@interface NoteEditor : NSObject {

	NSWindow* _window;
	NSImageView* _icon;
	NSTextField* _name;
	NSTextView* _password;
	NSTextField* _created;
	NSTextField* _modified;
	NSButton* _showPassword;
	NSButton* _saveButton;
	NSButton* _aclView;
	NSData* _pw;
	long long _pwstrlen;
	KeychainItemBasic* _item;
	char _passwordChanged;
	char _passwordHasFocus;
	char _passwordEnabled;
	ACLEditor* _aclEditor;
	char _isDirty;
	long long _saveChanges;
	TISInputSourceRef _currentInputSource;

}
-(void)nowWouldBeAGoodTimeToTerminate:(id)arg1 ;
-(void)keychainLockNotification:(id)arg1 ;
-(void)forceClose;
-(void)populateAttributes;
-(void)passwordDidChange:(id)arg1 ;
-(long long)saveChangesAlert;
-(void)saveClicked:(id)arg1 ;
-(void)hideSecret;
-(void)showPasswordClicked:(id)arg1 ;
-(void)copyPasswordClicked:(id)arg1 ;
-(void)windowResignedKey:(id)arg1 ;
-(void)show:(id)arg1 ;
-(void)dealloc;
-(void)makeKeyAndOrderFront:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowWillClose:(id)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
-(void)windowDidUpdate:(id)arg1 ;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2 ;
-(id)initWithItem:(id)arg1 ;
-(void)windowBecameKey:(id)arg1 ;
-(void)setDirty:(char)arg1 ;
@end
