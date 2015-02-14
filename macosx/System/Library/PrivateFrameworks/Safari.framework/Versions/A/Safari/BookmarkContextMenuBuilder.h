/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BookmarkContextMenuBuilder : NSObject {

	char _isFolder;
	char _usesPrivateBrowsing;
	char _shouldAutomaticallyOpenInTabs;
	char _canOpenInTabs;
	/*^block*/id _openHandler;
	/*^block*/id _openInTabsHandler;
	/*^block*/id _openInNewTabHandler;
	/*^block*/id _openInNewWindowHandler;
	/*^block*/id _renameHandler;
	/*^block*/id _editAddressHandler;
	/*^block*/id _automaticallyOpenInTabsHandler;
	/*^block*/id _showInCollectionsHandler;
	/*^block*/id _copyHandler;
	/*^block*/id _deleteHandler;
	/*^block*/id _createFolderHandler;

}

@property (assign,nonatomic) char isFolder;                                   //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,nonatomic) char usesPrivateBrowsing;                        //@synthesize usesPrivateBrowsing=_usesPrivateBrowsing - In the implementation block
@property (assign,nonatomic) char shouldAutomaticallyOpenInTabs;              //@synthesize shouldAutomaticallyOpenInTabs=_shouldAutomaticallyOpenInTabs - In the implementation block
@property (assign,nonatomic) char canOpenInTabs;                              //@synthesize canOpenInTabs=_canOpenInTabs - In the implementation block
@property (nonatomic,copy) id openHandler;                                    //@synthesize openHandler=_openHandler - In the implementation block
@property (nonatomic,copy) id openInTabsHandler;                              //@synthesize openInTabsHandler=_openInTabsHandler - In the implementation block
@property (nonatomic,copy) id openInNewTabHandler;                            //@synthesize openInNewTabHandler=_openInNewTabHandler - In the implementation block
@property (nonatomic,copy) id openInNewWindowHandler;                         //@synthesize openInNewWindowHandler=_openInNewWindowHandler - In the implementation block
@property (nonatomic,copy) id renameHandler;                                  //@synthesize renameHandler=_renameHandler - In the implementation block
@property (nonatomic,copy) id editAddressHandler;                             //@synthesize editAddressHandler=_editAddressHandler - In the implementation block
@property (nonatomic,copy) id automaticallyOpenInTabsHandler;                 //@synthesize automaticallyOpenInTabsHandler=_automaticallyOpenInTabsHandler - In the implementation block
@property (nonatomic,copy) id showInCollectionsHandler;                       //@synthesize showInCollectionsHandler=_showInCollectionsHandler - In the implementation block
@property (nonatomic,copy) id copyHandler;                                    //@synthesize copyHandler=_copyHandler - In the implementation block
@property (nonatomic,copy) id deleteHandler;                                  //@synthesize deleteHandler=_deleteHandler - In the implementation block
@property (nonatomic,copy) id createFolderHandler;                            //@synthesize createFolderHandler=_createFolderHandler - In the implementation block
-(char)usesPrivateBrowsing;
-(id)_openInNewTabMenuItem;
-(id)_openInNewWindowMenuItem;
-(void)_appendOpenInNewTabMenuItemToMenu:(id)arg1 ;
-(void)_appendOpenInNewWindowMenuItemToMenu:(id)arg1 ;
-(void)_appendSeparatorIfPossibleToMenu:(id)arg1 ;
-(id)_renameMenuItem;
-(id)_deleteMenuItem;
-(id)buildBookmarkMenu;
-(char)isFolder;
-(void)setIsFolder:(char)arg1 ;
-(void)setUsesPrivateBrowsing:(char)arg1 ;
-(char)shouldAutomaticallyOpenInTabs;
-(void)setShouldAutomaticallyOpenInTabs:(char)arg1 ;
-(char)canOpenInTabs;
-(void)setCanOpenInTabs:(char)arg1 ;
-(id)openHandler;
-(void)setOpenHandler:(id)arg1 ;
-(id)openInTabsHandler;
-(void)setOpenInTabsHandler:(id)arg1 ;
-(id)openInNewTabHandler;
-(void)setOpenInNewTabHandler:(id)arg1 ;
-(id)openInNewWindowHandler;
-(void)setOpenInNewWindowHandler:(id)arg1 ;
-(id)renameHandler;
-(void)setRenameHandler:(id)arg1 ;
-(id)editAddressHandler;
-(void)setEditAddressHandler:(id)arg1 ;
-(id)automaticallyOpenInTabsHandler;
-(void)setAutomaticallyOpenInTabsHandler:(id)arg1 ;
-(id)showInCollectionsHandler;
-(void)setShowInCollectionsHandler:(id)arg1 ;
-(id)copyHandler;
-(void)setCopyHandler:(id)arg1 ;
-(id)deleteHandler;
-(void)setDeleteHandler:(id)arg1 ;
-(id)createFolderHandler;
-(void)setCreateFolderHandler:(id)arg1 ;
@end

