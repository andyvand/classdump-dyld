/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/0xED.app/Contents/MacOS/0xED
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <0xED/0xED-Structs.h>
#import <AppKit/NSWindowController.h>

@class PreferencesGeneralView, PreferencesValueView, STPreferencesUIView, NSTabView, NSView, NSDictionary, NSString;

@interface PreferenceController : NSWindowController {

	PreferencesGeneralView* generalView;
	PreferencesValueView* valueView;
	STPreferencesUIView* uiView;
	NSTabView* tabView;
	NSView* emptyView;
	NSDictionary* tabViewIdentifiers;
	NSDictionary* tabViewSizes;
	NSString* emptyStr;
	NSString* generalStr;
	NSString* visualizerStr;
	NSString* uiStr;
	CGSize windowFat;

}
-(void)insertTabViewWithIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)awakeFromNib;
-(void)tabViewDidChangeNumberOfTabViewItems:(id)arg1 ;
-(char)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2 ;
-(void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2 ;
-(void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2 ;
@end
