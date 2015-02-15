/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <AppKit/NSController.h>
#import <OSAKit/NSBrowserDelegate.h>
#import <OSAKit/NSTableViewDelegate.h>
#import <OSAKit/NSOutlineViewDelegate.h>
#import <OSAKit/NSOutlineViewDataSource.h>
#import <OSAKit/NSSplitViewDelegate.h>

@class OSADictionaryView, NSSearchField, OSADictionaryControllerPrivate, NSString;

@interface OSADictionaryController : NSController <NSBrowserDelegate, NSTableViewDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource, NSSplitViewDelegate> {

	OSADictionaryView* dictionaryView;
	NSSearchField* searchField;
	OSADictionaryControllerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSSearchField * searchField; 
-(NSSearchField *)searchField;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)goBack:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(id)dictionaryView;
-(id)definitionsController;
-(void)setDefinitionsController:(id)arg1 ;
-(id)makeDataSourceFromDictionary:(id)arg1 ;
-(void)setDictionaryHistory:(id)arg1 ;
-(id)dictionaryHistory;
-(void)updateContentView;
-(void)setDictionaryView:(id)arg1 ;
-(char)selectingObjects;
-(void)setSelectingObjects:(char)arg1 ;
-(void)selectOutlineItemsForObjects:(id)arg1 ;
-(id)dataSourceItemWithDefinition:(id)arg1 inItems:(id)arg2 ;
-(id)definitionForAnchor:(id)arg1 inItems:(id)arg2 ;
-(id)parentItemOfDataSourceItem:(id)arg1 inItems:(id)arg2 ;
-(id)parentItemOfDataSourceItem:(id)arg1 ;
-(id)dataSourceItemWithDefinition:(id)arg1 ;
-(id)itemsToExpandForItem:(id)arg1 ;
-(void)expandOutlineItemsForObjects:(id)arg1 ;
-(void)selectDefinitionsInContentView:(id)arg1 ;
-(id)selectedDefinitions;
-(id)definitionForAnchor:(id)arg1 ;
-(void)changeSelection:(id)arg1 ;
-(void)makeTextLarger:(id)arg1 ;
-(void)makeTextSmaller:(id)arg1 ;
-(void)goForward:(id)arg1 ;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionary;
-(void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 ;
-(long long)browser:(id)arg1 numberOfRowsInColumn:(long long)arg2 ;
-(void)setDataSource:(id)arg1 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(id)dataSource;
-(id)initWithDictionary:(id)arg1 ;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(char)canGoBack;
-(char)canGoForward;
-(void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(id)viewState;
-(void)setViewState:(id)arg1 ;
-(char)webView:(id)arg1 validateUserInterfaceItem:(id)arg2 defaultValidation:(char)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
@end
