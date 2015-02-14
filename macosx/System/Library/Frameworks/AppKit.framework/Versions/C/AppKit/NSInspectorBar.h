/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@protocol NSInspectorBarDelegate, NSInspectorBarClient;
@class NSArray, NSMutableDictionary, NSWindow, NSTitlebarAccessoryViewController, NSView;

@interface NSInspectorBar : NSObject <NSCoding> {

	NSArray* _items;
	NSArray* _defaultItems;
	NSArray* _defaultItemIdentifiers;
	NSMutableDictionary* _itemTable;
	id _defaultController;
	id<NSInspectorBarDelegate> _delegate;
	id<NSInspectorBarClient> _client;
	NSWindow* _documentWindow;
	NSArray* _identifiers;
	NSTitlebarAccessoryViewController* _viewController;
	SCD_Struct_NS108 _flags;
	NSView* _inspectorBarView;

}

@property (copy) NSArray * defaultItemIdentifiers;                   //@synthesize defaultItemIdentifiers=_defaultItemIdentifiers - In the implementation block
@property (readonly) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (readonly) NSWindow * window;                              //@synthesize documentWindow=_documentWindow - In the implementation block
@property (assign) id<NSInspectorBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<NSInspectorBarClient> client;                  //@synthesize client=_client - In the implementation block
@property (getter=isVisible) char visible; 
@property (assign) char showsBaselineSeparator; 
+(id)standardTextItemIdentifiers;
+(Class)standardItemControllerClass;
+(id)_sharedSpacerItem;
-(id)init;
-(void)setDelegate:(id<NSInspectorBarDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSWindow *)window;
-(id<NSInspectorBarDelegate>)delegate;
-(char)isVisible;
-(id)_startingWindowForSendAction:(SEL)arg1 ;
-(NSArray *)items;
-(void)_setWindow:(id)arg1 ;
-(void)setVisible:(char)arg1 ;
-(id<NSInspectorBarClient>)client;
-(void)setClient:(id<NSInspectorBarClient>)arg1 ;
-(id)convertAttributes:(id)arg1 ;
-(id)convertFont:(id)arg1 ;
-(void)_update;
-(char)showsBaselineSeparator;
-(void)_setIsOwnedByTextView:(char)arg1 ;
-(char)_isOwnedByTextView;
-(id)_inspectorBarView;
-(id)defaultItems;
-(void)setShowsBaselineSeparator:(char)arg1 ;
-(id)_auxiliaryViewController;
-(id)_createItemsForIdentifiers:(id)arg1 ;
-(char)_updateAuxiliaryViewControllerIfAvailable;
-(id)itemForIdentifier:(id)arg1 ;
-(void)_tile;
-(void)setDefaultItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)defaultItemIdentifiers;
@end

