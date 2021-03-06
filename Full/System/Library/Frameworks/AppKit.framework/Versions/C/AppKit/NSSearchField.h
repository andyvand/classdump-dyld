/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextField.h>

@class NSArray, NSString, NSMenu;

@interface NSSearchField : NSTextField {

	struct {
		unsigned _inTransition : 1;
		unsigned _reselecting : 1;
		unsigned _reserved : 30;
	}  _sfFlags;
	unsigned _reserved2;
	unsigned _reserved3;
	unsigned _reserved4;

}

@property (copy) NSArray * recentSearches; 
@property (copy) NSString * recentsAutosaveName; 
@property (retain) NSMenu * searchMenuTemplate; 
@property (assign) char sendsWholeSearchString; 
@property (assign) long long maximumRecents; 
@property (assign) char sendsSearchStringImmediately; 
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(char)_shouldDoLayerPerformanceUpdates;
-(void)textDidEndEditing:(id)arg1 ;
-(void)selectText:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_windowDidOrderOffScreen;
-(id)fontSmoothingBackgroundColor;
-(void)setRecentSearches:(NSArray *)arg1 ;
-(NSArray *)recentSearches;
-(void)setRecentsAutosaveName:(NSString *)arg1 ;
-(NSString *)recentsAutosaveName;
-(void)setSendsWholeSearchString:(char)arg1 ;
-(char)sendsWholeSearchString;
-(void)setMaximumRecents:(long long)arg1 ;
-(long long)maximumRecents;
-(char)sendsSearchStringImmediately;
-(void)setSendsSearchStringImmediately:(char)arg1 ;
-(void)setSearchMenuTemplate:(NSMenu *)arg1 ;
-(NSMenu *)searchMenuTemplate;
-(id)_keyEventCache;
-(void)_transitionForFirstResponder:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)searchFieldCell:(id)arg1 shouldChangeCancelButtonVisibility:(char)arg2 ;
-(id)ns_widgetType;
@end

