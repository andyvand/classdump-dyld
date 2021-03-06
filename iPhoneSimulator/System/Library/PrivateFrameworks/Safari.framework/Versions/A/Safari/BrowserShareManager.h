/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSSharingServiceDelegate.h>
#import <Safari/NSSharingServicePickerDelegate.h>
#import <Safari/NSMenuDelegate.h>

@class NSSharingServicePicker, NSWindow, NSImage, NSMenu, NSString;

@interface BrowserShareManager : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate, NSMenuDelegate> {

	HashMap<unsigned long long, WTF::RetainPtr<BrowserSharingOperation>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<BrowserSharingOperation> > >* _browserSharingOperationMap;
	char _showingContextMenu;
	NSSharingServicePicker* _sharingServicePicker;
	NSSharingServicePicker* _sharingServicePickerForShareSubmenuInFileMenu;
	NSSharingServicePicker* _sharingServicePickerForShareSubmenuInToolbarOverflowMenu;
	NSWindow* _sourceWindow;
	/*^block*/id _performWithItemsBlock;
	NSImage* _transitionImage;
	NSMenu* _shareSubmenuInFileMenu;
	NSMenu* _shareSubmenuInToolbarOverflowMenu;
	CGRect _sourceRectOnScreenForShareItem;

}

@property (nonatomic,retain) NSSharingServicePicker * sharingServicePicker;                                                  //@synthesize sharingServicePicker=_sharingServicePicker - In the implementation block
@property (nonatomic,retain) NSSharingServicePicker * sharingServicePickerForShareSubmenuInFileMenu;                         //@synthesize sharingServicePickerForShareSubmenuInFileMenu=_sharingServicePickerForShareSubmenuInFileMenu - In the implementation block
@property (nonatomic,retain) NSSharingServicePicker * sharingServicePickerForShareSubmenuInToolbarOverflowMenu;              //@synthesize sharingServicePickerForShareSubmenuInToolbarOverflowMenu=_sharingServicePickerForShareSubmenuInToolbarOverflowMenu - In the implementation block
@property (nonatomic,retain) NSWindow * sourceWindow;                                                                        //@synthesize sourceWindow=_sourceWindow - In the implementation block
@property (nonatomic,copy) id performWithItemsBlock;                                                                         //@synthesize performWithItemsBlock=_performWithItemsBlock - In the implementation block
@property (assign,nonatomic) char showingContextMenu;                                                                        //@synthesize showingContextMenu=_showingContextMenu - In the implementation block
@property (assign,nonatomic) CGRect sourceRectOnScreenForShareItem;                                                          //@synthesize sourceRectOnScreenForShareItem=_sourceRectOnScreenForShareItem - In the implementation block
@property (nonatomic,retain) NSImage * transitionImage;                                                                      //@synthesize transitionImage=_transitionImage - In the implementation block
@property (nonatomic,retain) NSMenu * shareSubmenuInFileMenu;                                                                //@synthesize shareSubmenuInFileMenu=_shareSubmenuInFileMenu - In the implementation block
@property (nonatomic,retain) NSMenu * shareSubmenuInToolbarOverflowMenu;                                                     //@synthesize shareSubmenuInToolbarOverflowMenu=_shareSubmenuInToolbarOverflowMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLinksSubscriptionsConfirmationAlertForURL:(id)arg1 ;
+(id)sharedManager;
-(void)initializeShareSubmenuInFileMenu:(id)arg1 ;
-(void)browserContentViewControllerWillClose:(BrowserContentViewController*)arg1 ;
-(void)didCreateVisibleContentsSnapshotForSharingWithID:(unsigned long long)arg1 image:(id)arg2 ;
-(void)performSharingService:(id)arg1 withItems:(id)arg2 window:(id)arg3 defaultSubject:(id)arg4 ;
-(void)showSharingServicePickerForURL:(id)arg1 window:(id)arg2 atBottomOfView:(id)arg3 performWithItemsHandler:(/*^block*/id)arg4 ;
-(void)didRunJavaScriptForSharingExtensionWithID:(unsigned long long)arg1 results:(id)arg2 ;
-(void)setShareSubmenuInFileMenu:(NSMenu *)arg1 ;
-(void)setShareSubmenuInToolbarOverflowMenu:(NSMenu *)arg1 ;
-(void)setSourceWindow:(NSWindow *)arg1 ;
-(void)setPerformWithItemsBlock:(id)arg1 ;
-(void)setShowingContextMenu:(char)arg1 ;
-(void)setTransitionImage:(NSImage *)arg1 ;
-(void)_performSharingService:(id)arg1 withItems:(id)arg2 window:(id)arg3 serviceParameters:(id)arg4 shouldRunJavaScriptIfAvailable:(char)arg5 ;
-(BrowserContentViewController*)_currentBrowserContentViewController;
-(unsigned long long)_addBrowserSharingOperation:(id)arg1 ;
-(char)_runJavaScriptForSharingService:(id)arg1 items:(id)arg2 serviceParameters:(id)arg3 ;
-(id)_transitionImageFromSourceWindow;
-(id)_itemsForSharingService:(id)arg1 defaultSubject:(id)arg2 proposedItems:(id)arg3 ;
-(void)performSharingService:(id)arg1 withItems:(id)arg2 window:(id)arg3 serviceParameters:(id)arg4 ;
-(id)_currentTabContentView;
-(id)_browserDocument;
-(BrowserContentViewController*)_contentViewControllerForShareMenu;
-(id)_sharingServiceFromShareKitMenuItem:(id)arg1 ;
-(void)_shareMenuItemSelected:(id)arg1 ;
-(id)_urlForShareMenu;
-(void)_mailPageMailingLinkByDefault:(char)arg1 ;
-(id)_sharingServicesForSharingServicePickerForItems:(id)arg1 proposedSharingServices:(id)arg2 isForRecentsSection:(char)arg3 ;
-(id)_sharingServicesForShareSubmenuInFileMenuForItems:(id)arg1 proposedSharingServices:(id)arg2 isForRecentsSection:(char)arg3 ;
-(id)_sharingServicesForShareSubmenuInToolbarOverflowMenuForItems:(id)arg1 proposedSharingServices:(id)arg2 isForRecentsSection:(char)arg3 ;
-(id)_subscribeGlyph;
-(id)_titleForSharingService:(id)arg1 ;
-(void)_performFromSharingServicePicker:(id)arg1 withItems:(id)arg2 ;
-(void)_addUnifiedFieldURLToReadingList;
-(id)_addToBookmarksGlyph;
-(void)_addBookmarkForUnifiedFieldURL;
-(id)_createAddFeedToSharedLinksServiceWithItems:(id)arg1 ;
-(id)_emailThisPageMenuItemKeyEquivalent;
-(id)_emailLinkToThisPageMenuItemKeyEquivalent;
-(id)_sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3 isForRecentsSection:(char)arg4 ;
-(void)_didFinishUsingSharingService:(id)arg1 ;
-(void)_convertShareKitMenuItemToShareMenuItem:(id)arg1 ;
-(void)_mailPageFromShareMenuKeyEquivalent:(id)arg1 ;
-(void)_mailLinkFromShareMenuKeyEquivalent:(id)arg1 ;
-(void)initializeShareSubmenuInToolbarOverflowMenu:(id)arg1 ;
-(id)emailServiceParametersDictionaryForService:(id)arg1 uuid:(id)arg2 pageTitle:(id)arg3 emailURLByDefault:(char)arg4 isWebArchiveAvailable:(char)arg5 isReaderAvailable:(char)arg6 isShowingReader:(char)arg7 ;
-(id)sharingServicePicker:(id)arg1 recentSharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3 ;
-(NSSharingServicePicker *)sharingServicePicker;
-(void)setSharingServicePicker:(NSSharingServicePicker *)arg1 ;
-(NSSharingServicePicker *)sharingServicePickerForShareSubmenuInFileMenu;
-(void)setSharingServicePickerForShareSubmenuInFileMenu:(NSSharingServicePicker *)arg1 ;
-(NSSharingServicePicker *)sharingServicePickerForShareSubmenuInToolbarOverflowMenu;
-(void)setSharingServicePickerForShareSubmenuInToolbarOverflowMenu:(NSSharingServicePicker *)arg1 ;
-(NSWindow *)sourceWindow;
-(id)performWithItemsBlock;
-(char)showingContextMenu;
-(CGRect)sourceRectOnScreenForShareItem;
-(void)setSourceRectOnScreenForShareItem:(CGRect)arg1 ;
-(NSImage *)transitionImage;
-(NSMenu *)shareSubmenuInFileMenu;
-(NSMenu *)shareSubmenuInToolbarOverflowMenu;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(char)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id*)arg3 action:(SEL*)arg4 ;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3 ;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 ;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3 ;
-(id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2 ;
@end

