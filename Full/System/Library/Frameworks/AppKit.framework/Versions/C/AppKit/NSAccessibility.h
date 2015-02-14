/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString, NSArray;


@protocol NSAccessibility <NSObject>
@property (getter=isAccessibilityElement) char accessibilityElement; 
@property (assign) CGRect accessibilityFrame; 
@property (getter=isAccessibilityFocused) char accessibilityFocused; 
@property (assign) CGPoint accessibilityActivationPoint; 
@property (__weak) id accessibilityTopLevelUIElement; 
@property (copy) NSURL * accessibilityURL; 
@property (retain) id accessibilityValue; 
@property (copy) NSString * accessibilityValueDescription; 
@property (copy) NSArray * accessibilityVisibleChildren; 
@property (copy) NSString * accessibilitySubrole; 
@property (copy) NSString * accessibilityTitle; 
@property (__weak) id accessibilityTitleUIElement; 
@property (copy) NSArray * accessibilityNextContents; 
@property (assign) long long accessibilityOrientation; 
@property (retain) id accessibilityOverflowButton; 
@property (__weak) id accessibilityParent; 
@property (copy) NSString * accessibilityPlaceholderValue; 
@property (copy) NSArray * accessibilityPreviousContents; 
@property (copy) NSString * accessibilityRole; 
@property (copy) NSString * accessibilityRoleDescription; 
@property (retain) id accessibilitySearchButton; 
@property (retain) id accessibilitySearchMenu; 
@property (getter=isAccessibilitySelected) char accessibilitySelected; 
@property (copy) NSArray * accessibilitySelectedChildren; 
@property (copy) NSArray * accessibilityServesAsTitleForUIElements; 
@property (retain) id accessibilityShownMenu; 
@property (retain) id accessibilityMinValue; 
@property (retain) id accessibilityMaxValue; 
@property (copy) NSArray * accessibilityLinkedUIElements; 
@property (__weak) id accessibilityWindow; 
@property (copy) NSString * accessibilityIdentifier; 
@property (copy) NSString * accessibilityHelp; 
@property (copy) NSString * accessibilityFilename; 
@property (getter=isAccessibilityExpanded) char accessibilityExpanded; 
@property (getter=isAccessibilityEdited) char accessibilityEdited; 
@property (getter=isAccessibilityEnabled) char accessibilityEnabled; 
@property (copy) NSArray * accessibilityChildren; 
@property (retain) id accessibilityClearButton; 
@property (retain) id accessibilityCancelButton; 
@property (getter=isAccessibilityProtectedContent) char accessibilityProtectedContent; 
@property (copy) NSArray * accessibilityContents; 
@property (copy) NSString * accessibilityLabel; 
@property (getter=isAccessibilityAlternateUIVisible) char accessibilityAlternateUIVisible; 
@property (copy) NSArray * accessibilitySharedFocusElements; 
@property (retain) id accessibilityApplicationFocusedUIElement; 
@property (retain) id accessibilityMainWindow; 
@property (getter=isAccessibilityHidden) char accessibilityHidden; 
@property (getter=isAccessibilityFrontmost) char accessibilityFrontmost; 
@property (retain) id accessibilityFocusedWindow; 
@property (copy) NSArray * accessibilityWindows; 
@property (__weak) id accessibilityExtrasMenuBar; 
@property (__weak) id accessibilityMenuBar; 
@property (copy) NSArray * accessibilityColumnTitles; 
@property (getter=isAccessibilityOrderedByRow) char accessibilityOrderedByRow; 
@property (assign) long long accessibilityHorizontalUnits; 
@property (assign) long long accessibilityVerticalUnits; 
@property (copy) NSString * accessibilityHorizontalUnitDescription; 
@property (copy) NSString * accessibilityVerticalUnitDescription; 
@property (copy) NSArray * accessibilityHandles; 
@property (retain) id accessibilityWarningValue; 
@property (retain) id accessibilityCriticalValue; 
@property (getter=isAccessibilityDisclosed) char accessibilityDisclosed; 
@property (__weak) id accessibilityDisclosedByRow; 
@property (retain) id accessibilityDisclosedRows; 
@property (assign) long long accessibilityDisclosureLevel; 
@property (copy) NSArray * accessibilityMarkerUIElements; 
@property (retain) id accessibilityMarkerValues; 
@property (retain) id accessibilityMarkerGroupUIElement; 
@property (assign) long long accessibilityUnits; 
@property (copy) NSString * accessibilityUnitDescription; 
@property (assign) long long accessibilityRulerMarkerType; 
@property (copy) NSString * accessibilityMarkerTypeDescription; 
@property (retain) id accessibilityHorizontalScrollBar; 
@property (retain) id accessibilityVerticalScrollBar; 
@property (copy) NSArray * accessibilityAllowedValues; 
@property (copy) NSArray * accessibilityLabelUIElements; 
@property (assign) float accessibilityLabelValue; 
@property (copy) NSArray * accessibilitySplitters; 
@property (retain) id accessibilityDecrementButton; 
@property (retain) id accessibilityIncrementButton; 
@property (copy) NSArray * accessibilityTabs; 
@property (retain) id accessibilityHeader; 
@property (assign) long long accessibilityColumnCount; 
@property (assign) long long accessibilityRowCount; 
@property (assign) long long accessibilityIndex; 
@property (copy) NSArray * accessibilityColumns; 
@property (copy) NSArray * accessibilityRows; 
@property (copy) NSArray * accessibilityVisibleRows; 
@property (copy) NSArray * accessibilitySelectedRows; 
@property (copy) NSArray * accessibilityVisibleColumns; 
@property (copy) NSArray * accessibilitySelectedColumns; 
@property (assign) long long accessibilitySortDirection; 
@property (copy) NSArray * accessibilityRowHeaderUIElements; 
@property (copy) NSArray * accessibilitySelectedCells; 
@property (copy) NSArray * accessibilityVisibleCells; 
@property (copy) NSArray * accessibilityColumnHeaderUIElements; 
@property (assign) NSRange accessibilityRowIndexRange; 
@property (assign) NSRange accessibilityColumnIndexRange; 
@property (assign) long long accessibilityInsertionPointLineNumber; 
@property (assign) NSRange accessibilitySharedCharacterRange; 
@property (copy) NSArray * accessibilitySharedTextUIElements; 
@property (assign) NSRange accessibilityVisibleCharacterRange; 
@property (assign) long long accessibilityNumberOfCharacters; 
@property (copy) NSString * accessibilitySelectedText; 
@property (assign) NSRange accessibilitySelectedTextRange; 
@property (copy) NSArray * accessibilitySelectedTextRanges; 
@property (retain) id accessibilityToolbarButton; 
@property (getter=isAccessibilityModal) char accessibilityModal; 
@property (retain) id accessibilityProxy; 
@property (getter=isAccessibilityMain) char accessibilityMain; 
@property (retain) id accessibilityFullScreenButton; 
@property (retain) id accessibilityGrowArea; 
@property (copy) NSString * accessibilityDocument; 
@property (retain) id accessibilityDefaultButton; 
@property (retain) id accessibilityCloseButton; 
@property (retain) id accessibilityZoomButton; 
@property (retain) id accessibilityMinimizeButton; 
@property (getter=isAccessibilityMinimized) char accessibilityMinimized; 
@required
-(char)isAccessibilityElement;
-(CGRect)accessibilityFrame;
-(id)accessibilityParent;
-(char)isAccessibilityFocused;
-(NSString *)accessibilityIdentifier;
-(CGPoint*)accessibilityLayoutPointForScreenPoint:(CGPoint)arg1;
-(CGSize*)accessibilityLayoutSizeForScreenSize:(CGSize)arg1;
-(CGPoint*)accessibilityScreenPointForLayoutPoint:(CGPoint)arg1;
-(CGSize*)accessibilityScreenSizeForLayoutSize:(CGSize)arg1;
-(id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2;
-(id)accessibilityAttributedStringForRange:(NSRange)arg1;
-(NSRange*)accessibilityRangeForLine:(long long)arg1;
-(id)accessibilityStringForRange:(NSRange)arg1;
-(NSRange*)accessibilityRangeForPosition:(CGPoint)arg1;
-(NSRange*)accessibilityRangeForIndex:(long long)arg1;
-(CGRect*)accessibilityFrameForRange:(NSRange)arg1;
-(id)accessibilityRTFForRange:(NSRange)arg1;
-(NSRange*)accessibilityStyleRangeForIndex:(long long)arg1;
-(long long)accessibilityLineForIndex:(long long)arg1;
-(char)accessibilityPerformCancel;
-(char)accessibilityPerformConfirm;
-(char)accessibilityPerformDecrement;
-(char)accessibilityPerformDelete;
-(char)accessibilityPerformIncrement;
-(char)accessibilityPerformPick;
-(char)accessibilityPerformPress;
-(char)accessibilityPerformRaise;
-(char)accessibilityPerformShowAlternateUI;
-(char)accessibilityPerformShowDefaultUI;
-(char)accessibilityPerformShowMenu;
-(char)isAccessibilitySelectorAllowed:(SEL)arg1;
-(void)setAccessibilityElement:(char)arg1;
-(void)setAccessibilityFrame:(CGRect)arg1;
-(void)setAccessibilityFocused:(char)arg1;
-(CGPoint)accessibilityActivationPoint;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1;
-(id)accessibilityTopLevelUIElement;
-(void)setAccessibilityTopLevelUIElement:(id)arg1;
-(NSURL *)accessibilityURL;
-(void)setAccessibilityURL:(id)arg1;
-(id)accessibilityValue;
-(void)setAccessibilityValue:(id)arg1;
-(NSString *)accessibilityValueDescription;
-(void)setAccessibilityValueDescription:(id)arg1;
-(NSArray *)accessibilityVisibleChildren;
-(void)setAccessibilityVisibleChildren:(id)arg1;
-(NSString *)accessibilitySubrole;
-(void)setAccessibilitySubrole:(id)arg1;
-(NSString *)accessibilityTitle;
-(void)setAccessibilityTitle:(id)arg1;
-(id)accessibilityTitleUIElement;
-(void)setAccessibilityTitleUIElement:(id)arg1;
-(NSArray *)accessibilityNextContents;
-(void)setAccessibilityNextContents:(id)arg1;
-(long long)accessibilityOrientation;
-(void)setAccessibilityOrientation:(long long)arg1;
-(id)accessibilityOverflowButton;
-(void)setAccessibilityOverflowButton:(id)arg1;
-(void)setAccessibilityParent:(id)arg1;
-(NSString *)accessibilityPlaceholderValue;
-(void)setAccessibilityPlaceholderValue:(id)arg1;
-(NSArray *)accessibilityPreviousContents;
-(void)setAccessibilityPreviousContents:(id)arg1;
-(NSString *)accessibilityRole;
-(void)setAccessibilityRole:(id)arg1;
-(NSString *)accessibilityRoleDescription;
-(void)setAccessibilityRoleDescription:(id)arg1;
-(id)accessibilitySearchButton;
-(void)setAccessibilitySearchButton:(id)arg1;
-(id)accessibilitySearchMenu;
-(void)setAccessibilitySearchMenu:(id)arg1;
-(char)isAccessibilitySelected;
-(void)setAccessibilitySelected:(char)arg1;
-(NSArray *)accessibilitySelectedChildren;
-(void)setAccessibilitySelectedChildren:(id)arg1;
-(NSArray *)accessibilityServesAsTitleForUIElements;
-(void)setAccessibilityServesAsTitleForUIElements:(id)arg1;
-(id)accessibilityShownMenu;
-(void)setAccessibilityShownMenu:(id)arg1;
-(id)accessibilityMinValue;
-(void)setAccessibilityMinValue:(id)arg1;
-(id)accessibilityMaxValue;
-(void)setAccessibilityMaxValue:(id)arg1;
-(NSArray *)accessibilityLinkedUIElements;
-(void)setAccessibilityLinkedUIElements:(id)arg1;
-(id)accessibilityWindow;
-(void)setAccessibilityWindow:(id)arg1;
-(void)setAccessibilityIdentifier:(id)arg1;
-(NSString *)accessibilityHelp;
-(void)setAccessibilityHelp:(id)arg1;
-(NSString *)accessibilityFilename;
-(void)setAccessibilityFilename:(id)arg1;
-(char)isAccessibilityExpanded;
-(void)setAccessibilityExpanded:(char)arg1;
-(char)isAccessibilityEdited;
-(void)setAccessibilityEdited:(char)arg1;
-(char)isAccessibilityEnabled;
-(void)setAccessibilityEnabled:(char)arg1;
-(NSArray *)accessibilityChildren;
-(void)setAccessibilityChildren:(id)arg1;
-(id)accessibilityClearButton;
-(void)setAccessibilityClearButton:(id)arg1;
-(id)accessibilityCancelButton;
-(void)setAccessibilityCancelButton:(id)arg1;
-(char)isAccessibilityProtectedContent;
-(void)setAccessibilityProtectedContent:(char)arg1;
-(NSArray *)accessibilityContents;
-(void)setAccessibilityContents:(id)arg1;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(id)arg1;
-(char)isAccessibilityAlternateUIVisible;
-(void)setAccessibilityAlternateUIVisible:(char)arg1;
-(NSArray *)accessibilitySharedFocusElements;
-(void)setAccessibilitySharedFocusElements:(id)arg1;
-(id)accessibilityApplicationFocusedUIElement;
-(void)setAccessibilityApplicationFocusedUIElement:(id)arg1;
-(id)accessibilityMainWindow;
-(void)setAccessibilityMainWindow:(id)arg1;
-(char)isAccessibilityHidden;
-(void)setAccessibilityHidden:(char)arg1;
-(char)isAccessibilityFrontmost;
-(void)setAccessibilityFrontmost:(char)arg1;
-(id)accessibilityFocusedWindow;
-(void)setAccessibilityFocusedWindow:(id)arg1;
-(NSArray *)accessibilityWindows;
-(void)setAccessibilityWindows:(id)arg1;
-(id)accessibilityExtrasMenuBar;
-(void)setAccessibilityExtrasMenuBar:(id)arg1;
-(id)accessibilityMenuBar;
-(void)setAccessibilityMenuBar:(id)arg1;
-(NSArray *)accessibilityColumnTitles;
-(void)setAccessibilityColumnTitles:(id)arg1;
-(char)isAccessibilityOrderedByRow;
-(void)setAccessibilityOrderedByRow:(char)arg1;
-(long long)accessibilityHorizontalUnits;
-(void)setAccessibilityHorizontalUnits:(long long)arg1;
-(long long)accessibilityVerticalUnits;
-(void)setAccessibilityVerticalUnits:(long long)arg1;
-(NSString *)accessibilityHorizontalUnitDescription;
-(void)setAccessibilityHorizontalUnitDescription:(id)arg1;
-(NSString *)accessibilityVerticalUnitDescription;
-(void)setAccessibilityVerticalUnitDescription:(id)arg1;
-(NSArray *)accessibilityHandles;
-(void)setAccessibilityHandles:(id)arg1;
-(id)accessibilityWarningValue;
-(void)setAccessibilityWarningValue:(id)arg1;
-(id)accessibilityCriticalValue;
-(void)setAccessibilityCriticalValue:(id)arg1;
-(char)isAccessibilityDisclosed;
-(void)setAccessibilityDisclosed:(char)arg1;
-(id)accessibilityDisclosedByRow;
-(void)setAccessibilityDisclosedByRow:(id)arg1;
-(id)accessibilityDisclosedRows;
-(void)setAccessibilityDisclosedRows:(id)arg1;
-(long long)accessibilityDisclosureLevel;
-(void)setAccessibilityDisclosureLevel:(long long)arg1;
-(NSArray *)accessibilityMarkerUIElements;
-(void)setAccessibilityMarkerUIElements:(id)arg1;
-(id)accessibilityMarkerValues;
-(void)setAccessibilityMarkerValues:(id)arg1;
-(id)accessibilityMarkerGroupUIElement;
-(void)setAccessibilityMarkerGroupUIElement:(id)arg1;
-(long long)accessibilityUnits;
-(void)setAccessibilityUnits:(long long)arg1;
-(NSString *)accessibilityUnitDescription;
-(void)setAccessibilityUnitDescription:(id)arg1;
-(long long)accessibilityRulerMarkerType;
-(void)setAccessibilityRulerMarkerType:(long long)arg1;
-(NSString *)accessibilityMarkerTypeDescription;
-(void)setAccessibilityMarkerTypeDescription:(id)arg1;
-(id)accessibilityHorizontalScrollBar;
-(void)setAccessibilityHorizontalScrollBar:(id)arg1;
-(id)accessibilityVerticalScrollBar;
-(void)setAccessibilityVerticalScrollBar:(id)arg1;
-(NSArray *)accessibilityAllowedValues;
-(void)setAccessibilityAllowedValues:(id)arg1;
-(NSArray *)accessibilityLabelUIElements;
-(void)setAccessibilityLabelUIElements:(id)arg1;
-(float)accessibilityLabelValue;
-(void)setAccessibilityLabelValue:(float)arg1;
-(NSArray *)accessibilitySplitters;
-(void)setAccessibilitySplitters:(id)arg1;
-(id)accessibilityDecrementButton;
-(void)setAccessibilityDecrementButton:(id)arg1;
-(id)accessibilityIncrementButton;
-(void)setAccessibilityIncrementButton:(id)arg1;
-(NSArray *)accessibilityTabs;
-(void)setAccessibilityTabs:(id)arg1;
-(id)accessibilityHeader;
-(void)setAccessibilityHeader:(id)arg1;
-(long long)accessibilityColumnCount;
-(void)setAccessibilityColumnCount:(long long)arg1;
-(long long)accessibilityRowCount;
-(void)setAccessibilityRowCount:(long long)arg1;
-(long long)accessibilityIndex;
-(void)setAccessibilityIndex:(long long)arg1;
-(NSArray *)accessibilityColumns;
-(void)setAccessibilityColumns:(id)arg1;
-(NSArray *)accessibilityRows;
-(void)setAccessibilityRows:(id)arg1;
-(NSArray *)accessibilityVisibleRows;
-(void)setAccessibilityVisibleRows:(id)arg1;
-(NSArray *)accessibilitySelectedRows;
-(void)setAccessibilitySelectedRows:(id)arg1;
-(NSArray *)accessibilityVisibleColumns;
-(void)setAccessibilityVisibleColumns:(id)arg1;
-(NSArray *)accessibilitySelectedColumns;
-(void)setAccessibilitySelectedColumns:(id)arg1;
-(long long)accessibilitySortDirection;
-(void)setAccessibilitySortDirection:(long long)arg1;
-(NSArray *)accessibilityRowHeaderUIElements;
-(void)setAccessibilityRowHeaderUIElements:(id)arg1;
-(NSArray *)accessibilitySelectedCells;
-(void)setAccessibilitySelectedCells:(id)arg1;
-(NSArray *)accessibilityVisibleCells;
-(void)setAccessibilityVisibleCells:(id)arg1;
-(NSArray *)accessibilityColumnHeaderUIElements;
-(void)setAccessibilityColumnHeaderUIElements:(id)arg1;
-(NSRange)accessibilityRowIndexRange;
-(void)setAccessibilityRowIndexRange:(NSRange)arg1;
-(NSRange)accessibilityColumnIndexRange;
-(void)setAccessibilityColumnIndexRange:(NSRange)arg1;
-(long long)accessibilityInsertionPointLineNumber;
-(void)setAccessibilityInsertionPointLineNumber:(long long)arg1;
-(NSRange)accessibilitySharedCharacterRange;
-(void)setAccessibilitySharedCharacterRange:(NSRange)arg1;
-(NSArray *)accessibilitySharedTextUIElements;
-(void)setAccessibilitySharedTextUIElements:(id)arg1;
-(NSRange)accessibilityVisibleCharacterRange;
-(void)setAccessibilityVisibleCharacterRange:(NSRange)arg1;
-(long long)accessibilityNumberOfCharacters;
-(void)setAccessibilityNumberOfCharacters:(long long)arg1;
-(NSString *)accessibilitySelectedText;
-(void)setAccessibilitySelectedText:(id)arg1;
-(NSRange)accessibilitySelectedTextRange;
-(void)setAccessibilitySelectedTextRange:(NSRange)arg1;
-(NSArray *)accessibilitySelectedTextRanges;
-(void)setAccessibilitySelectedTextRanges:(id)arg1;
-(id)accessibilityToolbarButton;
-(void)setAccessibilityToolbarButton:(id)arg1;
-(char)isAccessibilityModal;
-(void)setAccessibilityModal:(char)arg1;
-(id)accessibilityProxy;
-(void)setAccessibilityProxy:(id)arg1;
-(char)isAccessibilityMain;
-(void)setAccessibilityMain:(char)arg1;
-(id)accessibilityFullScreenButton;
-(void)setAccessibilityFullScreenButton:(id)arg1;
-(id)accessibilityGrowArea;
-(void)setAccessibilityGrowArea:(id)arg1;
-(NSString *)accessibilityDocument;
-(void)setAccessibilityDocument:(id)arg1;
-(id)accessibilityDefaultButton;
-(void)setAccessibilityDefaultButton:(id)arg1;
-(id)accessibilityCloseButton;
-(void)setAccessibilityCloseButton:(id)arg1;
-(id)accessibilityZoomButton;
-(void)setAccessibilityZoomButton:(id)arg1;
-(id)accessibilityMinimizeButton;
-(void)setAccessibilityMinimizeButton:(id)arg1;
-(char)isAccessibilityMinimized;
-(void)setAccessibilityMinimized:(char)arg1;

@end

