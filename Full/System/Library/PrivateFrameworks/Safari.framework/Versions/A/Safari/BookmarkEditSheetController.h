/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Safari/NSWindowDelegate.h>

@class NSPopUpButton, NSTextField, WebBookmark, NSString;

@interface BookmarkEditSheetController : NSWindowController <NSWindowDelegate> {

	NSPopUpButton* locationPopUp;
	NSTextField* promptField;
	NSTextField* titleField;
	String* _bookmarkUUID;
	char _titleOnly;
	char _inModalDelegateCallback;
	char _restrictedToBookmarksBar;
	WebBookmark* _bookmark;
	NSString* _suggestedTitle;

}

@property (nonatomic,readonly) WebBookmark * bookmark;                                                       //@synthesize bookmark=_bookmark - In the implementation block
@property (getter=isRestrictedToBookmarksBar,nonatomic,readonly) char restrictedToBookmarksBar;              //@synthesize restrictedToBookmarksBar=_restrictedToBookmarksBar - In the implementation block
@property (nonatomic,readonly) NSString * suggestedTitle;                                                    //@synthesize suggestedTitle=_suggestedTitle - In the implementation block
@property (nonatomic,readonly) char shouldAddBookmarkToTopSites; 
@property (nonatomic,readonly) WebBookmark * bookmarkParent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_suggestedTitleForBookmark:(id)arg1 ;
+(void)beginBookmarkEditSheetWithBookmark:(id)arg1 restrictedToBookmarksBar:(char)arg2 titleOnly:(char)arg3 modalForWindow:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(WebBookmark *)bookmark;
-(id)_initWithBookmark:(id)arg1 restrictedToBookmarksBar:(char)arg2 titleOnly:(char)arg3 ;
-(void)_sheetDidEnd;
-(void)_populateLocationPopUp;
-(void)_startObservingBookmarkChanges;
-(WebBookmark *)bookmarkParent;
-(char)shouldAddBookmarkToTopSites;
-(void)_stopObservingBookmarkChanges;
-(void)cancelNewBookmark:(id)arg1 ;
-(char)isRestrictedToBookmarksBar;
-(long long)_menuIndexForPreviouslyChosenLocation;
-(void)_bookmarksChanged:(id)arg1 ;
-(void)acceptNewBookmark:(id)arg1 ;
-(NSString *)suggestedTitle;
-(id)init;
-(id)windowNibName;
-(void)windowDidLoad;
@end

