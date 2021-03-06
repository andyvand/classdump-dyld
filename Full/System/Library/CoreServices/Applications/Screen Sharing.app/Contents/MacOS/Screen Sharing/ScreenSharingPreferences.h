/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Screen Sharing.app/Contents/MacOS/Screen Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Screen Sharing/Screen Sharing-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Screen Sharing/NSToolbarDelegate.h>
#import <Screen Sharing/NSWindowDelegate.h>

@class NSMutableDictionary, NSMutableArray, SSPreferencesModule, NSString;

@interface ScreenSharingPreferences : NSWindowController <NSToolbarDelegate, NSWindowDelegate> {

	NSMutableDictionary* _preferencesModulesDict;
	NSMutableArray* _preferencesModulesKeys;
	SSPreferencesModule* _currentModule;
	NSMutableArray* _windowConstraints;

}

@property (retain) NSMutableDictionary * preferencesModulesDict;              //@synthesize preferencesModulesDict=_preferencesModulesDict - In the implementation block
@property (retain) NSMutableArray * preferencesModulesKeys;                   //@synthesize preferencesModulesKeys=_preferencesModulesKeys - In the implementation block
@property (retain) SSPreferencesModule * currentModule;                       //@synthesize currentModule=_currentModule - In the implementation block
@property (retain) NSMutableArray * windowConstraints;                        //@synthesize windowConstraints=_windowConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPreferences;
-(void)setupToolbar;
-(void)setPreferencesModulesDict:(NSMutableDictionary *)arg1 ;
-(void)setPreferencesModulesKeys:(NSMutableArray *)arg1 ;
-(void)setWindowConstraints:(NSMutableArray *)arg1 ;
-(void)addPreferencesModule:(id)arg1 ;
-(NSMutableArray *)preferencesModulesKeys;
-(void)setPreferencesModuleWithIdentifer:(id)arg1 ;
-(NSMutableDictionary *)preferencesModulesDict;
-(SSPreferencesModule *)currentModule;
-(void)setCurrentModule:(SSPreferencesModule *)arg1 ;
-(void)removeWindowConstraints;
-(void)fixupConstraints;
-(NSMutableArray *)windowConstraints;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(id)toolbarSelectableItemIdentifiers:(id)arg1 ;
-(void)awakeFromNib;
-(void)window:(id)arg1 willEncodeRestorableState:(id)arg2 ;
-(void)toolbarItemClicked:(id)arg1 ;
-(void)show;
@end

