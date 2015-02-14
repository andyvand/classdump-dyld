/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSInspectorBarItemController.h>
#import <AppKit/NSMenuDelegate.h>
#import <AppKit/NSComboBoxCellDataSource.h>

@class NSInspectorBar, NSString, NSPopUpButton, NSComboBox, NSColorWell, NSSegmentedControl;

@interface __NSInspectorBarItemController : NSObject <NSInspectorBarItemController, NSMenuDelegate, NSComboBoxCellDataSource> {

	NSInspectorBar* _inspectorBar;
	id _client;
	NSString* _lastAction;
	id _lastActionConfig;
	NSPopUpButton* stylePopup;
	NSPopUpButton* fontFamilyPopup;
	NSPopUpButton* fontFacePopup;
	NSComboBox* fontSizeComboBox;
	NSColorWell* foregroundColorWell;
	NSColorWell* backgroundColorWell;
	NSSegmentedControl* textStyleSwitches;
	NSSegmentedControl* alignmentSwitches;
	NSPopUpButton* lineSpacingPopup;
	NSPopUpButton* listPopup;
	struct {
		unsigned _interfaceLoaded : 1;
		unsigned _backgroundColor : 1;
		unsigned _multipleRanges : 1;
		unsigned _textStorage : 1;
		unsigned _typingAttributes : 1;
		unsigned _textView : 1;
		unsigned _styleInvalidated : 1;
		unsigned _userFontSectionInvalidated : 1;
		unsigned _mainFontSectionInvalidated : 1;
		unsigned _forceUpdatingTypeface : 1;
		unsigned _lineSpaceSheet : 1;
		unsigned _reserved : 21;
	}  _flags;

}

@property (assign) NSPopUpButton * stylePopup; 
@property (assign) NSPopUpButton * fontFamilyPopup; 
@property (assign) NSPopUpButton * fontFacePopup; 
@property (assign) NSComboBox * fontSizeComboBox; 
@property (assign) NSColorWell * foregroundColorWell; 
@property (assign) NSColorWell * backgroundColorWell; 
@property (assign) NSSegmentedControl * textStyleSwitches; 
@property (assign) NSSegmentedControl * alignmentSwitches; 
@property (assign) NSPopUpButton * lineSpacingPopup; 
@property (assign) NSPopUpButton * listPopup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedInspectorItemIdentifiers;
+(id)recentsFontFamilyNames;
+(id)favoriteFontSizes;
+(id)loadedNib;
+(id)keyForItemIdentifier:(id)arg1 ;
-(void)dealloc;
-(long long)numberOfItemsInComboBox:(id)arg1 ;
-(id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(id)convertAttributes:(id)arg1 ;
-(id)convertFont:(id)arg1 ;
-(NSColorWell *)backgroundColorWell;
-(double)defaultLineHeightForFont:(id)arg1 ;
-(void)_doUserParagraphStyleLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6 isFinal:(char)arg7 ;
-(id)initWithInspectorBar:(id)arg1 ;
-(void)updateSelectedAttributes;
-(id)viewForInspectorBarItem:(id)arg1 ;
-(void)_fontPopupAction:(id)arg1 ;
-(void)_updateRecentsFontSection;
-(void)_stylePopupAction:(id)arg1 ;
-(void)_invalidationNotification:(id)arg1 ;
-(void)_updateStylePopup;
-(void)_fontSizeAction:(id)arg1 ;
-(void)_colorAction:(id)arg1 ;
-(void)_fontStyleAction:(id)arg1 ;
-(void)_alignmentAction:(id)arg1 ;
-(void)_lineSpacingAction:(id)arg1 ;
-(void)_listAction:(id)arg1 ;
-(void)_updateMainFontSection;
-(void)_updateUserFontSection;
-(void)_loadNib;
-(NSPopUpButton *)stylePopup;
-(void)setStylePopup:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)fontFamilyPopup;
-(void)setFontFamilyPopup:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)fontFacePopup;
-(void)setFontFacePopup:(NSPopUpButton *)arg1 ;
-(NSComboBox *)fontSizeComboBox;
-(void)setFontSizeComboBox:(NSComboBox *)arg1 ;
-(NSColorWell *)foregroundColorWell;
-(void)setForegroundColorWell:(NSColorWell *)arg1 ;
-(void)setBackgroundColorWell:(NSColorWell *)arg1 ;
-(NSSegmentedControl *)textStyleSwitches;
-(void)setTextStyleSwitches:(NSSegmentedControl *)arg1 ;
-(NSSegmentedControl *)alignmentSwitches;
-(void)setAlignmentSwitches:(NSSegmentedControl *)arg1 ;
-(NSPopUpButton *)lineSpacingPopup;
-(void)setLineSpacingPopup:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)listPopup;
-(void)setListPopup:(NSPopUpButton *)arg1 ;
@end

