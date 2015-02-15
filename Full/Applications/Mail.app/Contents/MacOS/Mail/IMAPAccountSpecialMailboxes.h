/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/RemoteStoreAccountSpecialMailboxes.h>

@class NSButton;

@interface IMAPAccountSpecialMailboxes : RemoteStoreAccountSpecialMailboxes {

	char _moveDeletedMessagesToTrash;
	NSButton* _trashCheckbox;

}

@property (assign,nonatomic) char moveDeletedMessagesToTrash;              //@synthesize moveDeletedMessagesToTrash=_moveDeletedMessagesToTrash - In the implementation block
@property (assign,nonatomic,__weak) NSButton * trashCheckbox;              //@synthesize trashCheckbox=_trashCheckbox - In the implementation block
-(char)setupAccountFromValuesInUI:(id)arg1 ;
-(char)isAccountInformationDirty:(id)arg1 ;
-(void)setupUIFromValuesInAccount:(id)arg1 ;
-(NSButton *)trashCheckbox;
-(void)setTrashCheckbox:(NSButton *)arg1 ;
-(char)moveDeletedMessagesToTrash;
-(void)setMoveDeletedMessagesToTrash:(char)arg1 ;
-(void)setUIElementsEnabled:(char)arg1 ;
-(id)init;
@end
