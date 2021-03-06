/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSDocumentController.h>
#import <Safari/NSUserInterfaceValidations.h>

@interface BrowserDocumentController : NSDocumentController <NSUserInterfaceValidations>
+(id)sharedDocumentController;
-(id)openEmptyBrowserDocument;
-(BrowserContentViewController*)goToCloudTab:(id)arg1 tabLabel:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 ;
-(BrowserContentViewController*)goToURL:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const TabPlacementHint*)arg3 ;
-(BrowserContentViewController*)goToURLFromExternalApplication:(id)arg1 forcingHTMLMIMEType:(char)arg2 ;
-(BrowserContentViewController*)goToURL:(id)arg1 windowPolicy:(long long)arg2 ;
-(id)orderedBrowserDocuments;
-(id)frontmostBrowserDocument;
-(id)frontmostBrowserDocumentAllowingAttachedSheets:(char)arg1 ;
-(id)frontmostBrowserDocumentPassingTest:(/*^block*/id)arg1 ;
-(id)findOrCreateFrontmostBrowserDocument;
-(void)createPrivateBrowsingDocument:(id)arg1 ;
-(void)toggleBookmarksEditView:(id)arg1 ;
-(void)goHome:(id)arg1 ;
-(void)openLocation:(id)arg1 ;
-(char)canGoHome;
-(void)searchWeb:(id)arg1 ;
-(void)showTopSitesWall:(id)arg1 ;
-(char)_canShowStartPage;
-(void)showFavorites:(id)arg1 ;
-(char)_canShowUnifiedField;
-(id)_frontmostBrowserDocumentIfAvailableUsingWindowPolicy:(long long)arg1 ;
-(id)_goToEachRequest:(id)arg1 tabLabels:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 forSearch:(char)arg5 canceled:(BOOL*)arg6 ;
-(id)_openDocumentWithContentsOfRequest:(id)arg1 behind:(char)arg2 display:(char)arg3 usePrivateBrowsing:(char)arg4 ;
-(id)_createEmptyBrowserDocumentAndDisplay:(char)arg1 behind:(char)arg2 loadWindow:(char)arg3 suppressSidebar:(char)arg4 isPopupWindow:(char)arg5 privateBrowsingSession:(const Session*)arg6 ;
-(id)activateFrontmostBrowserDocumentIfAvailable;
-(BrowserContentViewController*)_goToRequest:(id)arg1 tabLabel:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 forSearch:(char)arg5 canceled:(BOOL*)arg6 ;
-(BrowserContentViewController*)goToRequest:(id)arg1 tabLabel:(id)arg2 windowPolicy:(long long)arg3 tabPlacementHint:(const TabPlacementHint*)arg4 ;
-(BrowserContentViewController*)goToURL:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const TabPlacementHint*)arg3 forSearch:(char)arg4 canceled:(BOOL*)arg5 ;
-(void)newTab:(id)arg1 ;
-(id)createHiddenEmptyBrowserDocument;
-(void)showStartPage:(id)arg1 ;
-(char)_browserDocumentIsAvailable:(id)arg1 usingWindowPolicy:(long long)arg2 ;
-(id)_URLToVisitFromURL:(id)arg1 ;
-(BrowserContentViewController*)createTabUsingWindowController:(id)arg1 tabPlacementHint:(const TabPlacementHint*)arg2 windowPolicy:(long long)arg3 tryToCreateActive:(char)arg4 ;
-(id)_URLFromShortcutFile:(id)arg1 ;
-(char)anyInactiveTabs;
-(id)createHiddenEmptyBrowserDocumentSuppressingSidebar:(char)arg1 isPopupWindow:(char)arg2 ;
-(id)createHiddenEmptyBrowserDocumentWithPrivateBrowsingSession:(const Session*)arg1 suppressSidebar:(char)arg2 isPopupWindow:(char)arg3 ;
-(id)createHiddenEmptyBrowserDocumentWithoutLoadingWindowUsingPrivateBrowsing:(char)arg1 ;
-(void)setOriginatingPageForNewDocuments:(const Page*)arg1 ;
-(const Page*)originatingPageForNewDocuments;
-(void)tryMultipleURLs:(unique_ptr<WTF::Deque<NSURL *, 0>, std::__1::default_delete<WTF::Deque<NSURL *, 0> > >*)arg1 windowPolicy:(long long)arg2 ;
-(void)openDocument:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(id)typeForContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maximumRecentDocumentCount;
-(id)_openableFileExtensions;
-(id)openDocumentWithContentsOfURL:(id)arg1 display:(char)arg2 ;
@end

