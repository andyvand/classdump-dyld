/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PreferencePanes/PreferencePanes-Structs.h>
@class NSWindow, NSView, NSBundle, NSString;

@interface NSPreferencePane : NSObject {

	NSWindow* _window;
	NSView* _initialKeyView;
	NSView* _firstKeyView;
	NSView* _lastKeyView;
	NSView* _mainView;
	NSBundle* _bundle;
	id _reserved1;
	id _reserved2;
	id _reserved3;

}

@property (readonly) NSBundle * bundle; 
@property (readonly) NSString * mainNibName; 
@property (readonly) int shouldUnselect; 
@property (retain) NSView * mainView; 
@property (retain) NSView * initialKeyView; 
@property (retain) NSView * firstKeyView; 
@property (retain) NSView * lastKeyView; 
@property (readonly) char autoSaveTextFields; 
@property (getter=isSelected,readonly) char selected; 
-(void)willBecomeActive;
-(id)initWithBundle:(id)arg1 ;
-(void)setFirstKeyView:(NSView *)arg1 ;
-(void)setLastKeyView:(NSView *)arg1 ;
-(NSView *)firstKeyView;
-(NSView *)lastKeyView;
-(NSString *)mainNibName;
-(void)assignMainView;
-(void)mainViewDidLoad;
-(NSView *)mainView;
-(id)loadMainView;
-(int)shouldUnselect;
-(void)replyToShouldUnselect:(char)arg1 ;
-(NSView *)initialKeyView;
-(void)setInitialKeyView:(NSView *)arg1 ;
-(char)autoSaveTextFields;
-(void)updateHelpMenuWithArray:(id)arg1 ;
-(void)willUnhide;
-(void)didUnhide;
-(void)willResignActive;
-(void)didResignActive;
-(id)helpMenuItems;
-(void)helpMenuAction:(id)arg1 ;
-(void)handleOpenParameter:(const AEDesc*)arg1 ;
-(void)revealElementForKey:(id)arg1 ;
-(void)openDocumentAtPath:(id)arg1 ;
-(void)setMainView:(NSView *)arg1 ;
-(void)didChangeScreenParameters:(id)arg1 ;
-(NSBundle *)bundle;
-(void)willHide;
-(void)didSelect;
-(void)didUnselect;
-(void)willSelect;
-(void)willUnselect;
-(void)didBecomeActive;
-(void)dealloc;
-(char)isSelected;
-(void)didHide;
@end

