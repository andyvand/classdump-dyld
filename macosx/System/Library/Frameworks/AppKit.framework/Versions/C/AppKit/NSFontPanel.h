/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class NSFontManager, NSArray, NSView;

@interface NSFontPanel : NSPanel {

	NSFontManager* _manager;
	NSArray* _collectionNames;
	id _selection;
	void* _carbonNotification;
	id _targetObject;
	id _familyList;
	id _faceList;
	id _sizeList;
	id _mainCollectionList;
	id _sizeField;
	id _sizeSlider;
	id _sizeSliderBox;
	id _preview;
	id _previewContainer;
	id _mainSplitView;
	id _mmCollectionList;
	id _mmFamilyList;
	id _mmFaceList;
	id _mmSizeList;
	id _fullSizeHeightConstraint;
	id _searchField;
	id _fixedListButton;
	id _sliderButton;
	id _accessoryView;
	struct {
		unsigned setFontChange : 1;
		unsigned setFontAttributeChange : 1;
		unsigned _delRespFamily : 1;
		unsigned _delRespFace : 1;
		unsigned _delRespSize : 1;
		unsigned _delRespColl : 1;
		unsigned _collectionDisabled : 1;
		unsigned _sizeDisabled : 1;
		unsigned _faceDisabled : 1;
		unsigned showEffects : 1;
		unsigned _uiMode : 8;
		unsigned _miniMode : 1;
		unsigned _reserved : 13;
	}  _fpFlags;
	id _regularModeBox;
	id _miniModeBox;
	id _sizeBox;
	id _collectionLabel;
	id _sizeLabel;
	id _faceDivider;
	id _familyLabel;
	id _sizeStyleButton;
	id _newSizeField;
	id _editSizeList;
	id _editSizeListBox;
	id _editSizeSliderBox;
	id _editSizeSliderMaxField;
	id _editSizeSliderMinField;
	id _sizeEditWindow;
	id _availableSizes;
	id _addCollectionButton;
	id _removeCollectionButton;
	double _fontPanelPreviewHeight;
	id _typographyPanel;
	id _actionButton;
	id _fontEffectsBox;
	int _sizeStyle;

}

@property (retain) NSView * accessoryView; 
@property (assign) char worksWhenModal; 
@property (getter=isEnabled) char enabled; 
+(id)sharedFontPanel;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_createFontPanelSizeRep;
+(char)sharedFontPanelExists;
-(oneway void)release;
-(void)setDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(id)_currentFont;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSView *)accessoryView;
-(char)worksWhenModal;
-(void)setSize:(id)arg1 ;
-(id)effectiveAppearance;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)setAppearance:(id)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)setWorksWhenModal:(char)arg1 ;
-(CGSize)windowWillResize:(id)arg1 toSize:(CGSize)arg2 ;
-(long long)numberOfItemsInComboBox:(id)arg1 ;
-(id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2 ;
-(unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2 ;
-(void)windowDidUpdate:(id)arg1 ;
-(void)_updateFontPreview;
-(void*)_carbonNotification;
-(id)convertAttributes:(id)arg1 ;
-(void)_setAttributes:(id)arg1 isMultiple:(char)arg2 ;
-(void)setPanelFont:(id)arg1 isMultiple:(char)arg2 ;
-(id)_typographyPanel;
-(id)panelConvertFont:(id)arg1 ;
-(void)_sortCollections;
-(unsigned long long)draggingSourceOperationMaskForTableView:(id)arg1 ;
-(char)removeItemForTableView:(id)arg1 pasteboard:(id)arg2 operation:(unsigned long long)arg3 ;
-(CGRect)tableView:(id)arg1 frameOfCellAtColumn:(long long)arg2 row:(long long)arg3 originalFrame:(CGRect)arg4 ;
-(id)_currentCollectionName;
-(void)_chooseFamily:(id)arg1 ;
-(void)_chooseFace:(id)arg1 ;
-(void)_chooseCollection:(id)arg1 ;
-(void)_chooseSizeFromList:(id)arg1 ;
-(void)_chooseSizeFromField:(id)arg1 ;
-(void)_chooseSizeFromSlider:(id)arg1 ;
-(void)_changeSizeStyle:(id)arg1 ;
-(void)_togglePreview:(char)arg1 animated:(char)arg2 ;
-(id)_createFontPanelSizeRep;
-(void)_setup;
-(void)_validateExtrasButton:(id)arg1 ;
-(void)_searchChanged:(id)arg1 ;
-(void)_collectionsChanged:(id)arg1 ;
-(void)_sizeListChanged:(id)arg1 ;
-(char)_inMiniMode;
-(void)_populatePopup:(id)arg1 withTableView:(id)arg2 ;
-(void)_reflectFont;
-(char)_canShowEffects;
-(id)_fontAttributes;
-(void)_setRecents:(id)arg1 ;
-(id)_currentFamilyName;
-(id)_selectedSize;
-(void)_populateMiniMode;
-(void)_validateSizes:(long long)arg1 ;
-(void)_validateFaces:(long long)arg1 ;
-(void)_toggleCollections:(long long)arg1 animate:(char)arg2 ;
-(char)_showEffects;
-(void)_checkCollectionMoveOut:(long long)arg1 ;
-(void)_checkMiniMode:(double)arg1 ;
-(char)_inHideCollectionsMode;
-(void)_reflectSize;
-(void)_sendCarbonNotification;
-(void)_validateFontPanelFontAttributes;
-(void)_updateFontPreviewFont;
-(void)_setPreviewFont:(id)arg1 ;
-(void)_fontPanelRemoveCollectionSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_setFont:(id)arg1 ;
-(void)loadFaces:(id)arg1 ;
-(void)_chooseBestMatchingFace;
-(void)_chooseSize:(id)arg1 ;
-(void)_toggleTypographyPanel;
-(void)setCarbonNotification:(void*)arg1 ;
-(void)reloadDefaultFontFamilies;
-(void)setSizeTitle:(id)arg1 ;
-(void)setChooser:(id)arg1 ;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(void)_sizeEditDone:(id)arg1 ;
-(void)_addSizeToList:(id)arg1 ;
-(void)_removeSizeFromList:(id)arg1 ;
-(void)_resetSizeList:(id)arg1 ;
-(char)_inHideFaceMode;
-(void)_notifyTypographyPanel;
-(void)collectionButtonPressed:(id)arg1 ;
-(void)_openExtrasPopup:(id)arg1 ;
@end

