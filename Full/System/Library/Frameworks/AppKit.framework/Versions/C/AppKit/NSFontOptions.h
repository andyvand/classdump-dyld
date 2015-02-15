/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSDictionary, NSString, NSWindow, NSTextView;

@interface NSFontOptions : NSObject {

	id panel;
	id fontField;
	id fontColorWell;
	id backgroundColorWell;
	id favoritesPullDown;
	id kerningButton;
	id kerningSlider;
	id expansionButton;
	id expansionSlider;
	id baselineButton;
	id baselineSlider;
	id obliquenessButton;
	id obliquenessSlider;
	id shadowButton;
	id shadowHeightSlider;
	id shadowWidthSlider;
	id shadowBlurRadiusSlider;
	id strokeMatrix;
	id strokeColorWell;
	id strokeSlider;
	id underlineMatrix;
	id underlineColorWell;
	id underlineTypeButton;
	id underlineStylePopUp;
	id strikethroughMatrix;
	id strikethroughColorWell;
	id strikethroughTypeButton;
	id strikethroughStylePopUp;
	id optionsPanel;
	id optionsMatrix;
	id optionsButtons;
	id optionsPopUp;
	id optionsPreviewField;
	id optionsAttributesField;
	id optionsAddRemoveButton;
	id colorOptionsPanel;
	id colorOptionsFontColorWell;
	id colorOptionsBackgroundColorWell;
	id colorOptionsStrokeColorWell;
	id colorOptionsUnderlineColorWell;
	id colorOptionsStrikethroughColorWell;
	id colorOptionsStrokeMatrix;
	id colorOptionsStrokeSlider;
	id addFavoritePanel;
	id favoriteNameField;
	id includeFontButton;
	id includeRulerButton;
	id confirmAddFavoriteButton;
	id selectButton;
	id replaceFavoritePanel;
	id removeFavoritePanel;
	id removeFavoritePopUp;
	id selectPanel;
	id selectByFontFamilyButton;
	id selectByFontButton;
	id selectByCharStyleButton;
	id selectByParStyleButton;
	id selectWithinSelectionMatrix;
	NSMutableDictionary* _attributesToAdd;
	NSMutableArray* _attributesToRemove;
	NSMutableDictionary* _favoriteStyles;
	NSDictionary* _standardFavoriteStyles;
	NSMutableDictionary* _selectedAttributes;
	NSDictionary* _optionsAttributes;
	NSDictionary* _attributesForNewFavorite;
	NSString* _stringForOptions;
	NSString* _optionsAddTitle;
	NSString* _optionsRemoveTitle;
	SCD_Struct_NS19 _flags;
	NSWindow* _windowForSheets;
	NSWindow* _windowForOptions;
	NSTextView* _textViewForOptions;
	NSRange _rangeForOptions;
	NSWindow* _windowForColorOptions;
	CGRect _previewRect;

}
+(id)sharedFontOptions;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)controlTextDidChange:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(id)convertAttributes:(id)arg1 ;
-(void)setSelectedAttributes:(id)arg1 isMultiple:(char)arg2 ;
-(void)orderFrontStylesPanel:(id)arg1 ;
-(char)getStylesPanelTextView:(id*)arg1 window:(id*)arg2 ;
-(void)orderFrontFontPanel:(id)arg1 ;
-(void)orderFrontFontOptionsPanel:(id)arg1 ;
-(void)updateFavoritesFromDefaults;
-(void)enableAll:(char)arg1 ;
-(id)displayStringsForAttributes:(id)arg1 includeBoldItalic:(char)arg2 ;
-(id)displayStringsForParagraphStyle:(id)arg1 ;
-(id)favoriteAttributesNames;
-(void)loadUI;
-(void)updateColorOptionsUI;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)updateUI;
-(void)updateFavoritesUI;
-(void)orderFrontStylesPanelInWindow:(id)arg1 textView:(id)arg2 ;
-(void)changeOptionsPanelSettings:(id)arg1 ;
-(void)updateOptionsUI;
-(void)addFavoriteInWindow:(id)arg1 ;
-(void)removeFavoriteInWindow:(id)arg1 ;
-(id)favoriteAttributesForName:(id)arg1 ;
-(id)selectedAttributes;
-(id)stringForRange:(NSRange)arg1 ;
-(void)setOptionsAttributes:(id)arg1 string:(id)arg2 ;
-(void)selectDefaultRange;
-(void)selectFarthestRangeForward:(char)arg1 ;
-(void)selectNextRangeForward:(char)arg1 ;
-(void)saveFavoritesToDefaults;
-(void)addFavorite;
-(void)selectAllInView:(id)arg1 selectionOnly:(char)arg2 fontFamily:(char)arg3 font:(char)arg4 characterStyle:(char)arg5 paragraphStyle:(char)arg6 ;
-(id)optionsAttributes;
-(id)storedAttributes;
-(void)orderFrontColorOptionsPanelInWindow:(id)arg1 ;
-(char)textView:(id)arg1 shouldSetColor:(id)arg2 ;
-(void)modifyOptionsViaPanel:(id)arg1 ;
-(void)confirmSheet:(id)arg1 ;
-(void)cancelSheet:(id)arg1 ;
@end

